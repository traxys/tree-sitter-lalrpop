[
 	"pub"
	"grammar"
	"match"
	"extern"
	"type"
	"enum"
] @keyword

[
 	"+"
	"*"
	"?"
] @operator

(grammar_type_params
	"<" @punctuation.bracket
	">" @punctuation.bracket)

(symbol
	"<" @punctuation.bracket
	">" @punctuation.bracket)

(binding_symbol
	"<" @punctuation.bracket
	">" @punctuation.bracket)

(binding_symbol
	name: (identifier) @variable.parameter
	item: (bare_symbol) @type)

(nonterminal
  (nonterminal_name) @function
  (type_ref) @type)

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

";" @punctuation.delimiter

(lifetime (identifier) @label)

(string_literal) @string
(regex_literal) @string
