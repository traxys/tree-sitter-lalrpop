#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 518
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_grammar = 1,
  anon_sym_SEMI = 2,
  anon_sym_LT = 3,
  anon_sym_COMMA = 4,
  anon_sym_GT = 5,
  anon_sym_SQUOTE = 6,
  sym_identifier = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COLON = 10,
  anon_sym_where = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_EQ = 14,
  anon_sym_STAR = 15,
  anon_sym_QMARK = 16,
  sym_escape = 17,
  sym_lookahead = 18,
  sym_lookbehind = 19,
  sym_error = 20,
  aux_sym_string_literal_token1 = 21,
  anon_sym_DQUOTE = 22,
  sym_escape_sequence = 23,
  anon_sym_POUND = 24,
  anon_sym_for = 25,
  anon_sym_dyn = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_AMP = 29,
  sym_mut = 30,
  anon_sym_COLON_COLON = 31,
  anon_sym_extern = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_type = 35,
  anon_sym_enum = 36,
  anon_sym_match = 37,
  anon_sym_else = 38,
  anon_sym__ = 39,
  anon_sym_if = 40,
  anon_sym_EQ_GT_ATL = 41,
  anon_sym_EQ_GT_ATR = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_TILDE_TILDE = 45,
  anon_sym_BANG_TILDE = 46,
  anon_sym_pub = 47,
  anon_sym_in = 48,
  sym_macro_id = 49,
  sym_use = 50,
  sym__string_content = 51,
  sym_regex_literal = 52,
  sym_normal_action = 53,
  sym_failible_action = 54,
  sym_source_file = 55,
  sym_grammar = 56,
  sym__use = 57,
  sym_grammar_type_params = 58,
  sym_type_parameter = 59,
  sym_lifetime = 60,
  sym_id = 61,
  sym__grammar_params = 62,
  sym_grammar_parameter = 63,
  sym__where_clauses = 64,
  sym_grammar_where_clause = 65,
  sym_type_bound = 66,
  sym_type_bound_param = 67,
  sym_type_ref = 68,
  sym_symbol = 69,
  sym_binding_symbol = 70,
  sym_bare_symbol = 71,
  sym_repeat = 72,
  sym__symbol1 = 73,
  sym_macro = 74,
  sym__quoted_literal = 75,
  sym_expr_symbol = 76,
  sym_string_literal = 77,
  sym_symbol_type = 78,
  sym_forall = 79,
  sym_fn_type = 80,
  sym_parametrized_type = 81,
  sym_dyn_type = 82,
  sym_tuple_type = 83,
  sym_array_type = 84,
  sym_reference = 85,
  sym_path = 86,
  sym_grammar_item = 87,
  sym_extern_token = 88,
  sym_associated_type = 89,
  sym_enum_token = 90,
  sym_conversion = 91,
  sym_terminal = 92,
  sym_match_token = 93,
  sym_match_block = 94,
  sym_match_else = 95,
  sym_match_item = 96,
  sym_nonterminal = 97,
  sym__alternatives = 98,
  sym_alternative = 99,
  sym_action = 100,
  sym_cond = 101,
  sym__cond_op = 102,
  sym_annotation = 103,
  sym_annotation_arg = 104,
  sym__not_macro_id = 105,
  sym_nonterminal_name = 106,
  sym_visibility = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_grammar_repeat1 = 109,
  aux_sym_grammar_type_params_repeat1 = 110,
  aux_sym__grammar_params_repeat1 = 111,
  aux_sym__where_clauses_repeat1 = 112,
  aux_sym_grammar_where_clause_repeat1 = 113,
  aux_sym_grammar_where_clause_repeat2 = 114,
  aux_sym_type_bound_repeat1 = 115,
  aux_sym_type_bound_repeat2 = 116,
  aux_sym_macro_repeat1 = 117,
  aux_sym_expr_symbol_repeat1 = 118,
  aux_sym_string_literal_repeat1 = 119,
  aux_sym_parametrized_type_repeat1 = 120,
  aux_sym_path_repeat1 = 121,
  aux_sym_extern_token_repeat1 = 122,
  aux_sym_enum_token_repeat1 = 123,
  aux_sym_match_token_repeat1 = 124,
  aux_sym_match_block_repeat1 = 125,
  aux_sym_nonterminal_repeat1 = 126,
  aux_sym__alternatives_repeat1 = 127,
  aux_sym_nonterminal_name_repeat1 = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_where] = "where",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [sym_escape] = "escape",
  [sym_lookahead] = "lookahead",
  [sym_lookbehind] = "lookbehind",
  [sym_error] = "error",
  [aux_sym_string_literal_token1] = "\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_POUND] = "#",
  [anon_sym_for] = "for",
  [anon_sym_dyn] = "dyn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AMP] = "&",
  [sym_mut] = "mut",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_extern] = "extern",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_enum] = "enum",
  [anon_sym_match] = "match",
  [anon_sym_else] = "else",
  [anon_sym__] = "_",
  [anon_sym_if] = "if",
  [anon_sym_EQ_GT_ATL] = "=>@L",
  [anon_sym_EQ_GT_ATR] = "=>@R",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE_TILDE] = "~~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_pub] = "pub",
  [anon_sym_in] = "in",
  [sym_macro_id] = "macro_id",
  [sym_use] = "use",
  [sym__string_content] = "_string_content",
  [sym_regex_literal] = "regex_literal",
  [sym_normal_action] = "normal_action",
  [sym_failible_action] = "failible_action",
  [sym_source_file] = "source_file",
  [sym_grammar] = "grammar",
  [sym__use] = "_use",
  [sym_grammar_type_params] = "grammar_type_params",
  [sym_type_parameter] = "type_parameter",
  [sym_lifetime] = "lifetime",
  [sym_id] = "id",
  [sym__grammar_params] = "_grammar_params",
  [sym_grammar_parameter] = "grammar_parameter",
  [sym__where_clauses] = "_where_clauses",
  [sym_grammar_where_clause] = "grammar_where_clause",
  [sym_type_bound] = "type_bound",
  [sym_type_bound_param] = "type_bound_param",
  [sym_type_ref] = "type_ref",
  [sym_symbol] = "symbol",
  [sym_binding_symbol] = "binding_symbol",
  [sym_bare_symbol] = "bare_symbol",
  [sym_repeat] = "repeat",
  [sym__symbol1] = "_symbol1",
  [sym_macro] = "macro",
  [sym__quoted_literal] = "_quoted_literal",
  [sym_expr_symbol] = "expr_symbol",
  [sym_string_literal] = "string_literal",
  [sym_symbol_type] = "symbol_type",
  [sym_forall] = "forall",
  [sym_fn_type] = "fn_type",
  [sym_parametrized_type] = "parametrized_type",
  [sym_dyn_type] = "dyn_type",
  [sym_tuple_type] = "tuple_type",
  [sym_array_type] = "array_type",
  [sym_reference] = "reference",
  [sym_path] = "path",
  [sym_grammar_item] = "grammar_item",
  [sym_extern_token] = "extern_token",
  [sym_associated_type] = "associated_type",
  [sym_enum_token] = "enum_token",
  [sym_conversion] = "conversion",
  [sym_terminal] = "terminal",
  [sym_match_token] = "match_token",
  [sym_match_block] = "match_block",
  [sym_match_else] = "match_else",
  [sym_match_item] = "match_item",
  [sym_nonterminal] = "nonterminal",
  [sym__alternatives] = "_alternatives",
  [sym_alternative] = "alternative",
  [sym_action] = "action",
  [sym_cond] = "cond",
  [sym__cond_op] = "_cond_op",
  [sym_annotation] = "annotation",
  [sym_annotation_arg] = "annotation_arg",
  [sym__not_macro_id] = "_not_macro_id",
  [sym_nonterminal_name] = "nonterminal_name",
  [sym_visibility] = "visibility",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_grammar_type_params_repeat1] = "grammar_type_params_repeat1",
  [aux_sym__grammar_params_repeat1] = "_grammar_params_repeat1",
  [aux_sym__where_clauses_repeat1] = "_where_clauses_repeat1",
  [aux_sym_grammar_where_clause_repeat1] = "grammar_where_clause_repeat1",
  [aux_sym_grammar_where_clause_repeat2] = "grammar_where_clause_repeat2",
  [aux_sym_type_bound_repeat1] = "type_bound_repeat1",
  [aux_sym_type_bound_repeat2] = "type_bound_repeat2",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_expr_symbol_repeat1] = "expr_symbol_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parametrized_type_repeat1] = "parametrized_type_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_extern_token_repeat1] = "extern_token_repeat1",
  [aux_sym_enum_token_repeat1] = "enum_token_repeat1",
  [aux_sym_match_token_repeat1] = "match_token_repeat1",
  [aux_sym_match_block_repeat1] = "match_block_repeat1",
  [aux_sym_nonterminal_repeat1] = "nonterminal_repeat1",
  [aux_sym__alternatives_repeat1] = "_alternatives_repeat1",
  [aux_sym_nonterminal_name_repeat1] = "nonterminal_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grammar] = anon_sym_grammar,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_escape] = sym_escape,
  [sym_lookahead] = sym_lookahead,
  [sym_lookbehind] = sym_lookbehind,
  [sym_error] = sym_error,
  [aux_sym_string_literal_token1] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_dyn] = anon_sym_dyn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_mut] = sym_mut,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_else] = anon_sym_else,
  [anon_sym__] = anon_sym__,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_EQ_GT_ATL] = anon_sym_EQ_GT_ATL,
  [anon_sym_EQ_GT_ATR] = anon_sym_EQ_GT_ATR,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_in] = anon_sym_in,
  [sym_macro_id] = sym_macro_id,
  [sym_use] = sym_use,
  [sym__string_content] = sym__string_content,
  [sym_regex_literal] = sym_regex_literal,
  [sym_normal_action] = sym_normal_action,
  [sym_failible_action] = sym_failible_action,
  [sym_source_file] = sym_source_file,
  [sym_grammar] = sym_grammar,
  [sym__use] = sym__use,
  [sym_grammar_type_params] = sym_grammar_type_params,
  [sym_type_parameter] = sym_type_parameter,
  [sym_lifetime] = sym_lifetime,
  [sym_id] = sym_id,
  [sym__grammar_params] = sym__grammar_params,
  [sym_grammar_parameter] = sym_grammar_parameter,
  [sym__where_clauses] = sym__where_clauses,
  [sym_grammar_where_clause] = sym_grammar_where_clause,
  [sym_type_bound] = sym_type_bound,
  [sym_type_bound_param] = sym_type_bound_param,
  [sym_type_ref] = sym_type_ref,
  [sym_symbol] = sym_symbol,
  [sym_binding_symbol] = sym_binding_symbol,
  [sym_bare_symbol] = sym_bare_symbol,
  [sym_repeat] = sym_repeat,
  [sym__symbol1] = sym__symbol1,
  [sym_macro] = sym_macro,
  [sym__quoted_literal] = sym__quoted_literal,
  [sym_expr_symbol] = sym_expr_symbol,
  [sym_string_literal] = sym_string_literal,
  [sym_symbol_type] = sym_symbol_type,
  [sym_forall] = sym_forall,
  [sym_fn_type] = sym_fn_type,
  [sym_parametrized_type] = sym_parametrized_type,
  [sym_dyn_type] = sym_dyn_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_array_type] = sym_array_type,
  [sym_reference] = sym_reference,
  [sym_path] = sym_path,
  [sym_grammar_item] = sym_grammar_item,
  [sym_extern_token] = sym_extern_token,
  [sym_associated_type] = sym_associated_type,
  [sym_enum_token] = sym_enum_token,
  [sym_conversion] = sym_conversion,
  [sym_terminal] = sym_terminal,
  [sym_match_token] = sym_match_token,
  [sym_match_block] = sym_match_block,
  [sym_match_else] = sym_match_else,
  [sym_match_item] = sym_match_item,
  [sym_nonterminal] = sym_nonterminal,
  [sym__alternatives] = sym__alternatives,
  [sym_alternative] = sym_alternative,
  [sym_action] = sym_action,
  [sym_cond] = sym_cond,
  [sym__cond_op] = sym__cond_op,
  [sym_annotation] = sym_annotation,
  [sym_annotation_arg] = sym_annotation_arg,
  [sym__not_macro_id] = sym__not_macro_id,
  [sym_nonterminal_name] = sym_nonterminal_name,
  [sym_visibility] = sym_visibility,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym_grammar_type_params_repeat1] = aux_sym_grammar_type_params_repeat1,
  [aux_sym__grammar_params_repeat1] = aux_sym__grammar_params_repeat1,
  [aux_sym__where_clauses_repeat1] = aux_sym__where_clauses_repeat1,
  [aux_sym_grammar_where_clause_repeat1] = aux_sym_grammar_where_clause_repeat1,
  [aux_sym_grammar_where_clause_repeat2] = aux_sym_grammar_where_clause_repeat2,
  [aux_sym_type_bound_repeat1] = aux_sym_type_bound_repeat1,
  [aux_sym_type_bound_repeat2] = aux_sym_type_bound_repeat2,
  [aux_sym_macro_repeat1] = aux_sym_macro_repeat1,
  [aux_sym_expr_symbol_repeat1] = aux_sym_expr_symbol_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parametrized_type_repeat1] = aux_sym_parametrized_type_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_extern_token_repeat1] = aux_sym_extern_token_repeat1,
  [aux_sym_enum_token_repeat1] = aux_sym_enum_token_repeat1,
  [aux_sym_match_token_repeat1] = aux_sym_match_token_repeat1,
  [aux_sym_match_block_repeat1] = aux_sym_match_block_repeat1,
  [aux_sym_nonterminal_repeat1] = aux_sym_nonterminal_repeat1,
  [aux_sym__alternatives_repeat1] = aux_sym__alternatives_repeat1,
  [aux_sym_nonterminal_name_repeat1] = aux_sym_nonterminal_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_grammar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_lookahead] = {
    .visible = true,
    .named = true,
  },
  [sym_lookbehind] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dyn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_mut] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_ATL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_ATR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_id] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_regex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_action] = {
    .visible = true,
    .named = true,
  },
  [sym_failible_action] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar] = {
    .visible = true,
    .named = true,
  },
  [sym__use] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_type_params] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_lifetime] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym__grammar_params] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__where_clauses] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol1] = {
    .visible = false,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_type] = {
    .visible = true,
    .named = true,
  },
  [sym_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parametrized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dyn_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_item] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_token] = {
    .visible = true,
    .named = true,
  },
  [sym_associated_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_token] = {
    .visible = true,
    .named = true,
  },
  [sym_conversion] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_match_token] = {
    .visible = true,
    .named = true,
  },
  [sym_match_block] = {
    .visible = true,
    .named = true,
  },
  [sym_match_else] = {
    .visible = true,
    .named = true,
  },
  [sym_match_item] = {
    .visible = true,
    .named = true,
  },
  [sym_nonterminal] = {
    .visible = true,
    .named = true,
  },
  [sym__alternatives] = {
    .visible = false,
    .named = true,
  },
  [sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym__cond_op] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__not_macro_id] = {
    .visible = false,
    .named = true,
  },
  [sym_nonterminal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_type_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__grammar_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__where_clauses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_where_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_where_clause_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parametrized_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extern_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nonterminal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nonterminal_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_item = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 3},
    {field_name, 1},
  [2] =
    {field_item, 4},
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 47,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 15,
  [57] = 51,
  [58] = 47,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 60,
  [64] = 59,
  [65] = 65,
  [66] = 59,
  [67] = 61,
  [68] = 60,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 106,
  [109] = 109,
  [110] = 19,
  [111] = 111,
  [112] = 111,
  [113] = 109,
  [114] = 111,
  [115] = 109,
  [116] = 41,
  [117] = 46,
  [118] = 27,
  [119] = 32,
  [120] = 45,
  [121] = 34,
  [122] = 28,
  [123] = 35,
  [124] = 39,
  [125] = 25,
  [126] = 42,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 69,
  [141] = 141,
  [142] = 71,
  [143] = 143,
  [144] = 81,
  [145] = 70,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 27,
  [209] = 127,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 27,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 25,
  [222] = 222,
  [223] = 25,
  [224] = 224,
  [225] = 19,
  [226] = 226,
  [227] = 227,
  [228] = 41,
  [229] = 207,
  [230] = 45,
  [231] = 231,
  [232] = 232,
  [233] = 28,
  [234] = 35,
  [235] = 235,
  [236] = 46,
  [237] = 42,
  [238] = 238,
  [239] = 39,
  [240] = 34,
  [241] = 32,
  [242] = 141,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 248,
  [251] = 248,
  [252] = 139,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 253,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 256,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 246,
  [274] = 246,
  [275] = 261,
  [276] = 267,
  [277] = 277,
  [278] = 278,
  [279] = 267,
  [280] = 253,
  [281] = 281,
  [282] = 277,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 286,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 294,
  [297] = 297,
  [298] = 298,
  [299] = 286,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 294,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 286,
  [310] = 294,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 317,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 317,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 69,
  [342] = 342,
  [343] = 320,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 315,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 338,
  [370] = 81,
  [371] = 371,
  [372] = 372,
  [373] = 320,
  [374] = 374,
  [375] = 70,
  [376] = 71,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 356,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 25,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 27,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 346,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 166,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 219,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 220,
  [436] = 436,
  [437] = 437,
  [438] = 218,
  [439] = 439,
  [440] = 440,
  [441] = 211,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 465,
  [495] = 495,
  [496] = 490,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 486,
  [502] = 502,
  [503] = 470,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 470,
  [508] = 475,
  [509] = 509,
  [510] = 510,
  [511] = 499,
  [512] = 512,
  [513] = 469,
  [514] = 514,
  [515] = 469,
  [516] = 509,
  [517] = 509,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '~') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(112);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '~') ADVANCE(148);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 65:
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(100);
      END_STATE();
    case 66:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == ']') ADVANCE(126);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(117);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(65);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(94);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(151);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(138);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(132);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(90);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(122);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_lookahead);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_lookbehind);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '~') ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_dyn);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_dyn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_mut);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_mut);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ_GT_ATL);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ_GT_ATR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_pub);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 67, .external_lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 67, .external_lex_state = 4},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 67, .external_lex_state = 4},
  [27] = {.lex_state = 1, .external_lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 67, .external_lex_state = 4},
  [31] = {.lex_state = 67, .external_lex_state = 4},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 67, .external_lex_state = 4},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 67, .external_lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 67, .external_lex_state = 4},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 67, .external_lex_state = 4},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 2, .external_lex_state = 5},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 5},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 2, .external_lex_state = 5},
  [51] = {.lex_state = 2, .external_lex_state = 5},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 5},
  [59] = {.lex_state = 2, .external_lex_state = 5},
  [60] = {.lex_state = 2, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
  [62] = {.lex_state = 2, .external_lex_state = 5},
  [63] = {.lex_state = 2, .external_lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 5},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 2, .external_lex_state = 5},
  [67] = {.lex_state = 2, .external_lex_state = 5},
  [68] = {.lex_state = 2, .external_lex_state = 5},
  [69] = {.lex_state = 1, .external_lex_state = 3},
  [70] = {.lex_state = 1, .external_lex_state = 3},
  [71] = {.lex_state = 1, .external_lex_state = 3},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 2, .external_lex_state = 5},
  [77] = {.lex_state = 2, .external_lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 1, .external_lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3, .external_lex_state = 5},
  [107] = {.lex_state = 3, .external_lex_state = 5},
  [108] = {.lex_state = 3, .external_lex_state = 5},
  [109] = {.lex_state = 2, .external_lex_state = 5},
  [110] = {.lex_state = 2, .external_lex_state = 5},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 2, .external_lex_state = 5},
  [113] = {.lex_state = 2, .external_lex_state = 5},
  [114] = {.lex_state = 2, .external_lex_state = 5},
  [115] = {.lex_state = 2, .external_lex_state = 5},
  [116] = {.lex_state = 2, .external_lex_state = 5},
  [117] = {.lex_state = 2, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 2, .external_lex_state = 5},
  [120] = {.lex_state = 2, .external_lex_state = 5},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 2, .external_lex_state = 5},
  [123] = {.lex_state = 2, .external_lex_state = 5},
  [124] = {.lex_state = 2, .external_lex_state = 5},
  [125] = {.lex_state = 2, .external_lex_state = 5},
  [126] = {.lex_state = 2, .external_lex_state = 5},
  [127] = {.lex_state = 2, .external_lex_state = 5},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 68, .external_lex_state = 4},
  [136] = {.lex_state = 68, .external_lex_state = 4},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 68, .external_lex_state = 4},
  [139] = {.lex_state = 2, .external_lex_state = 5},
  [140] = {.lex_state = 2, .external_lex_state = 5},
  [141] = {.lex_state = 2, .external_lex_state = 5},
  [142] = {.lex_state = 2, .external_lex_state = 5},
  [143] = {.lex_state = 67},
  [144] = {.lex_state = 2, .external_lex_state = 5},
  [145] = {.lex_state = 2, .external_lex_state = 5},
  [146] = {.lex_state = 67},
  [147] = {.lex_state = 68, .external_lex_state = 4},
  [148] = {.lex_state = 67, .external_lex_state = 4},
  [149] = {.lex_state = 67},
  [150] = {.lex_state = 68, .external_lex_state = 4},
  [151] = {.lex_state = 68, .external_lex_state = 4},
  [152] = {.lex_state = 10, .external_lex_state = 6},
  [153] = {.lex_state = 67, .external_lex_state = 4},
  [154] = {.lex_state = 68, .external_lex_state = 4},
  [155] = {.lex_state = 68, .external_lex_state = 4},
  [156] = {.lex_state = 67},
  [157] = {.lex_state = 68, .external_lex_state = 4},
  [158] = {.lex_state = 68, .external_lex_state = 4},
  [159] = {.lex_state = 67},
  [160] = {.lex_state = 67},
  [161] = {.lex_state = 67, .external_lex_state = 4},
  [162] = {.lex_state = 67, .external_lex_state = 4},
  [163] = {.lex_state = 68, .external_lex_state = 4},
  [164] = {.lex_state = 67},
  [165] = {.lex_state = 67},
  [166] = {.lex_state = 67, .external_lex_state = 4},
  [167] = {.lex_state = 67},
  [168] = {.lex_state = 67},
  [169] = {.lex_state = 67},
  [170] = {.lex_state = 67},
  [171] = {.lex_state = 67},
  [172] = {.lex_state = 67},
  [173] = {.lex_state = 67},
  [174] = {.lex_state = 67, .external_lex_state = 4},
  [175] = {.lex_state = 67},
  [176] = {.lex_state = 67, .external_lex_state = 4},
  [177] = {.lex_state = 67, .external_lex_state = 4},
  [178] = {.lex_state = 67},
  [179] = {.lex_state = 67},
  [180] = {.lex_state = 67, .external_lex_state = 4},
  [181] = {.lex_state = 67, .external_lex_state = 4},
  [182] = {.lex_state = 67, .external_lex_state = 4},
  [183] = {.lex_state = 67},
  [184] = {.lex_state = 67, .external_lex_state = 4},
  [185] = {.lex_state = 67},
  [186] = {.lex_state = 67, .external_lex_state = 4},
  [187] = {.lex_state = 67},
  [188] = {.lex_state = 67, .external_lex_state = 4},
  [189] = {.lex_state = 67},
  [190] = {.lex_state = 67},
  [191] = {.lex_state = 67, .external_lex_state = 4},
  [192] = {.lex_state = 67, .external_lex_state = 4},
  [193] = {.lex_state = 67, .external_lex_state = 4},
  [194] = {.lex_state = 67},
  [195] = {.lex_state = 67, .external_lex_state = 4},
  [196] = {.lex_state = 67},
  [197] = {.lex_state = 67},
  [198] = {.lex_state = 67},
  [199] = {.lex_state = 67, .external_lex_state = 4},
  [200] = {.lex_state = 67, .external_lex_state = 4},
  [201] = {.lex_state = 2, .external_lex_state = 7},
  [202] = {.lex_state = 1, .external_lex_state = 8},
  [203] = {.lex_state = 1, .external_lex_state = 8},
  [204] = {.lex_state = 2, .external_lex_state = 7},
  [205] = {.lex_state = 2, .external_lex_state = 7},
  [206] = {.lex_state = 1, .external_lex_state = 8},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 10, .external_lex_state = 6},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 7, .external_lex_state = 7},
  [213] = {.lex_state = 7, .external_lex_state = 7},
  [214] = {.lex_state = 1, .external_lex_state = 8},
  [215] = {.lex_state = 7, .external_lex_state = 7},
  [216] = {.lex_state = 1, .external_lex_state = 8},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 1, .external_lex_state = 8},
  [222] = {.lex_state = 2, .external_lex_state = 7},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 7, .external_lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 7, .external_lex_state = 7},
  [227] = {.lex_state = 7, .external_lex_state = 7},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7, .external_lex_state = 7},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 10, .external_lex_state = 6},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 10, .external_lex_state = 6},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1, .external_lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 11, .external_lex_state = 6},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 11, .external_lex_state = 6},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 5, .external_lex_state = 9},
  [286] = {.lex_state = 5, .external_lex_state = 9},
  [287] = {.lex_state = 5, .external_lex_state = 9},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 5, .external_lex_state = 9},
  [292] = {.lex_state = 11, .external_lex_state = 6},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 5, .external_lex_state = 9},
  [295] = {.lex_state = 5, .external_lex_state = 9},
  [296] = {.lex_state = 5, .external_lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 5, .external_lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 5, .external_lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 5, .external_lex_state = 9},
  [310] = {.lex_state = 5, .external_lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 11, .external_lex_state = 6},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 11, .external_lex_state = 6},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 11, .external_lex_state = 6},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 11, .external_lex_state = 6},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0, .external_lex_state = 10},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 11},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0, .external_lex_state = 10},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0, .external_lex_state = 10},
  [403] = {.lex_state = 11},
  [404] = {.lex_state = 11, .external_lex_state = 6},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0, .external_lex_state = 2},
  [420] = {.lex_state = 67},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 67},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 67},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 67},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 67},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 11},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 11},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 67},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 11},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 11},
  [455] = {.lex_state = 11},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 67},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 67},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 5},
  [465] = {.lex_state = 11},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 5},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 5},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 5},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0, .external_lex_state = 10},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0, .external_lex_state = 10},
  [494] = {.lex_state = 11},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 5},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 11},
  [517] = {.lex_state = 11},
};

enum {
  ts_external_token_macro_id = 0,
  ts_external_token_use = 1,
  ts_external_token__string_content = 2,
  ts_external_token_regex_literal = 3,
  ts_external_token_normal_action = 4,
  ts_external_token_failible_action = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_macro_id] = sym_macro_id,
  [ts_external_token_use] = sym_use,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_regex_literal] = sym_regex_literal,
  [ts_external_token_normal_action] = sym_normal_action,
  [ts_external_token_failible_action] = sym_failible_action,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_use] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token_regex_literal] = true,
    [ts_external_token_normal_action] = true,
    [ts_external_token_failible_action] = true,
  },
  [2] = {
    [ts_external_token_use] = true,
  },
  [3] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_regex_literal] = true,
    [ts_external_token_normal_action] = true,
    [ts_external_token_failible_action] = true,
  },
  [4] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_use] = true,
  },
  [5] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_regex_literal] = true,
  },
  [6] = {
    [ts_external_token_macro_id] = true,
  },
  [7] = {
    [ts_external_token_regex_literal] = true,
  },
  [8] = {
    [ts_external_token_normal_action] = true,
    [ts_external_token_failible_action] = true,
  },
  [9] = {
    [ts_external_token__string_content] = true,
  },
  [10] = {
    [ts_external_token_normal_action] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_lookahead] = ACTIONS(1),
    [sym_lookbehind] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_dyn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_mut] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_EQ_GT_ATL] = ACTIONS(1),
    [anon_sym_EQ_GT_ATR] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_macro_id] = ACTIONS(1),
    [sym_use] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_regex_literal] = ACTIONS(1),
    [sym_normal_action] = ACTIONS(1),
    [sym_failible_action] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(514),
    [sym_grammar] = STATE(512),
    [sym__use] = STATE(255),
    [aux_sym_source_file_repeat1] = STATE(255),
    [anon_sym_grammar] = ACTIONS(3),
    [sym_use] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(184), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [67] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(181), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [134] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(174), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [201] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(177), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [268] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(193), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [335] = 17,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(385), 1,
      sym_alternative,
    STATE(394), 1,
      sym_action,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [399] = 17,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [463] = 17,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [527] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(35), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(329), 1,
      sym_action,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(33), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [584] = 16,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [645] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(39), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(381), 1,
      sym_action,
    STATE(10), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(37), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [702] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(43), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(332), 1,
      sym_action,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [759] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(35), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(329), 1,
      sym_action,
    STATE(13), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(33), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [816] = 12,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(62), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      sym_macro_id,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(56), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
    ACTIONS(45), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [868] = 17,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(85), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(442), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [926] = 17,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(328), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [984] = 17,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(442), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1042] = 4,
    STATE(46), 1,
      sym_repeat,
    ACTIONS(93), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(95), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(91), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1073] = 16,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(85), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(442), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1128] = 16,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(31), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1182] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(160), 1,
      sym_path,
    STATE(337), 1,
      sym_type_bound_param,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1232] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1282] = 16,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(33), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1336] = 2,
    ACTIONS(125), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(123), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1362] = 16,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(30), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1416] = 2,
    ACTIONS(129), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(127), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1442] = 2,
    ACTIONS(133), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(131), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1468] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1518] = 16,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(142), 1,
      sym_escape,
    ACTIONS(145), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_extern,
    ACTIONS(151), 1,
      anon_sym_match,
    ACTIONS(154), 1,
      anon_sym_pub,
    ACTIONS(157), 1,
      sym_macro_id,
    ACTIONS(160), 1,
      sym_use,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(30), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1572] = 16,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(30), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1626] = 2,
    ACTIONS(167), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(165), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1652] = 16,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(30), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1706] = 2,
    ACTIONS(173), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(171), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1732] = 2,
    ACTIONS(177), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(175), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1758] = 16,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(38), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1812] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(350), 1,
      sym_type_bound_param,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1862] = 16,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(30), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1916] = 2,
    ACTIONS(185), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(183), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1942] = 16,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_extern,
    ACTIONS(107), 1,
      anon_sym_match,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    ACTIONS(113), 1,
      sym_use,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(26), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1996] = 2,
    ACTIONS(189), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(187), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2022] = 2,
    ACTIONS(193), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(191), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2048] = 12,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(14), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(70), 1,
      sym_binding_symbol,
    STATE(127), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(34), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2094] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2144] = 2,
    ACTIONS(199), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(197), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2170] = 2,
    ACTIONS(203), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(201), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2196] = 11,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      aux_sym_string_literal_token1,
    ACTIONS(217), 1,
      sym_macro_id,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(56), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(213), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2239] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2286] = 14,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      sym_mut,
    STATE(80), 1,
      sym_lifetime,
    STATE(160), 1,
      sym_path,
    STATE(169), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2335] = 11,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_string_literal_token1,
    ACTIONS(217), 1,
      sym_macro_id,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(56), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(213), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2378] = 11,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_string_literal_token1,
    ACTIONS(217), 1,
      sym_macro_id,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(50), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(213), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2421] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(227), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(453), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2468] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(229), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(410), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2515] = 11,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_string_literal_token1,
    ACTIONS(217), 1,
      sym_macro_id,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(47), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(213), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2558] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(233), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(453), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2605] = 11,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_LT,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      aux_sym_string_literal_token1,
    ACTIONS(250), 1,
      sym_macro_id,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(56), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(244), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2648] = 11,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_string_literal_token1,
    ACTIONS(217), 1,
      sym_macro_id,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(58), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(213), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2691] = 11,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_string_literal_token1,
    ACTIONS(217), 1,
      sym_macro_id,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(145), 1,
      sym_binding_symbol,
    STATE(56), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(213), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(121), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2734] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_GT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2776] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(271), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2818] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(320), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2860] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(343), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2902] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2944] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2986] = 12,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(453), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3030] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(281), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3072] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(283), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(373), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3114] = 11,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(285), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3156] = 2,
    ACTIONS(289), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(287), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3179] = 2,
    ACTIONS(93), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(91), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3202] = 2,
    ACTIONS(293), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(291), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3225] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3268] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3311] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(342), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3354] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(372), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3397] = 10,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(473), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3436] = 10,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3475] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3518] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3561] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(307), 1,
      sym_mut,
    STATE(160), 1,
      sym_path,
    STATE(183), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3604] = 2,
    ACTIONS(311), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(309), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3627] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(352), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3670] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3713] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(178), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3753] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(478), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3793] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(187), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3833] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(464), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3873] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(173), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3913] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(401), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3953] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(197), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3993] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(474), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4033] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(183), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4073] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4113] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(175), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4153] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(382), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4193] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(480), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4233] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(411), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4273] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(487), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4313] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(168), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4353] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(495), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4393] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(415), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4433] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(429), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4473] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(447), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4513] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(417), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4553] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(500), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4593] = 8,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_mut,
    STATE(273), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4626] = 8,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym_mut,
    STATE(274), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4659] = 8,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      sym_mut,
    STATE(246), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4692] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(253), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4722] = 4,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(117), 1,
      sym_repeat,
    ACTIONS(329), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(91), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [4746] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(279), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4776] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(267), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4806] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(263), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4836] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(276), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4866] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    ACTIONS(269), 1,
      sym_macro_id,
    STATE(280), 1,
      sym_bare_symbol,
    ACTIONS(265), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4896] = 2,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(187), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [4915] = 2,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(201), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [4934] = 2,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(127), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [4953] = 2,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(165), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [4972] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(197), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [4991] = 2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(171), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5010] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(131), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5029] = 2,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(175), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5048] = 2,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(183), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5067] = 2,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(123), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5086] = 2,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(191), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5105] = 4,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_POUND,
    STATE(127), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(331), 9,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5127] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_for,
    STATE(131), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(360), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5162] = 3,
    ACTIONS(344), 1,
      anon_sym_COLON,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 10,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5181] = 3,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(350), 1,
      anon_sym_COLON,
    ACTIONS(348), 10,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5200] = 11,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(360), 1,
      anon_sym_for,
    ACTIONS(363), 1,
      anon_sym_COLON_COLON,
    STATE(131), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(476), 1,
      sym_type_bound,
    ACTIONS(352), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5235] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_for,
    STATE(131), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(344), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(366), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5270] = 3,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(368), 10,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5289] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_for,
    STATE(132), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(360), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5324] = 4,
    ACTIONS(376), 1,
      anon_sym_else,
    STATE(135), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(374), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(372), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5345] = 4,
    ACTIONS(383), 1,
      anon_sym_else,
    STATE(138), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(381), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(379), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5366] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_for,
    STATE(128), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(412), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(385), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5401] = 4,
    ACTIONS(383), 1,
      anon_sym_else,
    STATE(135), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(389), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(387), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5422] = 2,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(391), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_POUND,
  [5438] = 2,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(287), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5454] = 2,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(395), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_POUND,
  [5470] = 2,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(291), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5486] = 3,
    ACTIONS(401), 1,
      anon_sym_LT,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5504] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(309), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5520] = 2,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(91), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5536] = 2,
    ACTIONS(407), 1,
      anon_sym_DASH_GT,
    ACTIONS(405), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5551] = 2,
    ACTIONS(409), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(411), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5566] = 3,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(417), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(413), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5583] = 2,
    ACTIONS(421), 1,
      anon_sym_DASH_GT,
    ACTIONS(419), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5598] = 2,
    ACTIONS(423), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(425), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5613] = 2,
    ACTIONS(427), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(429), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5628] = 9,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_pub,
    ACTIONS(111), 1,
      sym_macro_id,
    STATE(268), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(458), 1,
      sym_nonterminal_name,
    STATE(209), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
  [5657] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(431), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5674] = 2,
    ACTIONS(437), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(439), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5689] = 2,
    ACTIONS(441), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(443), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5704] = 2,
    ACTIONS(447), 1,
      anon_sym_DASH_GT,
    ACTIONS(445), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5719] = 2,
    ACTIONS(449), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(451), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5734] = 2,
    ACTIONS(453), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(455), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5749] = 2,
    ACTIONS(459), 1,
      anon_sym_DASH_GT,
    ACTIONS(457), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5764] = 2,
    ACTIONS(401), 1,
      anon_sym_LT,
    ACTIONS(399), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5779] = 3,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(465), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(461), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5796] = 3,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(471), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(467), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5813] = 2,
    ACTIONS(473), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(475), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5828] = 2,
    ACTIONS(479), 1,
      anon_sym_DASH_GT,
    ACTIONS(477), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5843] = 1,
    ACTIONS(481), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5855] = 2,
    ACTIONS(485), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(483), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5869] = 1,
    ACTIONS(487), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5881] = 1,
    ACTIONS(489), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5893] = 1,
    ACTIONS(491), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5905] = 1,
    ACTIONS(493), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5917] = 1,
    ACTIONS(495), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5929] = 1,
    ACTIONS(497), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5941] = 1,
    ACTIONS(419), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5953] = 2,
    ACTIONS(501), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(499), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5967] = 1,
    ACTIONS(503), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5979] = 2,
    ACTIONS(507), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(505), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5993] = 2,
    ACTIONS(511), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(509), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6007] = 1,
    ACTIONS(513), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6019] = 1,
    ACTIONS(515), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6031] = 2,
    ACTIONS(417), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(413), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6045] = 2,
    ACTIONS(519), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(517), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6059] = 2,
    ACTIONS(471), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(467), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6073] = 1,
    ACTIONS(521), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6085] = 2,
    ACTIONS(525), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(523), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6099] = 1,
    ACTIONS(527), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6111] = 2,
    ACTIONS(531), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(529), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6125] = 1,
    ACTIONS(457), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6137] = 2,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(533), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6151] = 1,
    ACTIONS(537), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6163] = 1,
    ACTIONS(539), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6175] = 2,
    ACTIONS(543), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(541), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6189] = 2,
    ACTIONS(547), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(545), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6203] = 2,
    ACTIONS(551), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(549), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6217] = 1,
    ACTIONS(553), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6229] = 2,
    ACTIONS(465), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(461), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6243] = 1,
    ACTIONS(555), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6255] = 1,
    ACTIONS(405), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6267] = 1,
    ACTIONS(557), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6279] = 2,
    ACTIONS(561), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(559), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6293] = 2,
    ACTIONS(435), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(431), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6307] = 7,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(569), 1,
      sym_regex_literal,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6330] = 3,
    STATE(332), 1,
      sym_action,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6345] = 3,
    STATE(371), 1,
      sym_action,
    ACTIONS(571), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6360] = 7,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(569), 1,
      sym_regex_literal,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6383] = 7,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(569), 1,
      sym_regex_literal,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6406] = 3,
    STATE(397), 1,
      sym_action,
    ACTIONS(577), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6421] = 2,
    ACTIONS(579), 3,
      sym_identifier,
      anon_sym_dyn,
      sym_mut,
    ACTIONS(581), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6434] = 1,
    ACTIONS(127), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6444] = 4,
    ACTIONS(583), 1,
      anon_sym_POUND,
    ACTIONS(331), 2,
      sym_macro_id,
      sym_escape,
    ACTIONS(333), 2,
      sym_identifier,
      anon_sym_pub,
    STATE(209), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
  [6460] = 7,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    ACTIONS(588), 1,
      anon_sym_LT,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
    ACTIONS(592), 1,
      anon_sym_where,
    STATE(258), 1,
      sym_grammar_type_params,
    STATE(314), 1,
      sym__grammar_params,
    STATE(506), 1,
      sym__where_clauses,
  [6482] = 2,
    ACTIONS(594), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(596), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6494] = 6,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6514] = 6,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6534] = 1,
    ACTIONS(606), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6544] = 6,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6564] = 1,
    ACTIONS(127), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6574] = 7,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_for,
    STATE(143), 1,
      sym_path,
    STATE(170), 1,
      sym_parametrized_type,
    STATE(305), 1,
      sym_forall,
    STATE(443), 1,
      aux_sym_path_repeat1,
  [6596] = 2,
    ACTIONS(610), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(612), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6608] = 2,
    ACTIONS(614), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(616), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6620] = 2,
    ACTIONS(618), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(620), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6632] = 1,
    ACTIONS(123), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6642] = 6,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(569), 1,
      sym_regex_literal,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6662] = 1,
    ACTIONS(123), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6672] = 6,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(391), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6692] = 3,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(91), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [6706] = 6,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6726] = 6,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6746] = 1,
    ACTIONS(187), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6755] = 1,
    ACTIONS(581), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
  [6764] = 1,
    ACTIONS(197), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6773] = 5,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(632), 1,
      anon_sym_type,
    ACTIONS(634), 1,
      anon_sym_enum,
    STATE(306), 1,
      sym_enum_token,
    STATE(235), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [6790] = 2,
    ACTIONS(636), 2,
      sym_identifier,
      anon_sym_for,
    ACTIONS(352), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_COLON_COLON,
  [6801] = 1,
    ACTIONS(131), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6810] = 1,
    ACTIONS(175), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6819] = 5,
    ACTIONS(632), 1,
      anon_sym_type,
    ACTIONS(634), 1,
      anon_sym_enum,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_enum_token,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [6836] = 1,
    ACTIONS(201), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6845] = 1,
    ACTIONS(191), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6854] = 5,
    ACTIONS(565), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym__,
    ACTIONS(602), 1,
      sym_regex_literal,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6871] = 1,
    ACTIONS(183), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6880] = 1,
    ACTIONS(171), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6889] = 1,
    ACTIONS(165), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6898] = 2,
    ACTIONS(397), 2,
      sym_identifier,
      anon_sym_pub,
    ACTIONS(395), 3,
      sym_macro_id,
      sym_escape,
      anon_sym_POUND,
  [6908] = 2,
    STATE(446), 1,
      sym__cond_op,
    ACTIONS(640), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_TILDE,
      anon_sym_BANG_TILDE,
  [6918] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(323), 1,
      sym_type_parameter,
  [6934] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [6950] = 3,
    ACTIONS(648), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [6962] = 4,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(483), 1,
      sym_lifetime,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6976] = 2,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [6986] = 3,
    ACTIONS(661), 1,
      anon_sym_LT,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [6998] = 2,
    ACTIONS(665), 1,
      anon_sym_COLON,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7008] = 2,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(655), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7018] = 2,
    ACTIONS(393), 2,
      sym_identifier,
      anon_sym_pub,
    ACTIONS(391), 3,
      sym_macro_id,
      sym_escape,
      anon_sym_POUND,
  [7028] = 3,
    ACTIONS(669), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7040] = 4,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(416), 1,
      sym_lifetime,
    ACTIONS(385), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7054] = 4,
    ACTIONS(3), 1,
      anon_sym_grammar,
    ACTIONS(5), 1,
      sym_use,
    STATE(505), 1,
      sym_grammar,
    STATE(301), 2,
      sym__use,
      aux_sym_source_file_repeat1,
  [7068] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(671), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(409), 1,
      sym_type_parameter,
  [7084] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(673), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(322), 1,
      sym_type_parameter,
  [7100] = 5,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
    ACTIONS(592), 1,
      anon_sym_where,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym__grammar_params,
    STATE(477), 1,
      sym__where_clauses,
  [7116] = 2,
    STATE(329), 1,
      sym_action,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7126] = 3,
    ACTIONS(679), 1,
      anon_sym_type,
    ACTIONS(677), 2,
      anon_sym_RBRACE,
      anon_sym_enum,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7138] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(682), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7154] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(684), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7170] = 3,
    ACTIONS(686), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7182] = 4,
    ACTIONS(111), 1,
      sym_macro_id,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(458), 1,
      sym_nonterminal_name,
    ACTIONS(101), 2,
      sym_identifier,
      sym_escape,
  [7196] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(368), 1,
      sym_type_parameter,
  [7212] = 4,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(363), 1,
      sym_lifetime,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7226] = 3,
    ACTIONS(690), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7238] = 4,
    ACTIONS(111), 1,
      sym_macro_id,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(432), 1,
      sym_nonterminal_name,
    ACTIONS(101), 2,
      sym_identifier,
      sym_escape,
  [7252] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(692), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(346), 1,
      sym_type_parameter,
  [7268] = 5,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(694), 1,
      anon_sym_in,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(463), 1,
      sym_path,
  [7284] = 3,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(696), 1,
      anon_sym_EQ,
    ACTIONS(368), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
  [7296] = 3,
    ACTIONS(700), 1,
      anon_sym_LT,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7308] = 3,
    ACTIONS(704), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7320] = 3,
    ACTIONS(706), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7332] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(708), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7348] = 3,
    ACTIONS(710), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7360] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(712), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7376] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(714), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7392] = 3,
    ACTIONS(716), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7404] = 3,
    ACTIONS(718), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(624), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7416] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7432] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7448] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7464] = 4,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      sym_identifier,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7477] = 3,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(728), 2,
      sym__string_content,
      sym_escape_sequence,
  [7488] = 3,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(733), 2,
      sym__string_content,
      sym_escape_sequence,
  [7499] = 3,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(733), 2,
      sym__string_content,
      sym_escape_sequence,
  [7510] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(249), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
  [7523] = 2,
    ACTIONS(741), 1,
      anon_sym_DASH_GT,
    ACTIONS(739), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7532] = 2,
    ACTIONS(745), 1,
      anon_sym_DASH_GT,
    ACTIONS(743), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7541] = 3,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(733), 2,
      sym__string_content,
      sym_escape_sequence,
  [7552] = 2,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [7561] = 3,
    ACTIONS(632), 1,
      anon_sym_type,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7572] = 3,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(757), 2,
      sym__string_content,
      sym_escape_sequence,
  [7583] = 3,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(761), 2,
      sym__string_content,
      sym_escape_sequence,
  [7594] = 3,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    STATE(299), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(765), 2,
      sym__string_content,
      sym_escape_sequence,
  [7605] = 3,
    ACTIONS(632), 1,
      anon_sym_type,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(293), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7616] = 2,
    ACTIONS(771), 1,
      anon_sym_DASH_GT,
    ACTIONS(769), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7625] = 3,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(733), 2,
      sym__string_content,
      sym_escape_sequence,
  [7636] = 2,
    ACTIONS(777), 1,
      anon_sym_DASH_GT,
    ACTIONS(775), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7645] = 3,
    ACTIONS(779), 1,
      anon_sym_grammar,
    ACTIONS(781), 1,
      sym_use,
    STATE(301), 2,
      sym__use,
      aux_sym_source_file_repeat1,
  [7656] = 2,
    ACTIONS(786), 1,
      anon_sym_DASH_GT,
    ACTIONS(784), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7665] = 3,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(790), 2,
      sym__string_content,
      sym_escape_sequence,
  [7676] = 3,
    ACTIONS(632), 1,
      anon_sym_type,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7687] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(466), 1,
      sym_path,
  [7700] = 3,
    ACTIONS(632), 1,
      anon_sym_type,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(304), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7711] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(737), 1,
      sym_identifier,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(492), 1,
      sym_path,
  [7724] = 3,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
    ACTIONS(795), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [7735] = 3,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(733), 2,
      sym__string_content,
      sym_escape_sequence,
  [7746] = 3,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(801), 2,
      sym__string_content,
      sym_escape_sequence,
  [7757] = 3,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym_nonterminal_name_repeat1,
  [7767] = 3,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__where_clauses_repeat1,
  [7777] = 3,
    ACTIONS(813), 1,
      sym_identifier,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_grammar_parameter,
  [7787] = 3,
    ACTIONS(592), 1,
      anon_sym_where,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    STATE(477), 1,
      sym__where_clauses,
  [7797] = 2,
    STATE(356), 1,
      sym_id,
    ACTIONS(817), 2,
      sym_macro_id,
      sym_identifier,
  [7805] = 1,
    ACTIONS(819), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [7811] = 3,
    ACTIONS(277), 1,
      anon_sym_GT,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [7821] = 1,
    ACTIONS(823), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [7827] = 3,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_token_repeat1,
  [7837] = 3,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_GT,
    STATE(317), 1,
      aux_sym_macro_repeat1,
  [7847] = 3,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [7857] = 3,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_GT,
    STATE(361), 1,
      aux_sym_grammar_type_params_repeat1,
  [7867] = 3,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_grammar_type_params_repeat1,
  [7877] = 3,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [7887] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym__alternatives_repeat1,
  [7897] = 3,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [7907] = 3,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym__grammar_params_repeat1,
  [7917] = 3,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym__where_clauses_repeat1,
  [7927] = 1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7933] = 3,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym__alternatives_repeat1,
  [7943] = 3,
    ACTIONS(285), 1,
      anon_sym_GT,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [7953] = 1,
    ACTIONS(571), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7959] = 1,
    ACTIONS(739), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7965] = 3,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(206), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [7975] = 3,
    ACTIONS(271), 1,
      anon_sym_GT,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [7985] = 3,
    ACTIONS(592), 1,
      anon_sym_where,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      sym__where_clauses,
  [7995] = 3,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_type_bound_repeat2,
  [8005] = 3,
    ACTIONS(708), 1,
      anon_sym_GT,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8015] = 1,
    ACTIONS(873), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [8021] = 3,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_GT,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8031] = 1,
    ACTIONS(287), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8037] = 3,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_type_bound_repeat1,
  [8047] = 3,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_GT,
    STATE(331), 1,
      aux_sym_macro_repeat1,
  [8057] = 2,
    ACTIONS(888), 1,
      anon_sym_PLUS,
    ACTIONS(886), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8065] = 3,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(203), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [8075] = 3,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_GT,
    STATE(338), 1,
      aux_sym_grammar_type_params_repeat1,
  [8085] = 3,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8095] = 3,
    ACTIONS(896), 1,
      anon_sym_GT,
    ACTIONS(898), 1,
      sym_identifier,
    STATE(378), 1,
      sym__not_macro_id,
  [8105] = 1,
    ACTIONS(784), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8111] = 3,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_type_bound_repeat2,
  [8121] = 2,
    STATE(388), 1,
      sym_id,
    ACTIONS(817), 2,
      sym_macro_id,
      sym_identifier,
  [8129] = 3,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_type_bound_repeat1,
  [8139] = 1,
    ACTIONS(904), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [8145] = 3,
    ACTIONS(906), 1,
      anon_sym_GT,
    ACTIONS(908), 1,
      sym_identifier,
    STATE(459), 1,
      sym__not_macro_id,
  [8155] = 3,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [8165] = 3,
    ACTIONS(910), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      sym_annotation_arg,
  [8175] = 1,
    ACTIONS(914), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8181] = 3,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8191] = 3,
    ACTIONS(227), 1,
      anon_sym_GT,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_parametrized_type_repeat1,
  [8201] = 2,
    ACTIONS(888), 1,
      anon_sym_PLUS,
    ACTIONS(366), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8209] = 3,
    ACTIONS(684), 1,
      anon_sym_GT,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8219] = 1,
    ACTIONS(920), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_enum,
  [8225] = 2,
    ACTIONS(922), 1,
      anon_sym_PLUS,
    ACTIONS(366), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8233] = 3,
    ACTIONS(813), 1,
      sym_identifier,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_grammar_parameter,
  [8243] = 3,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(395), 1,
      aux_sym_enum_token_repeat1,
  [8253] = 3,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym__grammar_params_repeat1,
  [8263] = 1,
    ACTIONS(650), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
  [8269] = 3,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_grammar_type_params_repeat1,
  [8279] = 3,
    ACTIONS(682), 1,
      anon_sym_GT,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8289] = 1,
    ACTIONS(309), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8295] = 1,
    ACTIONS(577), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8301] = 3,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_type_bound_repeat1,
  [8311] = 3,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_GT,
    STATE(335), 1,
      aux_sym_macro_repeat1,
  [8321] = 3,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8331] = 1,
    ACTIONS(91), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8337] = 1,
    ACTIONS(291), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8343] = 3,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__where_clauses_repeat1,
  [8353] = 3,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_GT,
    STATE(405), 1,
      aux_sym_nonterminal_name_repeat1,
  [8363] = 1,
    ACTIONS(953), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8369] = 1,
    ACTIONS(955), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [8375] = 1,
    ACTIONS(33), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8381] = 1,
    ACTIONS(775), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8387] = 3,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [8397] = 3,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(202), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [8407] = 3,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym__alternatives_repeat1,
  [8417] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_match_block_repeat1,
  [8427] = 3,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8437] = 3,
    ACTIONS(910), 1,
      anon_sym_LPAREN,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    STATE(508), 1,
      sym_annotation_arg,
  [8447] = 2,
    ACTIONS(973), 1,
      sym_normal_action,
    ACTIONS(971), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8455] = 3,
    ACTIONS(975), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_GT,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [8465] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    STATE(398), 1,
      aux_sym_match_block_repeat1,
  [8475] = 1,
    ACTIONS(984), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8481] = 3,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(243), 1,
      sym__not_macro_id,
    STATE(259), 1,
      sym_cond,
  [8491] = 1,
    ACTIONS(37), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8497] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      aux_sym_enum_token_repeat1,
  [8507] = 1,
    ACTIONS(123), 3,
      sym_normal_action,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8513] = 1,
    ACTIONS(991), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8519] = 3,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [8529] = 1,
    ACTIONS(995), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8535] = 1,
    ACTIONS(795), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [8541] = 1,
    ACTIONS(769), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8547] = 1,
    ACTIONS(127), 3,
      sym_normal_action,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8553] = 3,
    ACTIONS(813), 1,
      sym_identifier,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_grammar_parameter,
  [8563] = 2,
    STATE(472), 1,
      sym_id,
    ACTIONS(817), 2,
      sym_macro_id,
      sym_identifier,
  [8571] = 3,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym_nonterminal_name_repeat1,
  [8581] = 3,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym__grammar_params_repeat1,
  [8591] = 3,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8601] = 3,
    ACTIONS(908), 1,
      sym_identifier,
    ACTIONS(1001), 1,
      anon_sym_GT,
    STATE(459), 1,
      sym__not_macro_id,
  [8611] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    ACTIONS(1012), 1,
      anon_sym_GT,
    STATE(369), 1,
      aux_sym_grammar_type_params_repeat1,
  [8621] = 3,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_parametrized_type_repeat1,
  [8631] = 1,
    ACTIONS(743), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8637] = 2,
    ACTIONS(888), 1,
      anon_sym_PLUS,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8645] = 1,
    ACTIONS(698), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8651] = 3,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_GT,
    STATE(414), 1,
      aux_sym_parametrized_type_repeat1,
  [8661] = 1,
    ACTIONS(1023), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8667] = 2,
    ACTIONS(922), 1,
      anon_sym_PLUS,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8675] = 1,
    ACTIONS(1025), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8681] = 1,
    ACTIONS(1027), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8686] = 1,
    ACTIONS(483), 2,
      sym_use,
      anon_sym_grammar,
  [8691] = 1,
    ACTIONS(1029), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8696] = 2,
    ACTIONS(908), 1,
      sym_identifier,
    STATE(459), 1,
      sym__not_macro_id,
  [8703] = 1,
    ACTIONS(1031), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8708] = 1,
    ACTIONS(1033), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8713] = 2,
    ACTIONS(267), 1,
      aux_sym_string_literal_token1,
    STATE(467), 1,
      sym_string_literal,
  [8720] = 1,
    ACTIONS(1035), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8725] = 1,
    ACTIONS(1006), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8730] = 1,
    ACTIONS(1037), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8735] = 1,
    ACTIONS(616), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8740] = 1,
    ACTIONS(1039), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8745] = 2,
    ACTIONS(1041), 1,
      anon_sym_COLON,
    ACTIONS(1043), 1,
      anon_sym_EQ,
  [8752] = 1,
    ACTIONS(1045), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8757] = 2,
    ACTIONS(1047), 1,
      anon_sym_COLON,
    ACTIONS(1049), 1,
      anon_sym_EQ,
  [8764] = 1,
    ACTIONS(1051), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8769] = 1,
    ACTIONS(1053), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8774] = 1,
    ACTIONS(620), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8779] = 1,
    ACTIONS(859), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8784] = 1,
    ACTIONS(989), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8789] = 1,
    ACTIONS(612), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8794] = 1,
    ACTIONS(1055), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8799] = 2,
    ACTIONS(1057), 1,
      sym_identifier,
    STATE(455), 1,
      aux_sym_path_repeat1,
  [8806] = 1,
    ACTIONS(596), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8811] = 1,
    ACTIONS(808), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8816] = 2,
    ACTIONS(1057), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [8823] = 1,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8828] = 1,
    ACTIONS(971), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8833] = 2,
    ACTIONS(1059), 1,
      aux_sym_string_literal_token1,
    STATE(214), 1,
      sym_string_literal,
  [8840] = 1,
    ACTIONS(1061), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8845] = 1,
    ACTIONS(1063), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8850] = 1,
    ACTIONS(1065), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8855] = 1,
    ACTIONS(1067), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8860] = 1,
    ACTIONS(878), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8865] = 2,
    ACTIONS(1069), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [8872] = 1,
    ACTIONS(1021), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8877] = 2,
    ACTIONS(813), 1,
      sym_identifier,
    STATE(426), 1,
      sym_grammar_parameter,
  [8884] = 2,
    ACTIONS(1072), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [8891] = 1,
    ACTIONS(836), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8896] = 1,
    ACTIONS(945), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8901] = 2,
    ACTIONS(1074), 1,
      anon_sym_COLON,
    ACTIONS(1076), 1,
      anon_sym_EQ,
  [8908] = 1,
    ACTIONS(806), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8913] = 1,
    ACTIONS(1078), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8918] = 1,
    ACTIONS(1080), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8923] = 1,
    ACTIONS(1082), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8928] = 1,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
  [8932] = 1,
    ACTIONS(1086), 1,
      anon_sym_EQ,
  [8936] = 1,
    ACTIONS(1088), 1,
      sym_identifier,
  [8940] = 1,
    ACTIONS(1090), 1,
      anon_sym_LPAREN,
  [8944] = 1,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
  [8948] = 1,
    ACTIONS(1094), 1,
      sym_identifier,
  [8952] = 1,
    ACTIONS(1096), 1,
      anon_sym_COLON,
  [8956] = 1,
    ACTIONS(1098), 1,
      anon_sym_LT,
  [8960] = 1,
    ACTIONS(1100), 1,
      anon_sym_LBRACE,
  [8964] = 1,
    ACTIONS(1102), 1,
      anon_sym_EQ,
  [8968] = 1,
    ACTIONS(1104), 1,
      anon_sym_POUND,
  [8972] = 1,
    ACTIONS(1106), 1,
      anon_sym_RBRACK,
  [8976] = 1,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
  [8980] = 1,
    ACTIONS(888), 1,
      anon_sym_PLUS,
  [8984] = 1,
    ACTIONS(867), 1,
      anon_sym_SEMI,
  [8988] = 1,
    ACTIONS(1110), 1,
      anon_sym_COLON,
  [8992] = 1,
    ACTIONS(1112), 1,
      anon_sym_SEMI,
  [8996] = 1,
    ACTIONS(1114), 1,
      anon_sym_EQ,
  [9000] = 1,
    ACTIONS(1116), 1,
      sym_identifier,
  [9004] = 1,
    ACTIONS(1118), 1,
      anon_sym_COLON,
  [9008] = 1,
    ACTIONS(922), 1,
      anon_sym_PLUS,
  [9012] = 1,
    ACTIONS(1120), 1,
      anon_sym_COLON,
  [9016] = 1,
    ACTIONS(1122), 1,
      anon_sym_RBRACK,
  [9020] = 1,
    ACTIONS(1124), 1,
      anon_sym_LT,
  [9024] = 1,
    ACTIONS(1049), 1,
      anon_sym_EQ,
  [9028] = 1,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
  [9032] = 1,
    ACTIONS(1128), 1,
      anon_sym_COLON,
  [9036] = 1,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
  [9040] = 1,
    ACTIONS(1132), 1,
      sym_normal_action,
  [9044] = 1,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
  [9048] = 1,
    ACTIONS(1136), 1,
      sym_normal_action,
  [9052] = 1,
    ACTIONS(1138), 1,
      sym_identifier,
  [9056] = 1,
    ACTIONS(1140), 1,
      anon_sym_SEMI,
  [9060] = 1,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
  [9064] = 1,
    ACTIONS(1144), 1,
      anon_sym_LBRACE,
  [9068] = 1,
    ACTIONS(1146), 1,
      anon_sym_LBRACE,
  [9072] = 1,
    ACTIONS(1148), 1,
      anon_sym_LBRACK,
  [9076] = 1,
    ACTIONS(1150), 1,
      anon_sym_LBRACE,
  [9080] = 1,
    ACTIONS(1152), 1,
      anon_sym_LT,
  [9084] = 1,
    ACTIONS(1154), 1,
      anon_sym_EQ,
  [9088] = 1,
    ACTIONS(1156), 1,
      anon_sym_LT,
  [9092] = 1,
    ACTIONS(1158), 1,
      anon_sym_LT,
  [9096] = 1,
    ACTIONS(1160), 1,
      ts_builtin_sym_end,
  [9100] = 1,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [9104] = 1,
    ACTIONS(1162), 1,
      anon_sym_LT,
  [9108] = 1,
    ACTIONS(1164), 1,
      anon_sym_RBRACK,
  [9112] = 1,
    ACTIONS(1166), 1,
      sym_identifier,
  [9116] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
  [9120] = 1,
    ACTIONS(1168), 1,
      anon_sym_LBRACK,
  [9124] = 1,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
  [9128] = 1,
    ACTIONS(1172), 1,
      anon_sym_COLON,
  [9132] = 1,
    ACTIONS(1174), 1,
      ts_builtin_sym_end,
  [9136] = 1,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [9140] = 1,
    ACTIONS(1178), 1,
      sym_identifier,
  [9144] = 1,
    ACTIONS(1180), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 463,
  [SMALL_STATE(10)] = 527,
  [SMALL_STATE(11)] = 584,
  [SMALL_STATE(12)] = 645,
  [SMALL_STATE(13)] = 702,
  [SMALL_STATE(14)] = 759,
  [SMALL_STATE(15)] = 816,
  [SMALL_STATE(16)] = 868,
  [SMALL_STATE(17)] = 926,
  [SMALL_STATE(18)] = 984,
  [SMALL_STATE(19)] = 1042,
  [SMALL_STATE(20)] = 1073,
  [SMALL_STATE(21)] = 1128,
  [SMALL_STATE(22)] = 1182,
  [SMALL_STATE(23)] = 1232,
  [SMALL_STATE(24)] = 1282,
  [SMALL_STATE(25)] = 1336,
  [SMALL_STATE(26)] = 1362,
  [SMALL_STATE(27)] = 1416,
  [SMALL_STATE(28)] = 1442,
  [SMALL_STATE(29)] = 1468,
  [SMALL_STATE(30)] = 1518,
  [SMALL_STATE(31)] = 1572,
  [SMALL_STATE(32)] = 1626,
  [SMALL_STATE(33)] = 1652,
  [SMALL_STATE(34)] = 1706,
  [SMALL_STATE(35)] = 1732,
  [SMALL_STATE(36)] = 1758,
  [SMALL_STATE(37)] = 1812,
  [SMALL_STATE(38)] = 1862,
  [SMALL_STATE(39)] = 1916,
  [SMALL_STATE(40)] = 1942,
  [SMALL_STATE(41)] = 1996,
  [SMALL_STATE(42)] = 2022,
  [SMALL_STATE(43)] = 2048,
  [SMALL_STATE(44)] = 2094,
  [SMALL_STATE(45)] = 2144,
  [SMALL_STATE(46)] = 2170,
  [SMALL_STATE(47)] = 2196,
  [SMALL_STATE(48)] = 2239,
  [SMALL_STATE(49)] = 2286,
  [SMALL_STATE(50)] = 2335,
  [SMALL_STATE(51)] = 2378,
  [SMALL_STATE(52)] = 2421,
  [SMALL_STATE(53)] = 2468,
  [SMALL_STATE(54)] = 2515,
  [SMALL_STATE(55)] = 2558,
  [SMALL_STATE(56)] = 2605,
  [SMALL_STATE(57)] = 2648,
  [SMALL_STATE(58)] = 2691,
  [SMALL_STATE(59)] = 2734,
  [SMALL_STATE(60)] = 2776,
  [SMALL_STATE(61)] = 2818,
  [SMALL_STATE(62)] = 2860,
  [SMALL_STATE(63)] = 2902,
  [SMALL_STATE(64)] = 2944,
  [SMALL_STATE(65)] = 2986,
  [SMALL_STATE(66)] = 3030,
  [SMALL_STATE(67)] = 3072,
  [SMALL_STATE(68)] = 3114,
  [SMALL_STATE(69)] = 3156,
  [SMALL_STATE(70)] = 3179,
  [SMALL_STATE(71)] = 3202,
  [SMALL_STATE(72)] = 3225,
  [SMALL_STATE(73)] = 3268,
  [SMALL_STATE(74)] = 3311,
  [SMALL_STATE(75)] = 3354,
  [SMALL_STATE(76)] = 3397,
  [SMALL_STATE(77)] = 3436,
  [SMALL_STATE(78)] = 3475,
  [SMALL_STATE(79)] = 3518,
  [SMALL_STATE(80)] = 3561,
  [SMALL_STATE(81)] = 3604,
  [SMALL_STATE(82)] = 3627,
  [SMALL_STATE(83)] = 3670,
  [SMALL_STATE(84)] = 3713,
  [SMALL_STATE(85)] = 3753,
  [SMALL_STATE(86)] = 3793,
  [SMALL_STATE(87)] = 3833,
  [SMALL_STATE(88)] = 3873,
  [SMALL_STATE(89)] = 3913,
  [SMALL_STATE(90)] = 3953,
  [SMALL_STATE(91)] = 3993,
  [SMALL_STATE(92)] = 4033,
  [SMALL_STATE(93)] = 4073,
  [SMALL_STATE(94)] = 4113,
  [SMALL_STATE(95)] = 4153,
  [SMALL_STATE(96)] = 4193,
  [SMALL_STATE(97)] = 4233,
  [SMALL_STATE(98)] = 4273,
  [SMALL_STATE(99)] = 4313,
  [SMALL_STATE(100)] = 4353,
  [SMALL_STATE(101)] = 4393,
  [SMALL_STATE(102)] = 4433,
  [SMALL_STATE(103)] = 4473,
  [SMALL_STATE(104)] = 4513,
  [SMALL_STATE(105)] = 4553,
  [SMALL_STATE(106)] = 4593,
  [SMALL_STATE(107)] = 4626,
  [SMALL_STATE(108)] = 4659,
  [SMALL_STATE(109)] = 4692,
  [SMALL_STATE(110)] = 4722,
  [SMALL_STATE(111)] = 4746,
  [SMALL_STATE(112)] = 4776,
  [SMALL_STATE(113)] = 4806,
  [SMALL_STATE(114)] = 4836,
  [SMALL_STATE(115)] = 4866,
  [SMALL_STATE(116)] = 4896,
  [SMALL_STATE(117)] = 4915,
  [SMALL_STATE(118)] = 4934,
  [SMALL_STATE(119)] = 4953,
  [SMALL_STATE(120)] = 4972,
  [SMALL_STATE(121)] = 4991,
  [SMALL_STATE(122)] = 5010,
  [SMALL_STATE(123)] = 5029,
  [SMALL_STATE(124)] = 5048,
  [SMALL_STATE(125)] = 5067,
  [SMALL_STATE(126)] = 5086,
  [SMALL_STATE(127)] = 5105,
  [SMALL_STATE(128)] = 5127,
  [SMALL_STATE(129)] = 5162,
  [SMALL_STATE(130)] = 5181,
  [SMALL_STATE(131)] = 5200,
  [SMALL_STATE(132)] = 5235,
  [SMALL_STATE(133)] = 5270,
  [SMALL_STATE(134)] = 5289,
  [SMALL_STATE(135)] = 5324,
  [SMALL_STATE(136)] = 5345,
  [SMALL_STATE(137)] = 5366,
  [SMALL_STATE(138)] = 5401,
  [SMALL_STATE(139)] = 5422,
  [SMALL_STATE(140)] = 5438,
  [SMALL_STATE(141)] = 5454,
  [SMALL_STATE(142)] = 5470,
  [SMALL_STATE(143)] = 5486,
  [SMALL_STATE(144)] = 5504,
  [SMALL_STATE(145)] = 5520,
  [SMALL_STATE(146)] = 5536,
  [SMALL_STATE(147)] = 5551,
  [SMALL_STATE(148)] = 5566,
  [SMALL_STATE(149)] = 5583,
  [SMALL_STATE(150)] = 5598,
  [SMALL_STATE(151)] = 5613,
  [SMALL_STATE(152)] = 5628,
  [SMALL_STATE(153)] = 5657,
  [SMALL_STATE(154)] = 5674,
  [SMALL_STATE(155)] = 5689,
  [SMALL_STATE(156)] = 5704,
  [SMALL_STATE(157)] = 5719,
  [SMALL_STATE(158)] = 5734,
  [SMALL_STATE(159)] = 5749,
  [SMALL_STATE(160)] = 5764,
  [SMALL_STATE(161)] = 5779,
  [SMALL_STATE(162)] = 5796,
  [SMALL_STATE(163)] = 5813,
  [SMALL_STATE(164)] = 5828,
  [SMALL_STATE(165)] = 5843,
  [SMALL_STATE(166)] = 5855,
  [SMALL_STATE(167)] = 5869,
  [SMALL_STATE(168)] = 5881,
  [SMALL_STATE(169)] = 5893,
  [SMALL_STATE(170)] = 5905,
  [SMALL_STATE(171)] = 5917,
  [SMALL_STATE(172)] = 5929,
  [SMALL_STATE(173)] = 5941,
  [SMALL_STATE(174)] = 5953,
  [SMALL_STATE(175)] = 5967,
  [SMALL_STATE(176)] = 5979,
  [SMALL_STATE(177)] = 5993,
  [SMALL_STATE(178)] = 6007,
  [SMALL_STATE(179)] = 6019,
  [SMALL_STATE(180)] = 6031,
  [SMALL_STATE(181)] = 6045,
  [SMALL_STATE(182)] = 6059,
  [SMALL_STATE(183)] = 6073,
  [SMALL_STATE(184)] = 6085,
  [SMALL_STATE(185)] = 6099,
  [SMALL_STATE(186)] = 6111,
  [SMALL_STATE(187)] = 6125,
  [SMALL_STATE(188)] = 6137,
  [SMALL_STATE(189)] = 6151,
  [SMALL_STATE(190)] = 6163,
  [SMALL_STATE(191)] = 6175,
  [SMALL_STATE(192)] = 6189,
  [SMALL_STATE(193)] = 6203,
  [SMALL_STATE(194)] = 6217,
  [SMALL_STATE(195)] = 6229,
  [SMALL_STATE(196)] = 6243,
  [SMALL_STATE(197)] = 6255,
  [SMALL_STATE(198)] = 6267,
  [SMALL_STATE(199)] = 6279,
  [SMALL_STATE(200)] = 6293,
  [SMALL_STATE(201)] = 6307,
  [SMALL_STATE(202)] = 6330,
  [SMALL_STATE(203)] = 6345,
  [SMALL_STATE(204)] = 6360,
  [SMALL_STATE(205)] = 6383,
  [SMALL_STATE(206)] = 6406,
  [SMALL_STATE(207)] = 6421,
  [SMALL_STATE(208)] = 6434,
  [SMALL_STATE(209)] = 6444,
  [SMALL_STATE(210)] = 6460,
  [SMALL_STATE(211)] = 6482,
  [SMALL_STATE(212)] = 6494,
  [SMALL_STATE(213)] = 6514,
  [SMALL_STATE(214)] = 6534,
  [SMALL_STATE(215)] = 6544,
  [SMALL_STATE(216)] = 6564,
  [SMALL_STATE(217)] = 6574,
  [SMALL_STATE(218)] = 6596,
  [SMALL_STATE(219)] = 6608,
  [SMALL_STATE(220)] = 6620,
  [SMALL_STATE(221)] = 6632,
  [SMALL_STATE(222)] = 6642,
  [SMALL_STATE(223)] = 6662,
  [SMALL_STATE(224)] = 6672,
  [SMALL_STATE(225)] = 6692,
  [SMALL_STATE(226)] = 6706,
  [SMALL_STATE(227)] = 6726,
  [SMALL_STATE(228)] = 6746,
  [SMALL_STATE(229)] = 6755,
  [SMALL_STATE(230)] = 6764,
  [SMALL_STATE(231)] = 6773,
  [SMALL_STATE(232)] = 6790,
  [SMALL_STATE(233)] = 6801,
  [SMALL_STATE(234)] = 6810,
  [SMALL_STATE(235)] = 6819,
  [SMALL_STATE(236)] = 6836,
  [SMALL_STATE(237)] = 6845,
  [SMALL_STATE(238)] = 6854,
  [SMALL_STATE(239)] = 6871,
  [SMALL_STATE(240)] = 6880,
  [SMALL_STATE(241)] = 6889,
  [SMALL_STATE(242)] = 6898,
  [SMALL_STATE(243)] = 6908,
  [SMALL_STATE(244)] = 6918,
  [SMALL_STATE(245)] = 6934,
  [SMALL_STATE(246)] = 6950,
  [SMALL_STATE(247)] = 6962,
  [SMALL_STATE(248)] = 6976,
  [SMALL_STATE(249)] = 6986,
  [SMALL_STATE(250)] = 6998,
  [SMALL_STATE(251)] = 7008,
  [SMALL_STATE(252)] = 7018,
  [SMALL_STATE(253)] = 7028,
  [SMALL_STATE(254)] = 7040,
  [SMALL_STATE(255)] = 7054,
  [SMALL_STATE(256)] = 7068,
  [SMALL_STATE(257)] = 7084,
  [SMALL_STATE(258)] = 7100,
  [SMALL_STATE(259)] = 7116,
  [SMALL_STATE(260)] = 7126,
  [SMALL_STATE(261)] = 7138,
  [SMALL_STATE(262)] = 7154,
  [SMALL_STATE(263)] = 7170,
  [SMALL_STATE(264)] = 7182,
  [SMALL_STATE(265)] = 7196,
  [SMALL_STATE(266)] = 7212,
  [SMALL_STATE(267)] = 7226,
  [SMALL_STATE(268)] = 7238,
  [SMALL_STATE(269)] = 7252,
  [SMALL_STATE(270)] = 7268,
  [SMALL_STATE(271)] = 7284,
  [SMALL_STATE(272)] = 7296,
  [SMALL_STATE(273)] = 7308,
  [SMALL_STATE(274)] = 7320,
  [SMALL_STATE(275)] = 7332,
  [SMALL_STATE(276)] = 7348,
  [SMALL_STATE(277)] = 7360,
  [SMALL_STATE(278)] = 7376,
  [SMALL_STATE(279)] = 7392,
  [SMALL_STATE(280)] = 7404,
  [SMALL_STATE(281)] = 7416,
  [SMALL_STATE(282)] = 7432,
  [SMALL_STATE(283)] = 7448,
  [SMALL_STATE(284)] = 7464,
  [SMALL_STATE(285)] = 7477,
  [SMALL_STATE(286)] = 7488,
  [SMALL_STATE(287)] = 7499,
  [SMALL_STATE(288)] = 7510,
  [SMALL_STATE(289)] = 7523,
  [SMALL_STATE(290)] = 7532,
  [SMALL_STATE(291)] = 7541,
  [SMALL_STATE(292)] = 7552,
  [SMALL_STATE(293)] = 7561,
  [SMALL_STATE(294)] = 7572,
  [SMALL_STATE(295)] = 7583,
  [SMALL_STATE(296)] = 7594,
  [SMALL_STATE(297)] = 7605,
  [SMALL_STATE(298)] = 7616,
  [SMALL_STATE(299)] = 7625,
  [SMALL_STATE(300)] = 7636,
  [SMALL_STATE(301)] = 7645,
  [SMALL_STATE(302)] = 7656,
  [SMALL_STATE(303)] = 7665,
  [SMALL_STATE(304)] = 7676,
  [SMALL_STATE(305)] = 7687,
  [SMALL_STATE(306)] = 7700,
  [SMALL_STATE(307)] = 7711,
  [SMALL_STATE(308)] = 7724,
  [SMALL_STATE(309)] = 7735,
  [SMALL_STATE(310)] = 7746,
  [SMALL_STATE(311)] = 7757,
  [SMALL_STATE(312)] = 7767,
  [SMALL_STATE(313)] = 7777,
  [SMALL_STATE(314)] = 7787,
  [SMALL_STATE(315)] = 7797,
  [SMALL_STATE(316)] = 7805,
  [SMALL_STATE(317)] = 7811,
  [SMALL_STATE(318)] = 7821,
  [SMALL_STATE(319)] = 7827,
  [SMALL_STATE(320)] = 7837,
  [SMALL_STATE(321)] = 7847,
  [SMALL_STATE(322)] = 7857,
  [SMALL_STATE(323)] = 7867,
  [SMALL_STATE(324)] = 7877,
  [SMALL_STATE(325)] = 7887,
  [SMALL_STATE(326)] = 7897,
  [SMALL_STATE(327)] = 7907,
  [SMALL_STATE(328)] = 7917,
  [SMALL_STATE(329)] = 7927,
  [SMALL_STATE(330)] = 7933,
  [SMALL_STATE(331)] = 7943,
  [SMALL_STATE(332)] = 7953,
  [SMALL_STATE(333)] = 7959,
  [SMALL_STATE(334)] = 7965,
  [SMALL_STATE(335)] = 7975,
  [SMALL_STATE(336)] = 7985,
  [SMALL_STATE(337)] = 7995,
  [SMALL_STATE(338)] = 8005,
  [SMALL_STATE(339)] = 8015,
  [SMALL_STATE(340)] = 8021,
  [SMALL_STATE(341)] = 8031,
  [SMALL_STATE(342)] = 8037,
  [SMALL_STATE(343)] = 8047,
  [SMALL_STATE(344)] = 8057,
  [SMALL_STATE(345)] = 8065,
  [SMALL_STATE(346)] = 8075,
  [SMALL_STATE(347)] = 8085,
  [SMALL_STATE(348)] = 8095,
  [SMALL_STATE(349)] = 8105,
  [SMALL_STATE(350)] = 8111,
  [SMALL_STATE(351)] = 8121,
  [SMALL_STATE(352)] = 8129,
  [SMALL_STATE(353)] = 8139,
  [SMALL_STATE(354)] = 8145,
  [SMALL_STATE(355)] = 8155,
  [SMALL_STATE(356)] = 8165,
  [SMALL_STATE(357)] = 8175,
  [SMALL_STATE(358)] = 8181,
  [SMALL_STATE(359)] = 8191,
  [SMALL_STATE(360)] = 8201,
  [SMALL_STATE(361)] = 8209,
  [SMALL_STATE(362)] = 8219,
  [SMALL_STATE(363)] = 8225,
  [SMALL_STATE(364)] = 8233,
  [SMALL_STATE(365)] = 8243,
  [SMALL_STATE(366)] = 8253,
  [SMALL_STATE(367)] = 8263,
  [SMALL_STATE(368)] = 8269,
  [SMALL_STATE(369)] = 8279,
  [SMALL_STATE(370)] = 8289,
  [SMALL_STATE(371)] = 8295,
  [SMALL_STATE(372)] = 8301,
  [SMALL_STATE(373)] = 8311,
  [SMALL_STATE(374)] = 8321,
  [SMALL_STATE(375)] = 8331,
  [SMALL_STATE(376)] = 8337,
  [SMALL_STATE(377)] = 8343,
  [SMALL_STATE(378)] = 8353,
  [SMALL_STATE(379)] = 8363,
  [SMALL_STATE(380)] = 8369,
  [SMALL_STATE(381)] = 8375,
  [SMALL_STATE(382)] = 8381,
  [SMALL_STATE(383)] = 8387,
  [SMALL_STATE(384)] = 8397,
  [SMALL_STATE(385)] = 8407,
  [SMALL_STATE(386)] = 8417,
  [SMALL_STATE(387)] = 8427,
  [SMALL_STATE(388)] = 8437,
  [SMALL_STATE(389)] = 8447,
  [SMALL_STATE(390)] = 8455,
  [SMALL_STATE(391)] = 8465,
  [SMALL_STATE(392)] = 8475,
  [SMALL_STATE(393)] = 8481,
  [SMALL_STATE(394)] = 8491,
  [SMALL_STATE(395)] = 8497,
  [SMALL_STATE(396)] = 8507,
  [SMALL_STATE(397)] = 8513,
  [SMALL_STATE(398)] = 8519,
  [SMALL_STATE(399)] = 8529,
  [SMALL_STATE(400)] = 8535,
  [SMALL_STATE(401)] = 8541,
  [SMALL_STATE(402)] = 8547,
  [SMALL_STATE(403)] = 8553,
  [SMALL_STATE(404)] = 8563,
  [SMALL_STATE(405)] = 8571,
  [SMALL_STATE(406)] = 8581,
  [SMALL_STATE(407)] = 8591,
  [SMALL_STATE(408)] = 8601,
  [SMALL_STATE(409)] = 8611,
  [SMALL_STATE(410)] = 8621,
  [SMALL_STATE(411)] = 8631,
  [SMALL_STATE(412)] = 8637,
  [SMALL_STATE(413)] = 8645,
  [SMALL_STATE(414)] = 8651,
  [SMALL_STATE(415)] = 8661,
  [SMALL_STATE(416)] = 8667,
  [SMALL_STATE(417)] = 8675,
  [SMALL_STATE(418)] = 8681,
  [SMALL_STATE(419)] = 8686,
  [SMALL_STATE(420)] = 8691,
  [SMALL_STATE(421)] = 8696,
  [SMALL_STATE(422)] = 8703,
  [SMALL_STATE(423)] = 8708,
  [SMALL_STATE(424)] = 8713,
  [SMALL_STATE(425)] = 8720,
  [SMALL_STATE(426)] = 8725,
  [SMALL_STATE(427)] = 8730,
  [SMALL_STATE(428)] = 8735,
  [SMALL_STATE(429)] = 8740,
  [SMALL_STATE(430)] = 8745,
  [SMALL_STATE(431)] = 8752,
  [SMALL_STATE(432)] = 8757,
  [SMALL_STATE(433)] = 8764,
  [SMALL_STATE(434)] = 8769,
  [SMALL_STATE(435)] = 8774,
  [SMALL_STATE(436)] = 8779,
  [SMALL_STATE(437)] = 8784,
  [SMALL_STATE(438)] = 8789,
  [SMALL_STATE(439)] = 8794,
  [SMALL_STATE(440)] = 8799,
  [SMALL_STATE(441)] = 8806,
  [SMALL_STATE(442)] = 8811,
  [SMALL_STATE(443)] = 8816,
  [SMALL_STATE(444)] = 8823,
  [SMALL_STATE(445)] = 8828,
  [SMALL_STATE(446)] = 8833,
  [SMALL_STATE(447)] = 8840,
  [SMALL_STATE(448)] = 8845,
  [SMALL_STATE(449)] = 8850,
  [SMALL_STATE(450)] = 8855,
  [SMALL_STATE(451)] = 8860,
  [SMALL_STATE(452)] = 8865,
  [SMALL_STATE(453)] = 8872,
  [SMALL_STATE(454)] = 8877,
  [SMALL_STATE(455)] = 8884,
  [SMALL_STATE(456)] = 8891,
  [SMALL_STATE(457)] = 8896,
  [SMALL_STATE(458)] = 8901,
  [SMALL_STATE(459)] = 8908,
  [SMALL_STATE(460)] = 8913,
  [SMALL_STATE(461)] = 8918,
  [SMALL_STATE(462)] = 8923,
  [SMALL_STATE(463)] = 8928,
  [SMALL_STATE(464)] = 8932,
  [SMALL_STATE(465)] = 8936,
  [SMALL_STATE(466)] = 8940,
  [SMALL_STATE(467)] = 8944,
  [SMALL_STATE(468)] = 8948,
  [SMALL_STATE(469)] = 8952,
  [SMALL_STATE(470)] = 8956,
  [SMALL_STATE(471)] = 8960,
  [SMALL_STATE(472)] = 8964,
  [SMALL_STATE(473)] = 8968,
  [SMALL_STATE(474)] = 8972,
  [SMALL_STATE(475)] = 8976,
  [SMALL_STATE(476)] = 8980,
  [SMALL_STATE(477)] = 8984,
  [SMALL_STATE(478)] = 8988,
  [SMALL_STATE(479)] = 8992,
  [SMALL_STATE(480)] = 8996,
  [SMALL_STATE(481)] = 9000,
  [SMALL_STATE(482)] = 9004,
  [SMALL_STATE(483)] = 9008,
  [SMALL_STATE(484)] = 9012,
  [SMALL_STATE(485)] = 9016,
  [SMALL_STATE(486)] = 9020,
  [SMALL_STATE(487)] = 9024,
  [SMALL_STATE(488)] = 9028,
  [SMALL_STATE(489)] = 9032,
  [SMALL_STATE(490)] = 9036,
  [SMALL_STATE(491)] = 9040,
  [SMALL_STATE(492)] = 9044,
  [SMALL_STATE(493)] = 9048,
  [SMALL_STATE(494)] = 9052,
  [SMALL_STATE(495)] = 9056,
  [SMALL_STATE(496)] = 9060,
  [SMALL_STATE(497)] = 9064,
  [SMALL_STATE(498)] = 9068,
  [SMALL_STATE(499)] = 9072,
  [SMALL_STATE(500)] = 9076,
  [SMALL_STATE(501)] = 9080,
  [SMALL_STATE(502)] = 9084,
  [SMALL_STATE(503)] = 9088,
  [SMALL_STATE(504)] = 9092,
  [SMALL_STATE(505)] = 9096,
  [SMALL_STATE(506)] = 9100,
  [SMALL_STATE(507)] = 9104,
  [SMALL_STATE(508)] = 9108,
  [SMALL_STATE(509)] = 9112,
  [SMALL_STATE(510)] = 9116,
  [SMALL_STATE(511)] = 9120,
  [SMALL_STATE(512)] = 9124,
  [SMALL_STATE(513)] = 9128,
  [SMALL_STATE(514)] = 9132,
  [SMALL_STATE(515)] = 9136,
  [SMALL_STATE(516)] = 9140,
  [SMALL_STATE(517)] = 9144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(106),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(34),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(34),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(310),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(503),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(425),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(425),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(499),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(498),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(497),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(292),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(504),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(490),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_symbol, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_symbol, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_symbol, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_symbol, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_symbol, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_symbol, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_symbol, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_symbol, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(107),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(121),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(54),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(121),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(295),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(507),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_symbol, 5, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_symbol, 5, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_symbol, 6, .production_id = 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_symbol, 6, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nonterminal_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2), SHIFT_REPEAT(511),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(494),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(133),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(501),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(440),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_token_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_token_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_token_repeat1, 2), SHIFT_REPEAT(471),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_token, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_token, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_token, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_token, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 6),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 7),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 6),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 6),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 4),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 10),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dyn_type, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 7),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 7),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 5),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 5),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 9),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 6),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 5),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 6),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 6),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ref, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 6),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 6),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 6),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_type, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 5),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_item, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_item, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 5),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lifetime, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lifetime, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2), SHIFT_REPEAT(499),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 6),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 5),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 5),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat1, 2), SHIFT_REPEAT(494),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol1, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_token_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_token_repeat1, 2), SHIFT_REPEAT(481),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(285),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 7),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 6),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(496),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_type_params_repeat1, 2), SHIFT_REPEAT(284),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_type_params_repeat1, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_name_repeat1, 2), SHIFT_REPEAT(421),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nonterminal_name_repeat1, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__where_clauses_repeat1, 2),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__where_clauses_repeat1, 2), SHIFT_REPEAT(20),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2), SHIFT_REPEAT(238),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__alternatives_repeat1, 2), SHIFT_REPEAT(11),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__alternatives_repeat1, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 5),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(77),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 5),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associated_type, 5),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(93),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 5),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_item, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat2, 2), SHIFT_REPEAT(48),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat2, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_token_repeat1, 2), SHIFT_REPEAT(222),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_token_repeat1, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 6),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 4),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__grammar_params_repeat1, 2), SHIFT_REPEAT(454),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__grammar_params_repeat1, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametrized_type_repeat1, 2), SHIFT_REPEAT(65),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametrized_type_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 8),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 9),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 6),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 7),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 4),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 4),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_parameter, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_item, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 4),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 6),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound_param, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound_param, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 5),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 3),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(510),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 5),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 5),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conversion, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arg, 5),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminal, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_lalrpop_external_scanner_create(void);
void tree_sitter_lalrpop_external_scanner_destroy(void *);
bool tree_sitter_lalrpop_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lalrpop_external_scanner_serialize(void *, char *);
void tree_sitter_lalrpop_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lalrpop(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_lalrpop_external_scanner_create,
      tree_sitter_lalrpop_external_scanner_destroy,
      tree_sitter_lalrpop_external_scanner_scan,
      tree_sitter_lalrpop_external_scanner_serialize,
      tree_sitter_lalrpop_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
