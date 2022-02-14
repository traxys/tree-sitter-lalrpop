#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>
#include <search.h>
#include "scanner_table.c"

#define SYMBOLS(...)                                                           \
	enum TokenType { __VA_ARGS__ };                                            \
	enum TokenType variants[] = { __VA_ARGS__ };

SYMBOLS(MACRO_ID, USE, STRING_CONTENT, REGEX_LITERAL, NORMAL_ACTION,
        FAILIBLE_ACTION)

#define for_each_symbol(var)                                                   \
	for (int i = 0, var = variants[0];                                         \
	     i < sizeof(variants) / sizeof(enum TokenType);                        \
	     i++, var = variants[i])

static bool other_variants(const bool *valid_symbols, enum TokenType variant) {
	bool other = false;

	enum TokenType iter_var;
	for_each_symbol(iter_var) {
		if (iter_var == variant)
			continue;

		other |= valid_symbols[variants[i]];
	}

	return other;
}

static void print_valid_syms(const bool *valid_symbols) {
	enum TokenType var;

	printf("Valid variants: ");
	for_each_symbol(var) {
		if (valid_symbols[var])
			printf(" %d ", var);
	}

	printf("\n");
}

void *tree_sitter_lalrpop_external_scanner_create() {
	return NULL;
}

void tree_sitter_lalrpop_external_scanner_destroy(void *p) {
}

void tree_sitter_lalrpop_external_scanner_reset(void *p) {
}

unsigned tree_sitter_lalrpop_external_scanner_serialize(void *p, char *buffer) {
	return 0;
}

void tree_sitter_lalrpop_external_scanner_deserialize(void *p, const char *b,
                                                      unsigned n) {
}

static void advance(TSLexer *lexer) {
	lexer->advance(lexer, false);
}

static bool string_literal(TSLexer *lexer, char quote) {
	bool escape = false;
	bool terminate;

	for (;;) {
		if (lexer->lookahead == 0) {
			return false;
		} else if (lexer->lookahead == quote) {
			advance(lexer);
			return true;
		}

		if (escape) {
			escape = false;
		} else {
			escape = lexer->lookahead == '\\';
		}

		advance(lexer);
	}

	return false;
}

static bool take_until_terminating(TSLexer *lexer, char terminator) {
	for (;;) {
		if (lexer->lookahead == terminator) {
			advance(lexer);
			return true;
		} else if (lexer->lookahead == 0) {
			return false;
		}

		advance(lexer);
	}
}

static bool lifetime_or_char_literal(TSLexer *lexer) {
	if (lexer->lookahead == 0)
		return false;

	if (lexer->lookahead == '\\') {
		advance(lexer); // Consume the backslash
		advance(lexer); // Consume the escaped char
		return take_until_terminating(lexer, '\'');
	} else {
		advance(lexer); // Consume the lookahead
		if (lexer->lookahead == '\'')
			advance(lexer); // it was a char literal, Consume the quote
		return true;
	}

	return true;
}

static bool unicode_strchr(const char *str, int32_t c) {
	while (*str != 0) {
		if (*str == c)
			return true;
		str++;
	}

	return false;
}

static bool code(TSLexer *lexer, const char *open_delims,
                 const char *close_delims) {
	size_t balance = 0;

	for (;;) {
		switch (lexer->lookahead) {
		case '"':
			advance(lexer);
			if (!string_literal(lexer, '"'))
				return false;
			continue;
		case '\'':
			advance(lexer);
			if (!lifetime_or_char_literal(lexer))
				return false;
			continue;
		case 'r':
			advance(lexer);
			if (lexer->lookahead == '#')
				abort();
			continue;
		case '/':
			advance(lexer);
			if (lexer->lookahead == '/')
				take_until_terminating(lexer, '\n');
			continue;
		case 0:
			return balance == 0;
		default:
			if (unicode_strchr(open_delims, lexer->lookahead)) {
				balance++;
			} else if (balance > 0) {
				if (unicode_strchr(close_delims, lexer->lookahead))
					balance--;
			} else {
				if (lexer->lookahead == ',' || lexer->lookahead == ';' ||
				    unicode_strchr(close_delims, lexer->lookahead))
					return true;
			}
			break;
		}
		advance(lexer);
	}
}

static int range_comparator(const void *key, const void *vr) {
	const struct range *range = vr;
	const int32_t *c = key;

	if (range->start > *c) {
		return 1;
	} else if (range->end < *c) {
		return -1;
	} else {
		return 0;
	}
}

static bool xid_start_extended(int32_t c) {
	return bsearch(&c, xid_start_class,
	               sizeof(xid_continue_class) / sizeof(struct range),
	               sizeof(struct range), range_comparator) != NULL;
}

static bool is_xid_start(int32_t c) {
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ||
	       (c > 0x7f && xid_start_extended(c));
}

static bool xid_continue_extended(int32_t c) {
	return bsearch(&c, xid_continue_class,
	               sizeof(xid_continue_class) / sizeof(struct range),
	               sizeof(struct range), range_comparator) != NULL;
}

static bool is_xid_continue(int32_t c) {
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ||
	       ('0' <= c && c <= '9') || c == '_' ||
	       (c > 0x7f && xid_continue_extended(c));
}

static bool match_word(TSLexer *lexer, const char *word, size_t len) {
	while (len > 0) {
		if (lexer->lookahead == *word) {
			advance(lexer);
			len--;
			word++;
		} else {
			return false;
		}
	}

	return !(is_xid_continue(lexer->lookahead));
}

#define STRLEN(s) (sizeof(s) - 1)
#define MATCH_WORD(lex, s) match_word(lex, s, STRLEN(s))

static bool regex_literal(TSLexer *lexer, size_t consumed_hash) {
	lexer->result_symbol = REGEX_LITERAL;

	size_t hash_count = consumed_hash;
	while (lexer->lookahead == '#') {
		hash_count++;
		advance(lexer);
	}

	if (lexer->lookahead != '"') {
		printf("Fail regex literal on expecting \": %c\n", lexer->lookahead);
		return false;
	}

	advance(lexer); // we are now in the string contents

	size_t state = 0;
	for (;;) {
		if (lexer->lookahead == 0)
			return false;

		if (lexer->lookahead == '"') {
			advance(lexer);

			size_t closing_hashes = 0;
			while (lexer->lookahead == '#' && closing_hashes < hash_count) {
				advance(lexer);
				closing_hashes++;
			}

			if (closing_hashes == hash_count)
				return true;
		} else {
			advance(lexer);
		}
	}
}

bool tree_sitter_lalrpop_external_scanner_scan(void *p, TSLexer *lexer,
                                               const bool *valid_symbols) {
	while (iswspace(lexer->lookahead))
		lexer->advance(lexer, true);

	if (valid_symbols[NORMAL_ACTION] && lexer->lookahead == '=') {
		advance(lexer);
		lexer->result_symbol = NORMAL_ACTION;

		if (lexer->lookahead != '>')
			goto string_content;

		advance(lexer);

		if (lexer->lookahead == '?') {
			lexer->result_symbol = FAILIBLE_ACTION;
			advance(lexer);
		}

		// =>@R or =>@L
		if (lexer->lookahead == '@')
			goto string_content;

		while (iswspace(lexer->lookahead))
			lexer->advance(lexer, true);

		if (code(lexer, "([{", "}])")) {
			return true;
		}

		goto string_content;
	}

	if (valid_symbols[REGEX_LITERAL] || valid_symbols[MACRO_ID]) {
		if (lexer->lookahead == 'r') {
			advance(lexer);

			if (lexer->lookahead == '"') {
				return regex_literal(lexer, 0);
			} else if (lexer->lookahead == '#') {
				advance(lexer);
				if (lexer->lookahead == '#' || lexer->lookahead == '"')
					return regex_literal(lexer, 1);
			}
		}

		lexer->result_symbol = MACRO_ID;

		// If are here then we are maybe in a macro id, and it could be of the form r#...
		if (!is_xid_start(lexer->lookahead))
			goto string_content;

		advance(lexer);
		while (is_xid_continue(lexer->lookahead)) {
			advance(lexer);
		}

		while (iswspace(lexer->lookahead))
			lexer->advance(lexer, true);

		return lexer->lookahead == '<';
	}

	if (valid_symbols[USE]) {
		if (!MATCH_WORD(lexer, "use"))
			goto string_content;

		if (code(lexer, "([{", "}])")) {
			lexer->result_symbol = USE;
			return true;
		}
	}

string_content:
	if (valid_symbols[STRING_CONTENT]) {
		/* if (other_variants(valid_symbols, STRING_CONTENT)) {
			printf("You should handle this case (line %d)\n", __LINE__);
			print_valid_syms(valid_symbols);
		} */

		bool has_content = false;
		for (;;) {
			if (lexer->lookahead == '\"' || lexer->lookahead == '\\') {
				break;
			} else if (lexer->lookahead == 0) {
				return false;
			}
			has_content = true;
			advance(lexer);
		}
		lexer->result_symbol = STRING_CONTENT;
		return has_content;
	}

	return false;
}
