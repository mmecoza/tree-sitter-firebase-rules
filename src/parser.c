#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_rules_version = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_service = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_match = 7,
  sym_identifier = 8,
  anon_sym_allow = 9,
  anon_sym_COLON = 10,
  anon_sym_if = 11,
  anon_sym_deny = 12,
  anon_sym_function = 13,
  anon_sym_LPAREN_RPAREN = 14,
  anon_sym_read = 15,
  anon_sym_write = 16,
  anon_sym_update = 17,
  anon_sym_delete = 18,
  anon_sym_create = 19,
  anon_sym_COMMA = 20,
  anon_sym_return = 21,
  anon_sym_BANG = 22,
  sym_db_path = 23,
  sym_path = 24,
  anon_sym_DQUOTE = 25,
  aux_sym__string_token1 = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_LT = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym__definition = 34,
  sym_rules_statement = 35,
  sym_service_scope = 36,
  sym_match_definition = 37,
  sym_match_expression = 38,
  sym_match_block = 39,
  sym_allow_statement = 40,
  sym_deny_statement = 41,
  sym_function_definition = 42,
  sym__type = 43,
  sym_compound_type = 44,
  sym_return_statement = 45,
  sym_unary_expression = 46,
  sym_expression = 47,
  sym_function_call = 48,
  sym__string = 49,
  sym_binary_expression = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_service_scope_repeat1 = 52,
  aux_sym_match_definition_repeat1 = 53,
  aux_sym_match_definition_repeat2 = 54,
  aux_sym_match_block_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_rules_version] = "rules_version",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_match] = "match",
  [sym_identifier] = "identifier",
  [anon_sym_allow] = "allow",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_deny] = "deny",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_update] = "update",
  [anon_sym_delete] = "delete",
  [anon_sym_create] = "create",
  [anon_sym_COMMA] = ",",
  [anon_sym_return] = "return",
  [anon_sym_BANG] = "!",
  [sym_db_path] = "db_path",
  [sym_path] = "path",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_rules_statement] = "rules_statement",
  [sym_service_scope] = "service_scope",
  [sym_match_definition] = "match_definition",
  [sym_match_expression] = "match_expression",
  [sym_match_block] = "match_block",
  [sym_allow_statement] = "allow_statement",
  [sym_deny_statement] = "deny_statement",
  [sym_function_definition] = "function_definition",
  [sym__type] = "_type",
  [sym_compound_type] = "compound_type",
  [sym_return_statement] = "return_statement",
  [sym_unary_expression] = "unary_expression",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [sym__string] = "_string",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_service_scope_repeat1] = "service_scope_repeat1",
  [aux_sym_match_definition_repeat1] = "match_definition_repeat1",
  [aux_sym_match_definition_repeat2] = "match_definition_repeat2",
  [aux_sym_match_block_repeat1] = "match_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_rules_version] = anon_sym_rules_version,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_match] = anon_sym_match,
  [sym_identifier] = sym_identifier,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_deny] = anon_sym_deny,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_db_path] = sym_db_path,
  [sym_path] = sym_path,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_rules_statement] = sym_rules_statement,
  [sym_service_scope] = sym_service_scope,
  [sym_match_definition] = sym_match_definition,
  [sym_match_expression] = sym_match_expression,
  [sym_match_block] = sym_match_block,
  [sym_allow_statement] = sym_allow_statement,
  [sym_deny_statement] = sym_deny_statement,
  [sym_function_definition] = sym_function_definition,
  [sym__type] = sym__type,
  [sym_compound_type] = sym_compound_type,
  [sym_return_statement] = sym_return_statement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
  [sym__string] = sym__string,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_service_scope_repeat1] = aux_sym_service_scope_repeat1,
  [aux_sym_match_definition_repeat1] = aux_sym_match_definition_repeat1,
  [aux_sym_match_definition_repeat2] = aux_sym_match_definition_repeat2,
  [aux_sym_match_block_repeat1] = aux_sym_match_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_rules_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
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
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deny] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_db_path] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_rules_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_service_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_match_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_block] = {
    .visible = true,
    .named = true,
  },
  [sym_allow_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_deny_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_type] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(133);
      ADVANCE_MAP(
        '!', 157,
        '"', 172,
        '\'', 184,
        '(', 17,
        ',', 154,
        '/', 18,
        ':', 144,
        ';', 137,
        '<', 188,
        '=', 136,
        '>', 187,
      );
      if (lookahead == '\\') SKIP(129);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(65);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(65);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(53);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(53);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(66);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '}') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 12:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '}') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(156);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '\\') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '}') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '}') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '{') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '}') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '}') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '{') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '{') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(219);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 126:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 128:
      if (eof) ADVANCE(133);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 129:
      if (eof) ADVANCE(133);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(128);
      END_STATE();
    case 130:
      if (eof) ADVANCE(133);
      if (lookahead == '\n') SKIP(132);
      END_STATE();
    case 131:
      if (eof) ADVANCE(133);
      if (lookahead == '\n') SKIP(132);
      if (lookahead == '\r') SKIP(130);
      END_STATE();
    case 132:
      if (eof) ADVANCE(133);
      ADVANCE_MAP(
        '!', 67,
        '"', 172,
        '\'', 184,
        '(', 17,
        ',', 154,
        '/', 19,
        ':', 144,
        ';', 137,
        '<', 188,
        '=', 68,
        '>', 187,
      );
      if (lookahead == '\\') SKIP(131);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == 'w') ADVANCE(110);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_rules_version);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_deny);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '}') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '}') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '}') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '}') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_db_path);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '}') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '}') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '}') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '}') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(163);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(56);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 132},
  [2] = {.lex_state = 132},
  [3] = {.lex_state = 132},
  [4] = {.lex_state = 132},
  [5] = {.lex_state = 132},
  [6] = {.lex_state = 132},
  [7] = {.lex_state = 132},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 132},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 132},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 132},
  [21] = {.lex_state = 132},
  [22] = {.lex_state = 132},
  [23] = {.lex_state = 132},
  [24] = {.lex_state = 132},
  [25] = {.lex_state = 132},
  [26] = {.lex_state = 132},
  [27] = {.lex_state = 132},
  [28] = {.lex_state = 132},
  [29] = {.lex_state = 132},
  [30] = {.lex_state = 132},
  [31] = {.lex_state = 132},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 132},
  [34] = {.lex_state = 132},
  [35] = {.lex_state = 132},
  [36] = {.lex_state = 132},
  [37] = {.lex_state = 132},
  [38] = {.lex_state = 132},
  [39] = {.lex_state = 132},
  [40] = {.lex_state = 132},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 132},
  [43] = {.lex_state = 132},
  [44] = {.lex_state = 132},
  [45] = {.lex_state = 132},
  [46] = {.lex_state = 132},
  [47] = {.lex_state = 132},
  [48] = {.lex_state = 132},
  [49] = {.lex_state = 132},
  [50] = {.lex_state = 132},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 132},
  [54] = {.lex_state = 132},
  [55] = {.lex_state = 132},
  [56] = {.lex_state = 132},
  [57] = {.lex_state = 132},
  [58] = {.lex_state = 132},
  [59] = {.lex_state = 66},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 132},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 132},
  [66] = {.lex_state = 132},
  [67] = {.lex_state = 132},
  [68] = {.lex_state = 132},
  [69] = {.lex_state = 132},
  [70] = {.lex_state = 132},
  [71] = {.lex_state = 132},
  [72] = {.lex_state = 132},
  [73] = {.lex_state = 132},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_rules_version] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_deny] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_db_path] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__definition] = STATE(20),
    [sym_rules_statement] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_rules_version] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_allow,
    ACTIONS(17), 1,
      anon_sym_deny,
    ACTIONS(19), 1,
      anon_sym_function,
    STATE(32), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
    STATE(3), 4,
      sym_match_expression,
      sym_allow_statement,
      sym_deny_statement,
      aux_sym_match_block_repeat1,
  [29] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_allow,
    ACTIONS(17), 1,
      anon_sym_deny,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(4), 4,
      sym_match_expression,
      sym_allow_statement,
      sym_deny_statement,
      aux_sym_match_block_repeat1,
  [51] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_match,
    ACTIONS(28), 1,
      anon_sym_allow,
    ACTIONS(31), 1,
      anon_sym_deny,
    STATE(4), 4,
      sym_match_expression,
      sym_allow_statement,
      sym_deny_statement,
      aux_sym_match_block_repeat1,
  [73] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_match_expression,
      aux_sym_match_definition_repeat1,
    STATE(28), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
  [94] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_match_expression,
      aux_sym_match_definition_repeat1,
    STATE(31), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
  [115] = 4,
    ACTIONS(9), 1,
      sym_comment,
    STATE(42), 1,
      sym__type,
    STATE(65), 1,
      sym_compound_type,
    ACTIONS(38), 5,
      anon_sym_read,
      anon_sym_write,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_create,
  [132] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_BANG,
    STATE(25), 1,
      sym_expression,
    STATE(21), 3,
      sym_unary_expression,
      sym_function_call,
      sym_binary_expression,
  [150] = 3,
    ACTIONS(9), 1,
      sym_comment,
    STATE(68), 1,
      sym__type,
    ACTIONS(44), 5,
      anon_sym_read,
      anon_sym_write,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_create,
  [164] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_BANG,
    STATE(22), 1,
      sym_expression,
    STATE(21), 3,
      sym_unary_expression,
      sym_function_call,
      sym_binary_expression,
  [182] = 3,
    ACTIONS(9), 1,
      sym_comment,
    STATE(63), 1,
      sym__type,
    ACTIONS(46), 5,
      anon_sym_read,
      anon_sym_write,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_create,
  [196] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_BANG,
    STATE(23), 1,
      sym_expression,
    STATE(21), 3,
      sym_unary_expression,
      sym_function_call,
      sym_binary_expression,
  [214] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_BANG,
    STATE(26), 1,
      sym_expression,
    STATE(21), 3,
      sym_unary_expression,
      sym_function_call,
      sym_binary_expression,
  [232] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_BANG,
    STATE(27), 1,
      sym_expression,
    STATE(21), 3,
      sym_unary_expression,
      sym_function_call,
      sym_binary_expression,
  [250] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(48), 5,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_function,
  [261] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(50), 5,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_function,
  [272] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(52), 5,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_deny,
      anon_sym_function,
  [283] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_match,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      anon_sym_function,
    STATE(18), 2,
      sym_match_expression,
      aux_sym_match_definition_repeat1,
  [298] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_rules_version,
    STATE(38), 1,
      sym_rules_statement,
    STATE(19), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [315] = 5,
    ACTIONS(7), 1,
      anon_sym_rules_version,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_rules_statement,
    STATE(19), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [332] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(66), 5,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [343] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(70), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [356] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(70), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [369] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(74), 5,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [380] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(70), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [393] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(70), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [406] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(80), 5,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT,
      anon_sym_LT,
  [417] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
  [431] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      anon_sym_function,
    STATE(29), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
  [445] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      anon_sym_match,
    STATE(33), 2,
      sym_match_definition,
      aux_sym_service_scope_repeat1,
  [459] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
  [473] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(29), 2,
      sym_function_definition,
      aux_sym_match_definition_repeat2,
  [487] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_match,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_match_definition,
      aux_sym_service_scope_repeat1,
  [501] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      anon_sym_match,
    STATE(34), 2,
      sym_match_definition,
      aux_sym_service_scope_repeat1,
  [515] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_deny,
  [525] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_deny,
  [535] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym__string,
  [548] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_service,
    STATE(44), 1,
      sym_service_scope,
  [558] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_match,
  [566] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_rules_version,
  [574] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_return,
    STATE(53), 1,
      sym_return_statement,
  [584] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 1,
      anon_sym_COMMA,
  [594] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_rules_version,
  [602] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_rules_version,
  [610] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_match,
  [618] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      anon_sym_function,
  [626] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_match_block,
  [636] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      anon_sym_match,
  [644] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [651] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
  [658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_db_path,
  [665] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_identifier,
  [672] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
  [679] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_if,
  [686] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
  [693] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_if,
  [700] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN_RPAREN,
  [707] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_SEMI,
  [714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_path,
  [721] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
  [728] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
  [735] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym__string_token1,
  [742] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COLON,
  [749] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__string_token1,
  [756] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [763] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LPAREN_RPAREN,
  [770] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [777] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [784] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_SEMI,
  [791] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
  [798] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
  [805] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
  [812] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_service,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 250,
  [SMALL_STATE(16)] = 261,
  [SMALL_STATE(17)] = 272,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 369,
  [SMALL_STATE(25)] = 380,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 431,
  [SMALL_STATE(30)] = 445,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 473,
  [SMALL_STATE(33)] = 487,
  [SMALL_STATE(34)] = 501,
  [SMALL_STATE(35)] = 515,
  [SMALL_STATE(36)] = 525,
  [SMALL_STATE(37)] = 535,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 558,
  [SMALL_STATE(40)] = 566,
  [SMALL_STATE(41)] = 574,
  [SMALL_STATE(42)] = 584,
  [SMALL_STATE(43)] = 594,
  [SMALL_STATE(44)] = 602,
  [SMALL_STATE(45)] = 610,
  [SMALL_STATE(46)] = 618,
  [SMALL_STATE(47)] = 626,
  [SMALL_STATE(48)] = 636,
  [SMALL_STATE(49)] = 644,
  [SMALL_STATE(50)] = 651,
  [SMALL_STATE(51)] = 658,
  [SMALL_STATE(52)] = 665,
  [SMALL_STATE(53)] = 672,
  [SMALL_STATE(54)] = 679,
  [SMALL_STATE(55)] = 686,
  [SMALL_STATE(56)] = 693,
  [SMALL_STATE(57)] = 700,
  [SMALL_STATE(58)] = 707,
  [SMALL_STATE(59)] = 714,
  [SMALL_STATE(60)] = 721,
  [SMALL_STATE(61)] = 728,
  [SMALL_STATE(62)] = 735,
  [SMALL_STATE(63)] = 742,
  [SMALL_STATE(64)] = 749,
  [SMALL_STATE(65)] = 756,
  [SMALL_STATE(66)] = 763,
  [SMALL_STATE(67)] = 770,
  [SMALL_STATE(68)] = 777,
  [SMALL_STATE(69)] = 784,
  [SMALL_STATE(70)] = 791,
  [SMALL_STATE(71)] = 798,
  [SMALL_STATE(72)] = 805,
  [SMALL_STATE(73)] = 812,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_definition_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_definition_repeat2, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_scope_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_scope_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allow_statement, 6, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deny_statement, 6, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_definition, 6, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_scope, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_scope, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_definition, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_definition, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_type, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules_statement, 4, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_firebase(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
