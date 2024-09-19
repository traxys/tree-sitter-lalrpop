function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(","))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function plus(rule) {
	return seq(repeat(seq(rule, '+')), optional(rule))
}

module.exports = grammar({
	name: 'lalrpop',

	externals: $ => [
		$.macro_id,
		$.use,
		$._string_content,
		$.regex_literal,
		$.normal_action,
		$.failible_action,
	],

	extras: $ => [/\s/, $.comment],

	rules: {
		source_file: $ => seq(
			repeat($._use),
			$.grammar,
		),

		// TODO: annotations
		grammar: $ => seq(
			"grammar",
			optional($.grammar_type_params),
			optional($._grammar_params),
			optional($._where_clauses),
			";",
			repeat($.grammar_item),
		),

		comment: _ => token(seq('//', /.*/)),

		_use: $ => seq($.use, ";"),

		grammar_type_params: $ => seq("<", commaSep($.type_parameter), ">"),

		type_parameter: $ => choice($.lifetime, $.identifier),
		lifetime: $ => seq("'", $.identifier),
		identifier: $ => /(r#)?[_\p{XID_Start}][_\p{XID_Continue}]*/,
		id: $ => choice($.identifier, $.macro_id),

		_grammar_params: $ => seq("(", commaSep($.grammar_parameter), ")"),
		grammar_parameter: $ => seq($.identifier, ":", $.type_ref),

		_where_clauses: $ => seq("where", commaSep($.grammar_where_clause)),
		grammar_where_clause: $ => choice(
			seq($.lifetime, ":", plus($.lifetime)),
			seq(optional($.forall), $.type_ref, ":", plus($.type_bound)),
		),

		type_bound: $ => choice(
			$.lifetime,
			seq(
				optional($.forall),
				$.path,
				"(",
				commaSep($.type_ref),
				")",
				optional(seq("->", $.type_ref))
			),
			seq(
				optional($.forall),
				$.path,
				optional(seq("<", commaSep($.type_bound_param), ">"))
			),
		),

		type_bound_param: $ => choice(
			$.lifetime,
			$.type_ref,
			seq($.identifier, "=", $.type_ref),
		),

		type_ref: $ => choice(
			$.tuple_type,
			$.array_type,
			$.reference,
			$.parametrized_type,
			$.dyn_type,
			$.fn_type,
			$.symbol_type,
		),

		symbol: $ => choice(
			$.binding_symbol,
			seq("<", $.bare_symbol, ">"),
			$.bare_symbol,
		),
		binding_symbol: $ => seq(
			"<", 
			optional($.mut), 
			field('name', $.identifier), 
			":", 
			field("item",$.bare_symbol), 
			">"
		),

		bare_symbol: $ => choice(
			$._symbol1,
			seq($.bare_symbol, $.repeat),
		),
		repeat: $ => choice("+", "*", "?"),
		_symbol1: $ => choice(
			$.macro,
			$._quoted_literal,
			$.identifier,
			$.lookahead,
			$.lookbehind,
			$.error,
			$.escape,
			$.expr_symbol,
		),

		macro: $ => seq($.macro_id, "<", commaSep($.symbol), ">"),
		escape: $ => /`[^`]*`/,
		lookahead: $ => "@L",
		lookbehind: $ => "@R",
		error: $ => "!",
		_quoted_literal: $ => choice($.string_literal, $.regex_literal),
		expr_symbol: $ => seq("(", repeat($.symbol), ")"),

		string_literal: $ => seq(
			alias(/b?"/, '"'),
			repeat(choice(
				$.escape_sequence,
				/\s+/,
				$._string_content
			)),
			token.immediate('"')
		),
		escape_sequence: $ => token.immediate(
			seq('\\',
			choice(
				/[^xu]/,
				/u[0-9a-fA-F]{4}/,
				/u\{[0-9a-fA-F]+\}/,
				/x[0-9a-fA-F]{2}/
			)
		)),

		symbol_type: $ => seq("#", $.symbol, "#"),
		forall: $ => seq("for", "<", commaSep($.type_parameter), ">"),
		fn_type: $ => seq(
			"dyn",
			optional($.forall),
			$.path,
			"(",
			commaSep($.type_parameter),
			")",
			optional(seq("->", $.type_ref)),
		),
		parametrized_type: $ => seq(
			$.path,
			optional(seq(
				"<",
				commaSep(choice($.lifetime, $.type_ref)),
				">",
			)),
		),
		dyn_type: $ => seq("dyn", $.parametrized_type),
		tuple_type: $ => seq("(", commaSep($.type_ref), ")"),
		array_type: $ => seq("[", $.type_ref, "]"),
		reference: $ => seq("&", optional($.lifetime), optional($.mut), $.type_ref),
		mut: $ => "mut",

		path: $ => seq(
			optional('::'),
			repeat(seq($.identifier, '::')),
			$.identifier
		),


		grammar_item: $ => choice(
			$._use,
			$.extern_token,
			$.match_token,
			$.nonterminal,
		),

		extern_token: $ => seq(
			"extern",
			"{",
			repeat($.associated_type),
			optional(seq($.enum_token, repeat($.associated_type))),
			"}",
		),

		associated_type: $ => seq("type", $.identifier, "=", $.type_ref, ";"),
		enum_token: $ => seq(
			"enum",
			$.type_ref,
			"{",
			commaSep($.conversion),
			"}",
		),
		conversion: $ => seq($.terminal, $.normal_action),
		terminal: $ => choice(
			$._quoted_literal,
			$.identifier,
		),

		match_token: $ => seq(
			$.match_block,
			repeat($.match_else)
		),

		match_block: $ => seq("match", "{", commaSep($.match_item), "}"),
		match_else: $ => seq("else", "{", commaSep($.match_item), "}"),

		match_item: $ => choice(
			"_",
			seq($._quoted_literal, optional($.normal_action)),
		),

		nonterminal: $ => seq(
			repeat($.annotation),
			optional($.visibility),
			$.nonterminal_name,
			optional(seq(":", $.type_ref)),
			"=",
			$._alternatives,
		),

		_alternatives: $ => choice(
			seq($.alternative, ";"),
			seq("{", commaSep($.alternative), "}", optional(";")),
		),

		alternative: $ => choice(
			seq(
				repeat($.annotation),
				$.symbol,
				repeat($.symbol),
				optional(seq("if", $.cond)),
				optional($.action),
			),
			seq(optional(seq("if", $.cond)), $.action),
		),

		action: $ => choice(
			"=>@L",
			"=>@R",
			$.normal_action,
			$.failible_action,
		),

		cond: $ => seq($._not_macro_id, $._cond_op, $.string_literal),
		_cond_op: $ => choice("==", "!=", "~~", "!~"),

		annotation: $ => seq("#", "[", $.id, optional($.annotation_arg), "]"),
		annotation_arg: $ => seq("(", $.id, "=", $.string_literal, ")"),

		_not_macro_id: $ => $.identifier,
		nonterminal_name: $ => choice(
			seq($.macro_id, "<", commaSep($._not_macro_id), ">"),
			$._not_macro_id,
			$.escape,
		),

		visibility: $ => seq(
			"pub",
			optional(seq(
				"(",
				optional("in"),
				$.path,
				")",
			))
		),
	}
});
