#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 384
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  anon_sym_PERCENT_PERCENT = 1,
  anon_sym_PIPE = 2,
  sym_lid = 3,
  sym_uid = 4,
  sym_qid = 5,
  anon_sym_PERCENTparameter = 6,
  anon_sym_PERCENTtoken = 7,
  anon_sym_COMMA = 8,
  anon_sym_PERCENTtype = 9,
  anon_sym_PERCENTstart = 10,
  anon_sym_PERCENTattribute = 11,
  anon_sym_PERCENTon_error_reduce = 12,
  anon_sym_SEMI = 13,
  anon_sym_PERCENTleft = 14,
  anon_sym_PERCENTright = 15,
  anon_sym_PERCENTnonassoc = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_COLON = 19,
  anon_sym_PERCENTpublic = 20,
  anon_sym_PERCENTinline = 21,
  anon_sym_PERCENTprec = 22,
  anon_sym_EQ = 23,
  anon_sym_QMARK = 24,
  anon_sym_STAR = 25,
  anon_sym_PLUS = 26,
  anon_sym_let = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_COLON_EQ = 29,
  anon_sym__ = 30,
  anon_sym_TILDE = 31,
  sym_line_comment = 32,
  sym_comment = 33,
  anon_sym_PERCENT_LBRACE = 34,
  anon_sym_PERCENT_RBRACE = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_LBRACK_AT = 38,
  anon_sym_RBRACK = 39,
  anon_sym_PERCENT_LBRACK_AT = 40,
  anon_sym_LT = 41,
  anon_sym_GT = 42,
  anon_sym_LBRACK = 43,
  aux_sym__ocaml_token1 = 44,
  aux_sym__ocaml_token2 = 45,
  aux_sym__ocaml_token3 = 46,
  aux_sym__ocaml_token4 = 47,
  anon_sym_PERCENT = 48,
  aux_sym_ocaml_type_token1 = 49,
  sym_ocaml_comment = 50,
  sym_source_file = 51,
  sym__high_prec_bar = 52,
  sym__low_prec_bar = 53,
  sym_symbol = 54,
  sym_declaration = 55,
  sym_terminal_alias_attrs = 56,
  sym_priority_keyword = 57,
  sym_non_terminal = 58,
  sym_old_rule = 59,
  sym_flags = 60,
  sym_production_group = 61,
  sym_precedence = 62,
  sym_producer = 63,
  sym_strict_actual = 64,
  sym_actual = 65,
  sym_lax_actual = 66,
  sym_modifier = 67,
  sym_new_rule = 68,
  sym_equality_symbol = 69,
  sym_expression = 70,
  sym_seq_expression = 71,
  sym_symbol_expression = 72,
  sym_action_expression = 73,
  sym_menhir_action = 74,
  sym_pattern = 75,
  sym_header = 76,
  sym_action = 77,
  sym_attribute = 78,
  sym_grammar_attribute = 79,
  sym_type = 80,
  sym_postlude = 81,
  sym_ocaml = 82,
  sym__ocaml = 83,
  sym_ocaml_type = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_source_file_repeat2 = 86,
  aux_sym_declaration_repeat1 = 87,
  aux_sym_declaration_repeat2 = 88,
  aux_sym_declaration_repeat3 = 89,
  aux_sym_declaration_repeat4 = 90,
  aux_sym_declaration_repeat5 = 91,
  aux_sym_old_rule_repeat1 = 92,
  aux_sym_old_rule_repeat2 = 93,
  aux_sym_old_rule_repeat3 = 94,
  aux_sym_production_group_repeat1 = 95,
  aux_sym_production_group_repeat2 = 96,
  aux_sym_strict_actual_repeat1 = 97,
  aux_sym_actual_repeat1 = 98,
  aux_sym_expression_repeat1 = 99,
  aux_sym_symbol_expression_repeat1 = 100,
  aux_sym_pattern_repeat1 = 101,
  aux_sym__ocaml_repeat1 = 102,
  aux_sym_ocaml_type_repeat1 = 103,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_PIPE] = "|",
  [sym_lid] = "lid",
  [sym_uid] = "uid",
  [sym_qid] = "qid",
  [anon_sym_PERCENTparameter] = "%parameter",
  [anon_sym_PERCENTtoken] = "%token",
  [anon_sym_COMMA] = ",",
  [anon_sym_PERCENTtype] = "%type",
  [anon_sym_PERCENTstart] = "%start",
  [anon_sym_PERCENTattribute] = "%attribute",
  [anon_sym_PERCENTon_error_reduce] = "%on_error_reduce",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENTleft] = "%left",
  [anon_sym_PERCENTright] = "%right",
  [anon_sym_PERCENTnonassoc] = "%nonassoc",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_PERCENTpublic] = "%public",
  [anon_sym_PERCENTinline] = "%inline",
  [anon_sym_PERCENTprec] = "%prec",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_let] = "let",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym__] = "_",
  [anon_sym_TILDE] = "~",
  [sym_line_comment] = "line_comment",
  [sym_comment] = "comment",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK_AT] = "[@",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PERCENT_LBRACK_AT] = "%[@",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [aux_sym__ocaml_token1] = "_ocaml_token1",
  [aux_sym__ocaml_token2] = "_ocaml_token2",
  [aux_sym__ocaml_token3] = "_ocaml_token3",
  [aux_sym__ocaml_token4] = "_ocaml_token4",
  [anon_sym_PERCENT] = "%",
  [aux_sym_ocaml_type_token1] = "ocaml_type_token1",
  [sym_ocaml_comment] = "ocaml_comment",
  [sym_source_file] = "source_file",
  [sym__high_prec_bar] = "_high_prec_bar",
  [sym__low_prec_bar] = "_low_prec_bar",
  [sym_symbol] = "symbol",
  [sym_declaration] = "declaration",
  [sym_terminal_alias_attrs] = "terminal_alias_attrs",
  [sym_priority_keyword] = "priority_keyword",
  [sym_non_terminal] = "non_terminal",
  [sym_old_rule] = "old_rule",
  [sym_flags] = "flags",
  [sym_production_group] = "production_group",
  [sym_precedence] = "precedence",
  [sym_producer] = "producer",
  [sym_strict_actual] = "strict_actual",
  [sym_actual] = "actual",
  [sym_lax_actual] = "lax_actual",
  [sym_modifier] = "modifier",
  [sym_new_rule] = "new_rule",
  [sym_equality_symbol] = "equality_symbol",
  [sym_expression] = "expression",
  [sym_seq_expression] = "seq_expression",
  [sym_symbol_expression] = "symbol_expression",
  [sym_action_expression] = "action_expression",
  [sym_menhir_action] = "menhir_action",
  [sym_pattern] = "pattern",
  [sym_header] = "header",
  [sym_action] = "action",
  [sym_attribute] = "attribute",
  [sym_grammar_attribute] = "grammar_attribute",
  [sym_type] = "type",
  [sym_postlude] = "postlude",
  [sym_ocaml] = "ocaml",
  [sym__ocaml] = "_ocaml",
  [sym_ocaml_type] = "ocaml_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_declaration_repeat2] = "declaration_repeat2",
  [aux_sym_declaration_repeat3] = "declaration_repeat3",
  [aux_sym_declaration_repeat4] = "declaration_repeat4",
  [aux_sym_declaration_repeat5] = "declaration_repeat5",
  [aux_sym_old_rule_repeat1] = "old_rule_repeat1",
  [aux_sym_old_rule_repeat2] = "old_rule_repeat2",
  [aux_sym_old_rule_repeat3] = "old_rule_repeat3",
  [aux_sym_production_group_repeat1] = "production_group_repeat1",
  [aux_sym_production_group_repeat2] = "production_group_repeat2",
  [aux_sym_strict_actual_repeat1] = "strict_actual_repeat1",
  [aux_sym_actual_repeat1] = "actual_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_symbol_expression_repeat1] = "symbol_expression_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym__ocaml_repeat1] = "_ocaml_repeat1",
  [aux_sym_ocaml_type_repeat1] = "ocaml_type_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_lid] = {
    .visible = true,
    .named = true,
  },
  [sym_uid] = {
    .visible = true,
    .named = true,
  },
  [sym_qid] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTparameter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTstart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTattribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTon_error_reduce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTnonassoc] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PERCENTpublic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTprec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
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
  [anon_sym_LBRACK_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACK_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ocaml_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ocaml_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ocaml_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ocaml_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ocaml_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ocaml_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__high_prec_bar] = {
    .visible = false,
    .named = true,
  },
  [sym__low_prec_bar] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal_alias_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_priority_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_non_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_old_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_production_group] = {
    .visible = true,
    .named = true,
  },
  [sym_precedence] = {
    .visible = true,
    .named = true,
  },
  [sym_producer] = {
    .visible = true,
    .named = true,
  },
  [sym_strict_actual] = {
    .visible = true,
    .named = true,
  },
  [sym_actual] = {
    .visible = true,
    .named = true,
  },
  [sym_lax_actual] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_new_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_seq_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_action_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_menhir_action] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_postlude] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml] = {
    .visible = true,
    .named = true,
  },
  [sym__ocaml] = {
    .visible = false,
    .named = true,
  },
  [sym_ocaml_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_old_rule_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_strict_actual_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actual_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ocaml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ocaml_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '_')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '~')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(27);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if ((' ' <= lookahead && lookahead <= '~'))
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(32);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(38);
      if (lookahead == 'r')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(40);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == 0)
        ADVANCE(44);
      if (lookahead == '\\')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(44);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      if (lookahead == '*')
        ADVANCE(46);
      if (lookahead == '/')
        ADVANCE(47);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_uid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_lid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 0)
        ADVANCE(27);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__ocaml_token1);
      END_STATE();
    case 29:
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(27);
      if (lookahead == '"')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(29);
      if ((' ' <= lookahead && lookahead <= '~'))
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 32:
      if (lookahead == '@')
        ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'n')
        ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'o')
        ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'n')
        ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'r')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'i')
        ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'o')
        ADVANCE(63);
      if (lookahead == 'y')
        ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 44:
      if (lookahead == '\'')
        ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'o')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(67);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == '*')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 't')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_qid);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACK_AT);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'l')
        ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'f')
        ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == '_')
        ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'r')
        ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'b')
        ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'g')
        ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'k')
        ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'p')
        ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__ocaml_token2);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(83);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(84);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == '*')
        ADVANCE(69);
      if (lookahead == '/')
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 71:
      if (lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'i')
        ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'a')
        ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'c')
        ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'l')
        ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'h')
        ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'r')
        ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(99);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(44);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 87:
      if (lookahead == 'i')
        ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PERCENTleft);
      END_STATE();
    case 90:
      if (lookahead == 's')
        ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'm')
        ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PERCENTprec);
      END_STATE();
    case 94:
      if (lookahead == 'i')
        ADVANCE(105);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 't')
        ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PERCENTtype);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 'b')
        ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 's')
        ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'r')
        ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'c')
        ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PERCENTright);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PERCENTstart);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PERCENTtoken);
      END_STATE();
    case 109:
      if (lookahead == 'u')
        ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PERCENTinline);
      END_STATE();
    case 111:
      if (lookahead == 'o')
        ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'o')
        ADVANCE(117);
      END_STATE();
    case 113:
      if (lookahead == 't')
        ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PERCENTpublic);
      END_STATE();
    case 115:
      if (lookahead == 't')
        ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 'c')
        ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 'r')
        ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PERCENTnonassoc);
      END_STATE();
    case 121:
      if (lookahead == '_')
        ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PERCENTattribute);
      END_STATE();
    case 124:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PERCENTparameter);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'd')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'u')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'c')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENTon_error_reduce);
      END_STATE();
    case 132:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(134);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 133:
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~'))
        ADVANCE(136);
      END_STATE();
    case 134:
      if (lookahead == '%')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(32);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(137);
      if (lookahead == 'r')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(40);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(42);
      END_STATE();
    case 135:
      if (lookahead == '@')
        ADVANCE(138);
      END_STATE();
    case 136:
      if (lookahead == '"')
        ADVANCE(51);
      if ((' ' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~'))
        ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACK_AT);
      END_STATE();
    case 139:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(140);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(141);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 140:
      if (lookahead == 'p')
        ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 142:
      if (lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 143:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(144);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 144:
      if (lookahead == '%')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 'p')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'r')
        ADVANCE(59);
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 146:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(27);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == '\'')
        ADVANCE(148);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(149);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}')
        ADVANCE(43);
      END_STATE();
    case 148:
      if (lookahead == 0)
        ADVANCE(44);
      if (lookahead == '\\')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(44);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__ocaml_token4);
      if (lookahead == '*')
        ADVANCE(154);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}')
        ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__ocaml_token4);
      if (lookahead == '/')
        ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}')
        ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__ocaml_token3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__ocaml_token4);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}')
        ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__ocaml_token3);
      if (lookahead == '\'')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__ocaml_token4);
      if (lookahead == '*')
        ADVANCE(157);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n')
        ADVANCE(152);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__ocaml_token2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__ocaml_token4);
      if (lookahead == '*')
        ADVANCE(157);
      if (lookahead == '/')
        ADVANCE(158);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(154);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}')
        ADVANCE(152);
      END_STATE();
    case 159:
      if (lookahead == '"')
        ADVANCE(27);
      if (lookahead == '%')
        ADVANCE(160);
      if (lookahead == '\'')
        ADVANCE(148);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(149);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(152);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 161:
      if (lookahead == '-')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead != 0)
        ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      if (lookahead == '>')
        ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      if (lookahead == '*')
        ADVANCE(167);
      if (lookahead == '/')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '[')
        ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      if (lookahead == '-')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '[')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '[')
        ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      if (lookahead == '*')
        ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '>' ||
          lookahead == '[')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n')
        ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '>' ||
          lookahead == '[')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_ocaml_type_token1);
      if (lookahead == '*')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '>' ||
          lookahead == '[')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(167);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '>' &&
          lookahead != '[')
        ADVANCE(165);
      END_STATE();
    case 171:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(173);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 172:
      if (lookahead == '%')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(32);
      if (lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'l')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'p')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(39);
      if (lookahead == 's')
        ADVANCE(40);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(42);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 174:
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 175:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 176:
      if (lookahead == 'p')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 178:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(173);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      END_STATE();
    case 179:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(134);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 180:
      if (lookahead == '"')
        ADVANCE(27);
      if (lookahead == '%')
        ADVANCE(160);
      if (lookahead == '\'')
        ADVANCE(148);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(149);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != ']')
        ADVANCE(152);
      END_STATE();
    case 181:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(182);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      END_STATE();
    case 182:
      if (lookahead == '}')
        ADVANCE(43);
      END_STATE();
    case 183:
      if (lookahead == '%')
        ADVANCE(182);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      END_STATE();
    case 184:
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      END_STATE();
    case 185:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 186:
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      END_STATE();
    case 187:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      END_STATE();
    case 188:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 189:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 190:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 191:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(27);
      if (lookahead == '%')
        ADVANCE(147);
      if (lookahead == '\'')
        ADVANCE(148);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(149);
      if (lookahead == '[')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(152);
      END_STATE();
    case 192:
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(140);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '_')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '~')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 194:
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(172);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 195:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(144);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(141);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(135);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 196:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 197:
      if (lookahead == '%')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(34);
      if (lookahead == 'p')
        ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 132, .external_lex_state = 1},
  [2] = {.lex_state = 139, .external_lex_state = 1},
  [3] = {.lex_state = 132, .external_lex_state = 1},
  [4] = {.lex_state = 143, .external_lex_state = 1},
  [5] = {.lex_state = 139, .external_lex_state = 1},
  [6] = {.lex_state = 132, .external_lex_state = 1},
  [7] = {.lex_state = 132, .external_lex_state = 1},
  [8] = {.lex_state = 146, .external_lex_state = 1},
  [9] = {.lex_state = 139, .external_lex_state = 1},
  [10] = {.lex_state = 132, .external_lex_state = 1},
  [11] = {.lex_state = 139, .external_lex_state = 1},
  [12] = {.lex_state = 159, .external_lex_state = 1},
  [13] = {.lex_state = 132, .external_lex_state = 1},
  [14] = {.lex_state = 132, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 161, .external_lex_state = 1},
  [17] = {.lex_state = 132, .external_lex_state = 1},
  [18] = {.lex_state = 132, .external_lex_state = 1},
  [19] = {.lex_state = 132, .external_lex_state = 1},
  [20] = {.lex_state = 171, .external_lex_state = 1},
  [21] = {.lex_state = 175, .external_lex_state = 1},
  [22] = {.lex_state = 143, .external_lex_state = 1},
  [23] = {.lex_state = 146, .external_lex_state = 1},
  [24] = {.lex_state = 132, .external_lex_state = 1},
  [25] = {.lex_state = 178, .external_lex_state = 1},
  [26] = {.lex_state = 132, .external_lex_state = 1},
  [27] = {.lex_state = 143, .external_lex_state = 1},
  [28] = {.lex_state = 132, .external_lex_state = 1},
  [29] = {.lex_state = 132, .external_lex_state = 1},
  [30] = {.lex_state = 179, .external_lex_state = 1},
  [31] = {.lex_state = 180, .external_lex_state = 1},
  [32] = {.lex_state = 159, .external_lex_state = 1},
  [33] = {.lex_state = 132, .external_lex_state = 1},
  [34] = {.lex_state = 181, .external_lex_state = 1},
  [35] = {.lex_state = 183, .external_lex_state = 1},
  [36] = {.lex_state = 146, .external_lex_state = 1},
  [37] = {.lex_state = 132, .external_lex_state = 1},
  [38] = {.lex_state = 132, .external_lex_state = 1},
  [39] = {.lex_state = 132, .external_lex_state = 1},
  [40] = {.lex_state = 132, .external_lex_state = 1},
  [41] = {.lex_state = 132, .external_lex_state = 1},
  [42] = {.lex_state = 132, .external_lex_state = 1},
  [43] = {.lex_state = 184, .external_lex_state = 1},
  [44] = {.lex_state = 159, .external_lex_state = 1},
  [45] = {.lex_state = 143, .external_lex_state = 1},
  [46] = {.lex_state = 132, .external_lex_state = 1},
  [47] = {.lex_state = 132, .external_lex_state = 1},
  [48] = {.lex_state = 185, .external_lex_state = 1},
  [49] = {.lex_state = 161, .external_lex_state = 1},
  [50] = {.lex_state = 186, .external_lex_state = 1},
  [51] = {.lex_state = 132, .external_lex_state = 1},
  [52] = {.lex_state = 132, .external_lex_state = 1},
  [53] = {.lex_state = 132, .external_lex_state = 1},
  [54] = {.lex_state = 132, .external_lex_state = 1},
  [55] = {.lex_state = 132, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 146, .external_lex_state = 1},
  [59] = {.lex_state = 187, .external_lex_state = 1},
  [60] = {.lex_state = 132, .external_lex_state = 1},
  [61] = {.lex_state = 159, .external_lex_state = 1},
  [62] = {.lex_state = 139, .external_lex_state = 1},
  [63] = {.lex_state = 178, .external_lex_state = 1},
  [64] = {.lex_state = 178, .external_lex_state = 1},
  [65] = {.lex_state = 146, .external_lex_state = 1},
  [66] = {.lex_state = 143, .external_lex_state = 1},
  [67] = {.lex_state = 190, .external_lex_state = 1},
  [68] = {.lex_state = 132, .external_lex_state = 1},
  [69] = {.lex_state = 132, .external_lex_state = 1},
  [70] = {.lex_state = 179, .external_lex_state = 1},
  [71] = {.lex_state = 132, .external_lex_state = 1},
  [72] = {.lex_state = 132, .external_lex_state = 1},
  [73] = {.lex_state = 132, .external_lex_state = 1},
  [74] = {.lex_state = 191, .external_lex_state = 1},
  [75] = {.lex_state = 192, .external_lex_state = 1},
  [76] = {.lex_state = 180, .external_lex_state = 1},
  [77] = {.lex_state = 184, .external_lex_state = 1},
  [78] = {.lex_state = 132, .external_lex_state = 1},
  [79] = {.lex_state = 146, .external_lex_state = 1},
  [80] = {.lex_state = 132, .external_lex_state = 1},
  [81] = {.lex_state = 132, .external_lex_state = 1},
  [82] = {.lex_state = 132, .external_lex_state = 1},
  [83] = {.lex_state = 132, .external_lex_state = 1},
  [84] = {.lex_state = 132, .external_lex_state = 1},
  [85] = {.lex_state = 132, .external_lex_state = 1},
  [86] = {.lex_state = 132, .external_lex_state = 1},
  [87] = {.lex_state = 132, .external_lex_state = 1},
  [88] = {.lex_state = 159, .external_lex_state = 1},
  [89] = {.lex_state = 143, .external_lex_state = 1},
  [90] = {.lex_state = 132, .external_lex_state = 1},
  [91] = {.lex_state = 132, .external_lex_state = 1},
  [92] = {.lex_state = 161, .external_lex_state = 1},
  [93] = {.lex_state = 185, .external_lex_state = 1},
  [94] = {.lex_state = 132, .external_lex_state = 1},
  [95] = {.lex_state = 132, .external_lex_state = 1},
  [96] = {.lex_state = 132, .external_lex_state = 1},
  [97] = {.lex_state = 187, .external_lex_state = 1},
  [98] = {.lex_state = 146, .external_lex_state = 1},
  [99] = {.lex_state = 193, .external_lex_state = 1},
  [100] = {.lex_state = 132, .external_lex_state = 1},
  [101] = {.lex_state = 187, .external_lex_state = 1},
  [102] = {.lex_state = 193, .external_lex_state = 1},
  [103] = {.lex_state = 139, .external_lex_state = 1},
  [104] = {.lex_state = 194, .external_lex_state = 1},
  [105] = {.lex_state = 184, .external_lex_state = 1},
  [106] = {.lex_state = 180, .external_lex_state = 1},
  [107] = {.lex_state = 132, .external_lex_state = 1},
  [108] = {.lex_state = 139, .external_lex_state = 1},
  [109] = {.lex_state = 161, .external_lex_state = 1},
  [110] = {.lex_state = 139, .external_lex_state = 1},
  [111] = {.lex_state = 139, .external_lex_state = 1},
  [112] = {.lex_state = 143, .external_lex_state = 1},
  [113] = {.lex_state = 139, .external_lex_state = 1},
  [114] = {.lex_state = 139, .external_lex_state = 1},
  [115] = {.lex_state = 143, .external_lex_state = 1},
  [116] = {.lex_state = 139, .external_lex_state = 1},
  [117] = {.lex_state = 139, .external_lex_state = 1},
  [118] = {.lex_state = 139, .external_lex_state = 1},
  [119] = {.lex_state = 132, .external_lex_state = 1},
  [120] = {.lex_state = 139, .external_lex_state = 1},
  [121] = {.lex_state = 178, .external_lex_state = 1},
  [122] = {.lex_state = 178, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 132, .external_lex_state = 1},
  [125] = {.lex_state = 132, .external_lex_state = 1},
  [126] = {.lex_state = 132, .external_lex_state = 1},
  [127] = {.lex_state = 132, .external_lex_state = 1},
  [128] = {.lex_state = 139, .external_lex_state = 1},
  [129] = {.lex_state = 191, .external_lex_state = 1},
  [130] = {.lex_state = 180, .external_lex_state = 1},
  [131] = {.lex_state = 132, .external_lex_state = 1},
  [132] = {.lex_state = 132, .external_lex_state = 1},
  [133] = {.lex_state = 132, .external_lex_state = 1},
  [134] = {.lex_state = 132, .external_lex_state = 1},
  [135] = {.lex_state = 132, .external_lex_state = 1},
  [136] = {.lex_state = 132, .external_lex_state = 1},
  [137] = {.lex_state = 132, .external_lex_state = 1},
  [138] = {.lex_state = 146, .external_lex_state = 1},
  [139] = {.lex_state = 132, .external_lex_state = 1},
  [140] = {.lex_state = 132, .external_lex_state = 1},
  [141] = {.lex_state = 132, .external_lex_state = 1},
  [142] = {.lex_state = 187, .external_lex_state = 1},
  [143] = {.lex_state = 193, .external_lex_state = 1},
  [144] = {.lex_state = 139, .external_lex_state = 1},
  [145] = {.lex_state = 187, .external_lex_state = 1},
  [146] = {.lex_state = 143, .external_lex_state = 1},
  [147] = {.lex_state = 139, .external_lex_state = 1},
  [148] = {.lex_state = 193, .external_lex_state = 1},
  [149] = {.lex_state = 193, .external_lex_state = 1},
  [150] = {.lex_state = 195, .external_lex_state = 1},
  [151] = {.lex_state = 143, .external_lex_state = 1},
  [152] = {.lex_state = 143, .external_lex_state = 1},
  [153] = {.lex_state = 143, .external_lex_state = 1},
  [154] = {.lex_state = 139, .external_lex_state = 1},
  [155] = {.lex_state = 195, .external_lex_state = 1},
  [156] = {.lex_state = 143, .external_lex_state = 1},
  [157] = {.lex_state = 139, .external_lex_state = 1},
  [158] = {.lex_state = 143, .external_lex_state = 1},
  [159] = {.lex_state = 195, .external_lex_state = 1},
  [160] = {.lex_state = 178, .external_lex_state = 1},
  [161] = {.lex_state = 132, .external_lex_state = 1},
  [162] = {.lex_state = 139, .external_lex_state = 1},
  [163] = {.lex_state = 194, .external_lex_state = 1},
  [164] = {.lex_state = 195, .external_lex_state = 1},
  [165] = {.lex_state = 192, .external_lex_state = 1},
  [166] = {.lex_state = 196, .external_lex_state = 1},
  [167] = {.lex_state = 132, .external_lex_state = 1},
  [168] = {.lex_state = 143, .external_lex_state = 1},
  [169] = {.lex_state = 186, .external_lex_state = 1},
  [170] = {.lex_state = 139, .external_lex_state = 1},
  [171] = {.lex_state = 139, .external_lex_state = 1},
  [172] = {.lex_state = 143, .external_lex_state = 1},
  [173] = {.lex_state = 139, .external_lex_state = 1},
  [174] = {.lex_state = 139, .external_lex_state = 1},
  [175] = {.lex_state = 132, .external_lex_state = 1},
  [176] = {.lex_state = 195, .external_lex_state = 1},
  [177] = {.lex_state = 139, .external_lex_state = 1},
  [178] = {.lex_state = 139, .external_lex_state = 1},
  [179] = {.lex_state = 139, .external_lex_state = 1},
  [180] = {.lex_state = 139, .external_lex_state = 1},
  [181] = {.lex_state = 143, .external_lex_state = 1},
  [182] = {.lex_state = 143, .external_lex_state = 1},
  [183] = {.lex_state = 139, .external_lex_state = 1},
  [184] = {.lex_state = 139, .external_lex_state = 1},
  [185] = {.lex_state = 139, .external_lex_state = 1},
  [186] = {.lex_state = 143, .external_lex_state = 1},
  [187] = {.lex_state = 139, .external_lex_state = 1},
  [188] = {.lex_state = 139, .external_lex_state = 1},
  [189] = {.lex_state = 132, .external_lex_state = 1},
  [190] = {.lex_state = 139, .external_lex_state = 1},
  [191] = {.lex_state = 132, .external_lex_state = 1},
  [192] = {.lex_state = 179, .external_lex_state = 1},
  [193] = {.lex_state = 139, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 139, .external_lex_state = 1},
  [196] = {.lex_state = 132, .external_lex_state = 1},
  [197] = {.lex_state = 193, .external_lex_state = 1},
  [198] = {.lex_state = 143, .external_lex_state = 1},
  [199] = {.lex_state = 187, .external_lex_state = 1},
  [200] = {.lex_state = 139, .external_lex_state = 1},
  [201] = {.lex_state = 139, .external_lex_state = 1},
  [202] = {.lex_state = 139, .external_lex_state = 1},
  [203] = {.lex_state = 143, .external_lex_state = 1},
  [204] = {.lex_state = 193, .external_lex_state = 1},
  [205] = {.lex_state = 159, .external_lex_state = 1},
  [206] = {.lex_state = 143, .external_lex_state = 1},
  [207] = {.lex_state = 195, .external_lex_state = 1},
  [208] = {.lex_state = 132, .external_lex_state = 1},
  [209] = {.lex_state = 193, .external_lex_state = 1},
  [210] = {.lex_state = 143, .external_lex_state = 1},
  [211] = {.lex_state = 193, .external_lex_state = 1},
  [212] = {.lex_state = 143, .external_lex_state = 1},
  [213] = {.lex_state = 143, .external_lex_state = 1},
  [214] = {.lex_state = 139, .external_lex_state = 1},
  [215] = {.lex_state = 139, .external_lex_state = 1},
  [216] = {.lex_state = 178, .external_lex_state = 1},
  [217] = {.lex_state = 139, .external_lex_state = 1},
  [218] = {.lex_state = 195, .external_lex_state = 1},
  [219] = {.lex_state = 139, .external_lex_state = 1},
  [220] = {.lex_state = 143, .external_lex_state = 1},
  [221] = {.lex_state = 143, .external_lex_state = 1},
  [222] = {.lex_state = 195, .external_lex_state = 1},
  [223] = {.lex_state = 139, .external_lex_state = 1},
  [224] = {.lex_state = 139, .external_lex_state = 1},
  [225] = {.lex_state = 139, .external_lex_state = 1},
  [226] = {.lex_state = 139, .external_lex_state = 1},
  [227] = {.lex_state = 139, .external_lex_state = 1},
  [228] = {.lex_state = 139, .external_lex_state = 1},
  [229] = {.lex_state = 139, .external_lex_state = 1},
  [230] = {.lex_state = 139, .external_lex_state = 1},
  [231] = {.lex_state = 139, .external_lex_state = 1},
  [232] = {.lex_state = 139, .external_lex_state = 1},
  [233] = {.lex_state = 139, .external_lex_state = 1},
  [234] = {.lex_state = 139, .external_lex_state = 1},
  [235] = {.lex_state = 143, .external_lex_state = 1},
  [236] = {.lex_state = 143, .external_lex_state = 1},
  [237] = {.lex_state = 143, .external_lex_state = 1},
  [238] = {.lex_state = 195, .external_lex_state = 1},
  [239] = {.lex_state = 139, .external_lex_state = 1},
  [240] = {.lex_state = 143, .external_lex_state = 1},
  [241] = {.lex_state = 139, .external_lex_state = 1},
  [242] = {.lex_state = 143, .external_lex_state = 1},
  [243] = {.lex_state = 139, .external_lex_state = 1},
  [244] = {.lex_state = 139, .external_lex_state = 1},
  [245] = {.lex_state = 139, .external_lex_state = 1},
  [246] = {.lex_state = 179, .external_lex_state = 1},
  [247] = {.lex_state = 139, .external_lex_state = 1},
  [248] = {.lex_state = 187, .external_lex_state = 1},
  [249] = {.lex_state = 139, .external_lex_state = 1},
  [250] = {.lex_state = 139, .external_lex_state = 1},
  [251] = {.lex_state = 143, .external_lex_state = 1},
  [252] = {.lex_state = 193, .external_lex_state = 1},
  [253] = {.lex_state = 139, .external_lex_state = 1},
  [254] = {.lex_state = 193, .external_lex_state = 1},
  [255] = {.lex_state = 139, .external_lex_state = 1},
  [256] = {.lex_state = 143, .external_lex_state = 1},
  [257] = {.lex_state = 193, .external_lex_state = 1},
  [258] = {.lex_state = 139, .external_lex_state = 1},
  [259] = {.lex_state = 139, .external_lex_state = 1},
  [260] = {.lex_state = 139, .external_lex_state = 1},
  [261] = {.lex_state = 139, .external_lex_state = 1},
  [262] = {.lex_state = 139, .external_lex_state = 1},
  [263] = {.lex_state = 139, .external_lex_state = 1},
  [264] = {.lex_state = 139, .external_lex_state = 1},
  [265] = {.lex_state = 143, .external_lex_state = 1},
  [266] = {.lex_state = 184, .external_lex_state = 1},
  [267] = {.lex_state = 143, .external_lex_state = 1},
  [268] = {.lex_state = 132, .external_lex_state = 1},
  [269] = {.lex_state = 132, .external_lex_state = 1},
  [270] = {.lex_state = 195, .external_lex_state = 1},
  [271] = {.lex_state = 143, .external_lex_state = 1},
  [272] = {.lex_state = 195, .external_lex_state = 1},
  [273] = {.lex_state = 143, .external_lex_state = 1},
  [274] = {.lex_state = 143, .external_lex_state = 1},
  [275] = {.lex_state = 139, .external_lex_state = 1},
  [276] = {.lex_state = 139, .external_lex_state = 1},
  [277] = {.lex_state = 139, .external_lex_state = 1},
  [278] = {.lex_state = 139, .external_lex_state = 1},
  [279] = {.lex_state = 195, .external_lex_state = 1},
  [280] = {.lex_state = 143, .external_lex_state = 1},
  [281] = {.lex_state = 139, .external_lex_state = 1},
  [282] = {.lex_state = 139, .external_lex_state = 1},
  [283] = {.lex_state = 139, .external_lex_state = 1},
  [284] = {.lex_state = 139, .external_lex_state = 1},
  [285] = {.lex_state = 139, .external_lex_state = 1},
  [286] = {.lex_state = 139, .external_lex_state = 1},
  [287] = {.lex_state = 139, .external_lex_state = 1},
  [288] = {.lex_state = 139, .external_lex_state = 1},
  [289] = {.lex_state = 139, .external_lex_state = 1},
  [290] = {.lex_state = 139, .external_lex_state = 1},
  [291] = {.lex_state = 143, .external_lex_state = 1},
  [292] = {.lex_state = 178, .external_lex_state = 1},
  [293] = {.lex_state = 143, .external_lex_state = 1},
  [294] = {.lex_state = 139, .external_lex_state = 1},
  [295] = {.lex_state = 193, .external_lex_state = 1},
  [296] = {.lex_state = 187, .external_lex_state = 1},
  [297] = {.lex_state = 139, .external_lex_state = 1},
  [298] = {.lex_state = 143, .external_lex_state = 1},
  [299] = {.lex_state = 139, .external_lex_state = 1},
  [300] = {.lex_state = 139, .external_lex_state = 1},
  [301] = {.lex_state = 139, .external_lex_state = 1},
  [302] = {.lex_state = 139, .external_lex_state = 1},
  [303] = {.lex_state = 193, .external_lex_state = 1},
  [304] = {.lex_state = 139, .external_lex_state = 1},
  [305] = {.lex_state = 143, .external_lex_state = 1},
  [306] = {.lex_state = 193, .external_lex_state = 1},
  [307] = {.lex_state = 139, .external_lex_state = 1},
  [308] = {.lex_state = 132, .external_lex_state = 1},
  [309] = {.lex_state = 193, .external_lex_state = 1},
  [310] = {.lex_state = 139, .external_lex_state = 1},
  [311] = {.lex_state = 193, .external_lex_state = 1},
  [312] = {.lex_state = 139, .external_lex_state = 1},
  [313] = {.lex_state = 143, .external_lex_state = 1},
  [314] = {.lex_state = 193, .external_lex_state = 1},
  [315] = {.lex_state = 132, .external_lex_state = 1},
  [316] = {.lex_state = 193, .external_lex_state = 1},
  [317] = {.lex_state = 132, .external_lex_state = 1},
  [318] = {.lex_state = 143, .external_lex_state = 1},
  [319] = {.lex_state = 143, .external_lex_state = 1},
  [320] = {.lex_state = 143, .external_lex_state = 1},
  [321] = {.lex_state = 139, .external_lex_state = 1},
  [322] = {.lex_state = 139, .external_lex_state = 1},
  [323] = {.lex_state = 195, .external_lex_state = 1},
  [324] = {.lex_state = 139, .external_lex_state = 1},
  [325] = {.lex_state = 139, .external_lex_state = 1},
  [326] = {.lex_state = 139, .external_lex_state = 1},
  [327] = {.lex_state = 139, .external_lex_state = 1},
  [328] = {.lex_state = 139, .external_lex_state = 1},
  [329] = {.lex_state = 139, .external_lex_state = 1},
  [330] = {.lex_state = 139, .external_lex_state = 1},
  [331] = {.lex_state = 139, .external_lex_state = 1},
  [332] = {.lex_state = 178, .external_lex_state = 1},
  [333] = {.lex_state = 143, .external_lex_state = 1},
  [334] = {.lex_state = 193, .external_lex_state = 1},
  [335] = {.lex_state = 187, .external_lex_state = 1},
  [336] = {.lex_state = 139, .external_lex_state = 1},
  [337] = {.lex_state = 139, .external_lex_state = 1},
  [338] = {.lex_state = 139, .external_lex_state = 1},
  [339] = {.lex_state = 143, .external_lex_state = 1},
  [340] = {.lex_state = 139, .external_lex_state = 1},
  [341] = {.lex_state = 143, .external_lex_state = 1},
  [342] = {.lex_state = 139, .external_lex_state = 1},
  [343] = {.lex_state = 132, .external_lex_state = 1},
  [344] = {.lex_state = 139, .external_lex_state = 1},
  [345] = {.lex_state = 139, .external_lex_state = 1},
  [346] = {.lex_state = 139, .external_lex_state = 1},
  [347] = {.lex_state = 132, .external_lex_state = 1},
  [348] = {.lex_state = 195, .external_lex_state = 1},
  [349] = {.lex_state = 132, .external_lex_state = 1},
  [350] = {.lex_state = 143, .external_lex_state = 1},
  [351] = {.lex_state = 143, .external_lex_state = 1},
  [352] = {.lex_state = 143, .external_lex_state = 1},
  [353] = {.lex_state = 139, .external_lex_state = 1},
  [354] = {.lex_state = 139, .external_lex_state = 1},
  [355] = {.lex_state = 139, .external_lex_state = 1},
  [356] = {.lex_state = 139, .external_lex_state = 1},
  [357] = {.lex_state = 139, .external_lex_state = 1},
  [358] = {.lex_state = 143, .external_lex_state = 1},
  [359] = {.lex_state = 193, .external_lex_state = 1},
  [360] = {.lex_state = 139, .external_lex_state = 1},
  [361] = {.lex_state = 139, .external_lex_state = 1},
  [362] = {.lex_state = 143, .external_lex_state = 1},
  [363] = {.lex_state = 193, .external_lex_state = 1},
  [364] = {.lex_state = 132, .external_lex_state = 1},
  [365] = {.lex_state = 139, .external_lex_state = 1},
  [366] = {.lex_state = 143, .external_lex_state = 1},
  [367] = {.lex_state = 143, .external_lex_state = 1},
  [368] = {.lex_state = 139, .external_lex_state = 1},
  [369] = {.lex_state = 143, .external_lex_state = 1},
  [370] = {.lex_state = 139, .external_lex_state = 1},
  [371] = {.lex_state = 143, .external_lex_state = 1},
  [372] = {.lex_state = 139, .external_lex_state = 1},
  [373] = {.lex_state = 139, .external_lex_state = 1},
  [374] = {.lex_state = 132, .external_lex_state = 1},
  [375] = {.lex_state = 132, .external_lex_state = 1},
  [376] = {.lex_state = 143, .external_lex_state = 1},
  [377] = {.lex_state = 143, .external_lex_state = 1},
  [378] = {.lex_state = 143, .external_lex_state = 1},
  [379] = {.lex_state = 139, .external_lex_state = 1},
  [380] = {.lex_state = 132, .external_lex_state = 1},
  [381] = {.lex_state = 143, .external_lex_state = 1},
  [382] = {.lex_state = 143, .external_lex_state = 1},
  [383] = {.lex_state = 143, .external_lex_state = 1},
};

enum {
  ts_external_token_ocaml_comment = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_ocaml_comment] = sym_ocaml_comment,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_ocaml_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(3),
    [anon_sym_PERCENTtype] = ACTIONS(3),
    [anon_sym_PERCENTleft] = ACTIONS(3),
    [sym_lid] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [sym_qid] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_PERCENTpublic] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_PERCENTprec] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [aux_sym__ocaml_token2] = ACTIONS(3),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(3),
    [anon_sym_PERCENTright] = ACTIONS(3),
    [sym_uid] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(3),
    [anon_sym_PERCENTparameter] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [aux_sym__ocaml_token1] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(3),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PERCENTattribute] = ACTIONS(3),
    [anon_sym_PERCENTnonassoc] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_PERCENTtoken] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar_attribute] = STATE(7),
    [sym_header] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_priority_keyword] = STATE(14),
    [sym_declaration] = STATE(13),
    [sym_source_file] = STATE(15),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(13),
    [anon_sym_PERCENTtype] = ACTIONS(15),
    [anon_sym_PERCENTleft] = ACTIONS(7),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(17),
    [anon_sym_PERCENTattribute] = ACTIONS(19),
    [anon_sym_PERCENTnonassoc] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(23),
    [anon_sym_PERCENTtoken] = ACTIONS(25),
  },
  [2] = {
    [sym_non_terminal] = STATE(18),
    [sym_type] = STATE(19),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(1),
  },
  [3] = {
    [sym_qid] = ACTIONS(31),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(31),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(1),
  },
  [4] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(27),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(27),
    [aux_sym_source_file_repeat2] = STATE(27),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [5] = {
    [sym_type] = STATE(28),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [6] = {
    [sym_strict_actual] = STATE(29),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [7] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(47),
    [anon_sym_PERCENTright] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(47),
    [anon_sym_PERCENTparameter] = ACTIONS(47),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(47),
    [anon_sym_PERCENTtype] = ACTIONS(47),
    [anon_sym_PERCENTleft] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(47),
    [anon_sym_PERCENTattribute] = ACTIONS(47),
    [anon_sym_PERCENTnonassoc] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(47),
    [anon_sym_PERCENTtoken] = ACTIONS(47),
  },
  [8] = {
    [sym__ocaml] = STATE(34),
    [aux_sym__ocaml_repeat1] = STATE(36),
    [sym_ocaml] = STATE(35),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(49),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(57),
  },
  [9] = {
    [sym_type] = STATE(38),
    [sym_terminal_alias_attrs] = STATE(39),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [10] = {
    [sym_strict_actual] = STATE(40),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [11] = {
    [sym_type] = STATE(41),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [12] = {
    [sym__ocaml] = STATE(34),
    [aux_sym__ocaml_repeat1] = STATE(44),
    [sym_ocaml] = STATE(43),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(61),
    [aux_sym__ocaml_token2] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(63),
    [aux_sym__ocaml_token1] = ACTIONS(61),
    [aux_sym__ocaml_token3] = ACTIONS(61),
  },
  [13] = {
    [sym_grammar_attribute] = STATE(7),
    [sym_header] = STATE(7),
    [sym_priority_keyword] = STATE(14),
    [sym_declaration] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(65),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(13),
    [anon_sym_PERCENTtype] = ACTIONS(15),
    [anon_sym_PERCENTleft] = ACTIONS(7),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(17),
    [anon_sym_PERCENTattribute] = ACTIONS(19),
    [anon_sym_PERCENTnonassoc] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(23),
    [anon_sym_PERCENTtoken] = ACTIONS(25),
  },
  [14] = {
    [sym_symbol] = STATE(47),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [15] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [16] = {
    [aux_sym_ocaml_type_repeat1] = STATE(49),
    [sym_ocaml_type] = STATE(50),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(69),
    [aux_sym_ocaml_type_token1] = ACTIONS(71),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [17] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(73),
    [anon_sym_PERCENTright] = ACTIONS(73),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(73),
    [anon_sym_PERCENTparameter] = ACTIONS(73),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(73),
    [anon_sym_PERCENTtype] = ACTIONS(73),
    [anon_sym_PERCENTleft] = ACTIONS(73),
    [sym_lid] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(73),
    [anon_sym_PERCENTattribute] = ACTIONS(73),
    [anon_sym_PERCENTnonassoc] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_PERCENTtoken] = ACTIONS(73),
  },
  [18] = {
    [sym_non_terminal] = STATE(52),
    [aux_sym_declaration_repeat4] = STATE(52),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(75),
    [anon_sym_PERCENTright] = ACTIONS(75),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENTparameter] = ACTIONS(75),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(75),
    [anon_sym_PERCENTtype] = ACTIONS(75),
    [anon_sym_PERCENTleft] = ACTIONS(75),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_PERCENTattribute] = ACTIONS(75),
    [anon_sym_PERCENTnonassoc] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(75),
    [anon_sym_PERCENTtoken] = ACTIONS(75),
  },
  [19] = {
    [sym_non_terminal] = STATE(53),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(1),
  },
  [20] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(79),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(79),
    [anon_sym_PERCENTtype] = ACTIONS(79),
    [anon_sym_PERCENTleft] = ACTIONS(79),
    [sym_lid] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym_qid] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PERCENTprec] = ACTIONS(79),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(79),
    [anon_sym_PERCENTstart] = ACTIONS(79),
    [anon_sym_PERCENTright] = ACTIONS(79),
    [sym_uid] = ACTIONS(79),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(79),
    [anon_sym_PERCENTparameter] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(79),
    [anon_sym_PERCENTattribute] = ACTIONS(79),
    [anon_sym_PERCENTnonassoc] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PERCENTtoken] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
  },
  [21] = {
    [sym_qid] = ACTIONS(81),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(81),
    [anon_sym_PERCENTpublic] = ACTIONS(83),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(81),
    [sym_line_comment] = ACTIONS(1),
  },
  [22] = {
    [sym_qid] = ACTIONS(81),
    [anon_sym_PERCENTinline] = ACTIONS(83),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(81),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(85),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(87),
  },
  [23] = {
    [sym_ocaml] = STATE(56),
    [sym__ocaml] = STATE(34),
    [sym_postlude] = STATE(57),
    [aux_sym__ocaml_repeat1] = STATE(58),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(91),
    [aux_sym__ocaml_token2] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(91),
    [aux_sym__ocaml_token3] = ACTIONS(91),
  },
  [24] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
  },
  [25] = {
    [aux_sym_declaration_repeat5] = STATE(63),
    [sym_attribute] = STATE(63),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(1),
  },
  [26] = {
    [sym_symbol] = STATE(64),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [27] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(66),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(66),
    [aux_sym_source_file_repeat2] = STATE(66),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(101),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [28] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(75),
    [anon_sym_PERCENTright] = ACTIONS(75),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENTparameter] = ACTIONS(75),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(75),
    [anon_sym_PERCENTtype] = ACTIONS(75),
    [anon_sym_PERCENTleft] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(75),
    [anon_sym_PERCENTattribute] = ACTIONS(75),
    [anon_sym_PERCENTnonassoc] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(75),
    [anon_sym_PERCENTtoken] = ACTIONS(75),
  },
  [29] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [sym_modifier] = STATE(70),
    [aux_sym_declaration_repeat5] = STATE(71),
    [aux_sym_declaration_repeat3] = STATE(72),
    [sym_attribute] = STATE(71),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_lid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(105),
  },
  [30] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(107),
    [anon_sym_PERCENTright] = ACTIONS(107),
    [sym_uid] = ACTIONS(107),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(107),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(107),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(107),
    [anon_sym_PERCENTtype] = ACTIONS(107),
    [anon_sym_PERCENTleft] = ACTIONS(107),
    [sym_lid] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [sym_qid] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_PERCENTattribute] = ACTIONS(107),
    [anon_sym_PERCENTnonassoc] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(107),
    [anon_sym_PERCENTtoken] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
  },
  [31] = {
    [sym__ocaml] = STATE(75),
    [aux_sym__ocaml_repeat1] = STATE(76),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(113),
    [aux_sym__ocaml_token2] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(113),
    [aux_sym__ocaml_token3] = ACTIONS(113),
  },
  [32] = {
    [sym__ocaml] = STATE(77),
    [aux_sym__ocaml_repeat1] = STATE(44),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(61),
    [aux_sym__ocaml_token2] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(111),
    [aux_sym__ocaml_token1] = ACTIONS(61),
    [aux_sym__ocaml_token3] = ACTIONS(61),
  },
  [33] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(115),
    [anon_sym_PERCENTright] = ACTIONS(115),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(115),
    [anon_sym_PERCENTparameter] = ACTIONS(115),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(115),
    [anon_sym_PERCENTtype] = ACTIONS(115),
    [anon_sym_PERCENTleft] = ACTIONS(115),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(115),
    [anon_sym_PERCENTattribute] = ACTIONS(115),
    [anon_sym_PERCENTnonassoc] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(115),
    [anon_sym_PERCENTtoken] = ACTIONS(115),
  },
  [34] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(117),
    [sym_line_comment] = ACTIONS(1),
  },
  [35] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(119),
    [sym_line_comment] = ACTIONS(1),
  },
  [36] = {
    [aux_sym__ocaml_repeat1] = STATE(79),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(121),
    [aux_sym__ocaml_token2] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(121),
    [aux_sym__ocaml_token3] = ACTIONS(121),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(123),
  },
  [37] = {
    [aux_sym_declaration_repeat5] = STATE(81),
    [sym_attribute] = STATE(81),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(125),
    [anon_sym_PERCENTright] = ACTIONS(125),
    [sym_uid] = ACTIONS(125),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(125),
    [anon_sym_PERCENTparameter] = ACTIONS(125),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(125),
    [anon_sym_PERCENTtype] = ACTIONS(125),
    [anon_sym_PERCENTleft] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(125),
    [sym_qid] = ACTIONS(127),
    [anon_sym_PERCENTattribute] = ACTIONS(125),
    [anon_sym_PERCENTnonassoc] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(125),
    [anon_sym_PERCENTtoken] = ACTIONS(125),
  },
  [38] = {
    [sym_terminal_alias_attrs] = STATE(82),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(59),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [39] = {
    [aux_sym_declaration_repeat1] = STATE(84),
    [sym_terminal_alias_attrs] = STATE(84),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(75),
    [anon_sym_PERCENTright] = ACTIONS(75),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENTparameter] = ACTIONS(75),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(75),
    [anon_sym_PERCENTtype] = ACTIONS(75),
    [anon_sym_PERCENTleft] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(75),
    [anon_sym_PERCENTattribute] = ACTIONS(75),
    [anon_sym_PERCENTnonassoc] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(75),
    [anon_sym_PERCENTtoken] = ACTIONS(75),
  },
  [40] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [sym_modifier] = STATE(70),
    [aux_sym_declaration_repeat3] = STATE(85),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(75),
    [anon_sym_PERCENTright] = ACTIONS(75),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENTparameter] = ACTIONS(75),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(75),
    [anon_sym_PERCENTtype] = ACTIONS(75),
    [anon_sym_PERCENTleft] = ACTIONS(75),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(75),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_PERCENTattribute] = ACTIONS(75),
    [anon_sym_PERCENTnonassoc] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(75),
    [anon_sym_PERCENTtoken] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [41] = {
    [sym_strict_actual] = STATE(86),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [42] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(131),
    [anon_sym_PERCENTright] = ACTIONS(131),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(131),
    [anon_sym_PERCENTparameter] = ACTIONS(131),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(131),
    [anon_sym_PERCENTtype] = ACTIONS(131),
    [anon_sym_PERCENTleft] = ACTIONS(131),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(131),
    [anon_sym_PERCENTattribute] = ACTIONS(131),
    [anon_sym_PERCENTnonassoc] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(131),
    [anon_sym_PERCENTtoken] = ACTIONS(131),
  },
  [43] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [44] = {
    [aux_sym__ocaml_repeat1] = STATE(88),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(135),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(135),
    [aux_sym__ocaml_token2] = ACTIONS(135),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(123),
    [aux_sym__ocaml_token1] = ACTIONS(135),
    [aux_sym__ocaml_token3] = ACTIONS(135),
  },
  [45] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(89),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(89),
    [aux_sym_source_file_repeat2] = STATE(89),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(101),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [46] = {
    [sym_grammar_attribute] = STATE(7),
    [sym_header] = STATE(7),
    [sym_priority_keyword] = STATE(14),
    [sym_declaration] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(137),
    [anon_sym_PERCENTright] = ACTIONS(140),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(143),
    [anon_sym_PERCENTparameter] = ACTIONS(145),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTtype] = ACTIONS(151),
    [anon_sym_PERCENTleft] = ACTIONS(140),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(154),
    [anon_sym_PERCENTattribute] = ACTIONS(157),
    [anon_sym_PERCENTnonassoc] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(163),
    [anon_sym_PERCENTtoken] = ACTIONS(166),
  },
  [47] = {
    [sym_symbol] = STATE(91),
    [aux_sym_declaration_repeat2] = STATE(91),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(75),
    [anon_sym_PERCENTright] = ACTIONS(75),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(75),
    [anon_sym_PERCENTparameter] = ACTIONS(75),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(75),
    [anon_sym_PERCENTtype] = ACTIONS(75),
    [anon_sym_PERCENTleft] = ACTIONS(75),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(75),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_PERCENTattribute] = ACTIONS(75),
    [anon_sym_PERCENTnonassoc] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(75),
    [anon_sym_PERCENTtoken] = ACTIONS(75),
  },
  [48] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(171),
    [anon_sym_PERCENTright] = ACTIONS(171),
    [sym_uid] = ACTIONS(171),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(171),
    [anon_sym_PERCENTparameter] = ACTIONS(171),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(171),
    [anon_sym_PERCENTtype] = ACTIONS(171),
    [anon_sym_PERCENTleft] = ACTIONS(171),
    [sym_lid] = ACTIONS(171),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(171),
    [sym_qid] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_PERCENTprec] = ACTIONS(171),
    [anon_sym_PERCENTattribute] = ACTIONS(171),
    [anon_sym_PERCENTnonassoc] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(171),
    [anon_sym_PERCENTtoken] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
  },
  [49] = {
    [aux_sym_ocaml_type_repeat1] = STATE(92),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(173),
    [aux_sym_ocaml_type_token1] = ACTIONS(175),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [50] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(177),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [51] = {
    [sym_non_terminal] = STATE(94),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(1),
  },
  [52] = {
    [sym_non_terminal] = STATE(95),
    [aux_sym_declaration_repeat4] = STATE(95),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [53] = {
    [sym_non_terminal] = STATE(96),
    [aux_sym_declaration_repeat4] = STATE(96),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [54] = {
    [sym_qid] = ACTIONS(181),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(181),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(1),
  },
  [55] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(183),
    [sym_line_comment] = ACTIONS(1),
  },
  [56] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [57] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [58] = {
    [aux_sym__ocaml_repeat1] = STATE(98),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(191),
    [aux_sym__ocaml_token2] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(191),
    [aux_sym__ocaml_token3] = ACTIONS(191),
  },
  [59] = {
    [aux_sym_declaration_repeat5] = STATE(101),
    [sym_equality_symbol] = STATE(102),
    [sym_attribute] = STATE(101),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [60] = {
    [sym_symbol] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [61] = {
    [sym__ocaml] = STATE(34),
    [aux_sym__ocaml_repeat1] = STATE(44),
    [sym_ocaml] = STATE(105),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(61),
    [aux_sym__ocaml_token2] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(197),
    [aux_sym__ocaml_token1] = ACTIONS(61),
    [aux_sym__ocaml_token3] = ACTIONS(61),
  },
  [62] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(115),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(118),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [63] = {
    [aux_sym_declaration_repeat5] = STATE(121),
    [sym_attribute] = STATE(121),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(211),
    [sym_line_comment] = ACTIONS(1),
  },
  [64] = {
    [aux_sym_declaration_repeat5] = STATE(122),
    [sym_attribute] = STATE(122),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(211),
    [sym_line_comment] = ACTIONS(1),
  },
  [65] = {
    [sym_ocaml] = STATE(56),
    [sym__ocaml] = STATE(34),
    [sym_postlude] = STATE(123),
    [aux_sym__ocaml_repeat1] = STATE(58),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(91),
    [aux_sym__ocaml_token2] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(91),
    [aux_sym__ocaml_token3] = ACTIONS(91),
  },
  [66] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(66),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(66),
    [aux_sym_source_file_repeat2] = STATE(66),
    [sym_qid] = ACTIONS(213),
    [anon_sym_PERCENTinline] = ACTIONS(216),
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_uid] = ACTIONS(213),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(219),
    [anon_sym_PERCENTpublic] = ACTIONS(221),
    [anon_sym_let] = ACTIONS(224),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(227),
  },
  [67] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(230),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(230),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(230),
    [anon_sym_PERCENTtype] = ACTIONS(230),
    [anon_sym_PERCENTleft] = ACTIONS(230),
    [sym_lid] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_qid] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_PERCENTprec] = ACTIONS(230),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(230),
    [anon_sym_PERCENTstart] = ACTIONS(230),
    [anon_sym_PERCENTright] = ACTIONS(230),
    [sym_uid] = ACTIONS(230),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(230),
    [anon_sym_PERCENTparameter] = ACTIONS(230),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(230),
    [anon_sym_PERCENTattribute] = ACTIONS(230),
    [anon_sym_PERCENTnonassoc] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_PERCENTtoken] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(230),
    [anon_sym_QMARK] = ACTIONS(230),
  },
  [68] = {
    [sym_strict_actual] = STATE(124),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [69] = {
    [sym_modifier] = STATE(70),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(232),
    [anon_sym_PERCENTright] = ACTIONS(232),
    [sym_uid] = ACTIONS(232),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(232),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(232),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(232),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(232),
    [anon_sym_PERCENTtype] = ACTIONS(232),
    [anon_sym_PERCENTleft] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [sym_qid] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(232),
    [anon_sym_PERCENTattribute] = ACTIONS(232),
    [anon_sym_PERCENTnonassoc] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(232),
    [anon_sym_PERCENTtoken] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [70] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(234),
    [anon_sym_PERCENTright] = ACTIONS(234),
    [sym_uid] = ACTIONS(234),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(234),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(234),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(234),
    [anon_sym_PERCENTtype] = ACTIONS(234),
    [anon_sym_PERCENTleft] = ACTIONS(234),
    [sym_lid] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [sym_qid] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(234),
    [anon_sym_PERCENTattribute] = ACTIONS(234),
    [anon_sym_PERCENTnonassoc] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(234),
    [anon_sym_PERCENTtoken] = ACTIONS(234),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_QMARK] = ACTIONS(234),
  },
  [71] = {
    [aux_sym_declaration_repeat5] = STATE(125),
    [sym_attribute] = STATE(125),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [72] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat5] = STATE(126),
    [aux_sym_declaration_repeat3] = STATE(127),
    [sym_attribute] = STATE(126),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(105),
  },
  [73] = {
    [sym_strict_actual] = STATE(128),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [74] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(236),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(236),
    [aux_sym__ocaml_token3] = ACTIONS(236),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym__ocaml_token2] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
  },
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [76] = {
    [aux_sym__ocaml_repeat1] = STATE(130),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(242),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(242),
    [aux_sym__ocaml_token2] = ACTIONS(242),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(242),
    [aux_sym__ocaml_token3] = ACTIONS(242),
  },
  [77] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [78] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(244),
    [anon_sym_PERCENTright] = ACTIONS(244),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(244),
    [anon_sym_PERCENTparameter] = ACTIONS(244),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(244),
    [anon_sym_PERCENTtype] = ACTIONS(244),
    [anon_sym_PERCENTleft] = ACTIONS(244),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(244),
    [anon_sym_PERCENTattribute] = ACTIONS(244),
    [anon_sym_PERCENTnonassoc] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(244),
    [anon_sym_PERCENTtoken] = ACTIONS(244),
  },
  [79] = {
    [aux_sym__ocaml_repeat1] = STATE(79),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(246),
    [aux_sym__ocaml_token2] = ACTIONS(246),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(246),
    [aux_sym__ocaml_token3] = ACTIONS(246),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(236),
  },
  [80] = {
    [aux_sym_declaration_repeat5] = STATE(131),
    [sym_attribute] = STATE(131),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(255),
    [anon_sym_PERCENTright] = ACTIONS(255),
    [sym_uid] = ACTIONS(255),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(255),
    [anon_sym_PERCENTparameter] = ACTIONS(255),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(255),
    [anon_sym_PERCENTtype] = ACTIONS(255),
    [anon_sym_PERCENTleft] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(255),
    [anon_sym_PERCENTattribute] = ACTIONS(255),
    [anon_sym_PERCENTnonassoc] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(255),
    [anon_sym_PERCENTtoken] = ACTIONS(255),
  },
  [81] = {
    [aux_sym_declaration_repeat5] = STATE(132),
    [sym_attribute] = STATE(132),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(255),
    [anon_sym_PERCENTright] = ACTIONS(255),
    [sym_uid] = ACTIONS(255),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(255),
    [anon_sym_PERCENTparameter] = ACTIONS(255),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(255),
    [anon_sym_PERCENTtype] = ACTIONS(255),
    [anon_sym_PERCENTleft] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(255),
    [anon_sym_PERCENTattribute] = ACTIONS(255),
    [anon_sym_PERCENTnonassoc] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(255),
    [anon_sym_PERCENTtoken] = ACTIONS(255),
  },
  [82] = {
    [aux_sym_declaration_repeat1] = STATE(133),
    [sym_terminal_alias_attrs] = STATE(133),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [83] = {
    [sym_terminal_alias_attrs] = STATE(134),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(59),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [84] = {
    [aux_sym_declaration_repeat1] = STATE(135),
    [sym_terminal_alias_attrs] = STATE(135),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [85] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(136),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [86] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [sym_modifier] = STATE(70),
    [aux_sym_declaration_repeat3] = STATE(137),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [87] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(257),
    [anon_sym_PERCENTright] = ACTIONS(257),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(257),
    [anon_sym_PERCENTparameter] = ACTIONS(257),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(257),
    [anon_sym_PERCENTtype] = ACTIONS(257),
    [anon_sym_PERCENTleft] = ACTIONS(257),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(257),
    [anon_sym_PERCENTattribute] = ACTIONS(257),
    [anon_sym_PERCENTnonassoc] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(257),
    [anon_sym_PERCENTtoken] = ACTIONS(257),
  },
  [88] = {
    [aux_sym__ocaml_repeat1] = STATE(88),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(259),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(259),
    [aux_sym__ocaml_token2] = ACTIONS(259),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(236),
    [aux_sym__ocaml_token1] = ACTIONS(259),
    [aux_sym__ocaml_token3] = ACTIONS(259),
  },
  [89] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(66),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(66),
    [aux_sym_source_file_repeat2] = STATE(66),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(262),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [90] = {
    [sym_symbol] = STATE(139),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [91] = {
    [sym_symbol] = STATE(140),
    [aux_sym_declaration_repeat2] = STATE(140),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(179),
    [anon_sym_PERCENTright] = ACTIONS(179),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(179),
    [anon_sym_PERCENTparameter] = ACTIONS(179),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(179),
    [anon_sym_PERCENTtype] = ACTIONS(179),
    [anon_sym_PERCENTleft] = ACTIONS(179),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(179),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_PERCENTattribute] = ACTIONS(179),
    [anon_sym_PERCENTnonassoc] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(179),
    [anon_sym_PERCENTtoken] = ACTIONS(179),
  },
  [92] = {
    [aux_sym_ocaml_type_repeat1] = STATE(92),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(264),
    [aux_sym_ocaml_type_token1] = ACTIONS(266),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [93] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(269),
    [anon_sym_PERCENTright] = ACTIONS(269),
    [sym_uid] = ACTIONS(269),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(269),
    [anon_sym_PERCENTparameter] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(269),
    [anon_sym_PERCENTtype] = ACTIONS(269),
    [anon_sym_PERCENTleft] = ACTIONS(269),
    [sym_lid] = ACTIONS(269),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(269),
    [sym_qid] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_PERCENTprec] = ACTIONS(269),
    [anon_sym_PERCENTattribute] = ACTIONS(269),
    [anon_sym_PERCENTnonassoc] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(269),
    [anon_sym_PERCENTtoken] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
  },
  [94] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(271),
    [anon_sym_PERCENTright] = ACTIONS(271),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(271),
    [anon_sym_PERCENTparameter] = ACTIONS(271),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(271),
    [anon_sym_PERCENTtype] = ACTIONS(271),
    [anon_sym_PERCENTleft] = ACTIONS(271),
    [sym_lid] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(271),
    [anon_sym_PERCENTattribute] = ACTIONS(271),
    [anon_sym_PERCENTnonassoc] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(271),
    [anon_sym_PERCENTtoken] = ACTIONS(271),
  },
  [95] = {
    [sym_non_terminal] = STATE(95),
    [aux_sym_declaration_repeat4] = STATE(95),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(271),
    [anon_sym_PERCENTright] = ACTIONS(271),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(271),
    [anon_sym_PERCENTparameter] = ACTIONS(271),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(271),
    [anon_sym_PERCENTtype] = ACTIONS(271),
    [anon_sym_PERCENTleft] = ACTIONS(271),
    [sym_lid] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(271),
    [anon_sym_PERCENTattribute] = ACTIONS(271),
    [anon_sym_PERCENTnonassoc] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(271),
    [anon_sym_PERCENTtoken] = ACTIONS(271),
  },
  [96] = {
    [sym_non_terminal] = STATE(95),
    [aux_sym_declaration_repeat4] = STATE(95),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(279),
    [anon_sym_PERCENTright] = ACTIONS(279),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [anon_sym_PERCENTparameter] = ACTIONS(279),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(279),
    [anon_sym_PERCENTleft] = ACTIONS(279),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_PERCENTattribute] = ACTIONS(279),
    [anon_sym_PERCENTnonassoc] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(279),
    [anon_sym_PERCENTtoken] = ACTIONS(279),
  },
  [97] = {
    [aux_sym_declaration_repeat5] = STATE(142),
    [sym_equality_symbol] = STATE(143),
    [sym_attribute] = STATE(142),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [98] = {
    [aux_sym__ocaml_repeat1] = STATE(98),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(283),
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(283),
    [aux_sym__ocaml_token2] = ACTIONS(283),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(283),
    [aux_sym__ocaml_token3] = ACTIONS(283),
  },
  [99] = {
    [sym_qid] = ACTIONS(286),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(286),
    [sym_uid] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_PERCENTprec] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym__] = ACTIONS(288),
    [sym_lid] = ACTIONS(288),
  },
  [100] = {
    [sym_symbol] = STATE(144),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [101] = {
    [aux_sym_declaration_repeat5] = STATE(145),
    [sym_equality_symbol] = STATE(143),
    [sym_attribute] = STATE(145),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [102] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(152),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [103] = {
    [aux_sym_old_rule_repeat1] = STATE(162),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(304),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [104] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(306),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(306),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(306),
    [anon_sym_PERCENTtype] = ACTIONS(306),
    [anon_sym_PERCENTleft] = ACTIONS(306),
    [sym_lid] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_qid] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_PERCENTprec] = ACTIONS(306),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(306),
    [anon_sym_PERCENTstart] = ACTIONS(306),
    [anon_sym_PERCENTright] = ACTIONS(306),
    [sym_uid] = ACTIONS(306),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(306),
    [anon_sym_PERCENTparameter] = ACTIONS(306),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(306),
    [anon_sym_PERCENTattribute] = ACTIONS(306),
    [anon_sym_PERCENTnonassoc] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_PERCENTtoken] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(306),
  },
  [105] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [106] = {
    [sym__ocaml] = STATE(34),
    [aux_sym__ocaml_repeat1] = STATE(76),
    [sym_ocaml] = STATE(165),
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(113),
    [aux_sym__ocaml_token2] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(113),
    [aux_sym__ocaml_token3] = ACTIONS(113),
  },
  [107] = {
    [sym_symbol] = STATE(166),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [108] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK_AT] = ACTIONS(79),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(79),
    [sym_lid] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym_qid] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PERCENTprec] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
  },
  [109] = {
    [aux_sym_ocaml_type_repeat1] = STATE(49),
    [sym_ocaml_type] = STATE(169),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(316),
    [aux_sym_ocaml_type_token1] = ACTIONS(71),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [110] = {
    [aux_sym_production_group_repeat1] = STATE(170),
    [sym_symbol] = STATE(111),
    [sym_actual] = STATE(114),
    [aux_sym_production_group_repeat2] = STATE(171),
    [sym_type] = STATE(172),
    [sym_action] = STATE(172),
    [sym__high_prec_bar] = STATE(117),
    [sym_precedence] = STATE(173),
    [sym_producer] = STATE(170),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [111] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_LBRACK_AT] = ACTIONS(318),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(318),
    [sym_lid] = ACTIONS(318),
    [sym_qid] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_PERCENTprec] = ACTIONS(318),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_QMARK] = ACTIONS(318),
  },
  [112] = {
    [sym_precedence] = STATE(176),
    [sym_qid] = ACTIONS(322),
    [anon_sym_PERCENTinline] = ACTIONS(322),
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_uid] = ACTIONS(322),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(322),
    [anon_sym_PERCENTpublic] = ACTIONS(322),
    [anon_sym_let] = ACTIONS(324),
    [anon_sym_PERCENTprec] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(324),
  },
  [113] = {
    [sym_action] = STATE(172),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym_type] = STATE(172),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [114] = {
    [aux_sym_old_rule_repeat3] = STATE(180),
    [sym_modifier] = STATE(178),
    [aux_sym_declaration_repeat5] = STATE(179),
    [sym_attribute] = STATE(179),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(328),
    [sym_lid] = ACTIONS(328),
    [sym_qid] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_PERCENTprec] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [115] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(182),
    [aux_sym_old_rule_repeat3] = STATE(181),
    [sym_qid] = ACTIONS(332),
    [anon_sym_PERCENTinline] = ACTIONS(332),
    [ts_builtin_sym_end] = ACTIONS(332),
    [sym_uid] = ACTIONS(332),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(332),
    [anon_sym_PERCENTpublic] = ACTIONS(332),
    [anon_sym_let] = ACTIONS(334),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(334),
  },
  [116] = {
    [sym_action] = STATE(172),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(171),
    [sym_type] = STATE(172),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [117] = {
    [aux_sym_production_group_repeat1] = STATE(184),
    [sym_symbol] = STATE(111),
    [sym_precedence] = STATE(185),
    [sym_actual] = STATE(114),
    [sym_producer] = STATE(184),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(340),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [sym_lid] = ACTIONS(207),
  },
  [118] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(186),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [119] = {
    [sym_symbol] = STATE(187),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [120] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(186),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(188),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [121] = {
    [aux_sym_declaration_repeat5] = STATE(121),
    [sym_attribute] = STATE(121),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [anon_sym_COLON] = ACTIONS(342),
    [sym_line_comment] = ACTIONS(1),
  },
  [122] = {
    [aux_sym_declaration_repeat5] = STATE(121),
    [sym_attribute] = STATE(121),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(1),
  },
  [123] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(351),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [124] = {
    [sym_modifier] = STATE(70),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(353),
    [anon_sym_PERCENTright] = ACTIONS(353),
    [sym_uid] = ACTIONS(353),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(353),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(353),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(353),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(353),
    [anon_sym_PERCENTtype] = ACTIONS(353),
    [anon_sym_PERCENTleft] = ACTIONS(353),
    [sym_lid] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [sym_qid] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(353),
    [anon_sym_PERCENTattribute] = ACTIONS(353),
    [anon_sym_PERCENTnonassoc] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(353),
    [anon_sym_PERCENTtoken] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [125] = {
    [aux_sym_declaration_repeat5] = STATE(125),
    [sym_attribute] = STATE(125),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(342),
    [anon_sym_PERCENTright] = ACTIONS(342),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(342),
    [anon_sym_PERCENTparameter] = ACTIONS(342),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(342),
    [anon_sym_PERCENTtype] = ACTIONS(342),
    [anon_sym_PERCENTleft] = ACTIONS(342),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(342),
    [anon_sym_PERCENTattribute] = ACTIONS(342),
    [anon_sym_PERCENTnonassoc] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(342),
    [anon_sym_PERCENTtoken] = ACTIONS(342),
  },
  [126] = {
    [aux_sym_declaration_repeat5] = STATE(125),
    [sym_attribute] = STATE(125),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(279),
    [anon_sym_PERCENTright] = ACTIONS(279),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [anon_sym_PERCENTparameter] = ACTIONS(279),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(279),
    [anon_sym_PERCENTleft] = ACTIONS(279),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(279),
    [anon_sym_PERCENTattribute] = ACTIONS(279),
    [anon_sym_PERCENTnonassoc] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(279),
    [anon_sym_PERCENTtoken] = ACTIONS(279),
  },
  [127] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(127),
    [sym_qid] = ACTIONS(355),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(355),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(353),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(358),
  },
  [128] = {
    [aux_sym_strict_actual_repeat1] = STATE(193),
    [sym_modifier] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [129] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(365),
    [aux_sym__ocaml_token3] = ACTIONS(365),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [aux_sym__ocaml_token2] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
  },
  [130] = {
    [aux_sym__ocaml_repeat1] = STATE(130),
    [anon_sym_RBRACE] = ACTIONS(236),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(369),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(369),
    [aux_sym__ocaml_token2] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(369),
    [aux_sym__ocaml_token3] = ACTIONS(369),
  },
  [131] = {
    [aux_sym_declaration_repeat5] = STATE(132),
    [sym_attribute] = STATE(132),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(372),
    [anon_sym_PERCENTright] = ACTIONS(372),
    [sym_uid] = ACTIONS(372),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(372),
    [anon_sym_PERCENTparameter] = ACTIONS(372),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(372),
    [anon_sym_PERCENTtype] = ACTIONS(372),
    [anon_sym_PERCENTleft] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(372),
    [anon_sym_PERCENTattribute] = ACTIONS(372),
    [anon_sym_PERCENTnonassoc] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(372),
    [anon_sym_PERCENTtoken] = ACTIONS(372),
  },
  [132] = {
    [aux_sym_declaration_repeat5] = STATE(132),
    [sym_attribute] = STATE(132),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(342),
    [anon_sym_PERCENTright] = ACTIONS(342),
    [sym_uid] = ACTIONS(342),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(342),
    [anon_sym_PERCENTparameter] = ACTIONS(342),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(342),
    [anon_sym_PERCENTtype] = ACTIONS(342),
    [anon_sym_PERCENTleft] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(342),
    [anon_sym_PERCENTattribute] = ACTIONS(342),
    [anon_sym_PERCENTnonassoc] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(342),
    [anon_sym_PERCENTtoken] = ACTIONS(342),
  },
  [133] = {
    [aux_sym_declaration_repeat1] = STATE(135),
    [sym_terminal_alias_attrs] = STATE(135),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(279),
    [anon_sym_PERCENTright] = ACTIONS(279),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [anon_sym_PERCENTparameter] = ACTIONS(279),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(279),
    [anon_sym_PERCENTleft] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(279),
    [anon_sym_PERCENTattribute] = ACTIONS(279),
    [anon_sym_PERCENTnonassoc] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(279),
    [anon_sym_PERCENTtoken] = ACTIONS(279),
  },
  [134] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(374),
    [anon_sym_PERCENTright] = ACTIONS(374),
    [sym_uid] = ACTIONS(374),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(374),
    [anon_sym_PERCENTparameter] = ACTIONS(374),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(374),
    [anon_sym_PERCENTtype] = ACTIONS(374),
    [anon_sym_PERCENTleft] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(374),
    [anon_sym_PERCENTattribute] = ACTIONS(374),
    [anon_sym_PERCENTnonassoc] = ACTIONS(374),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(374),
    [anon_sym_PERCENTtoken] = ACTIONS(374),
  },
  [135] = {
    [aux_sym_declaration_repeat1] = STATE(135),
    [sym_terminal_alias_attrs] = STATE(135),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(374),
    [anon_sym_PERCENTright] = ACTIONS(374),
    [sym_uid] = ACTIONS(376),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(374),
    [anon_sym_PERCENTparameter] = ACTIONS(374),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(374),
    [anon_sym_PERCENTtype] = ACTIONS(374),
    [anon_sym_PERCENTleft] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(374),
    [anon_sym_PERCENTattribute] = ACTIONS(374),
    [anon_sym_PERCENTnonassoc] = ACTIONS(374),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(374),
    [anon_sym_PERCENTtoken] = ACTIONS(374),
  },
  [136] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(136),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(353),
    [anon_sym_PERCENTright] = ACTIONS(353),
    [sym_uid] = ACTIONS(355),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(353),
    [anon_sym_PERCENTparameter] = ACTIONS(353),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(353),
    [anon_sym_PERCENTtype] = ACTIONS(353),
    [anon_sym_PERCENTleft] = ACTIONS(353),
    [sym_lid] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(358),
    [sym_qid] = ACTIONS(355),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(353),
    [anon_sym_PERCENTattribute] = ACTIONS(353),
    [anon_sym_PERCENTnonassoc] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(353),
    [anon_sym_PERCENTtoken] = ACTIONS(353),
  },
  [137] = {
    [sym_strict_actual] = STATE(69),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(136),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(279),
    [anon_sym_PERCENTright] = ACTIONS(279),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [anon_sym_PERCENTparameter] = ACTIONS(279),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(279),
    [anon_sym_PERCENTleft] = ACTIONS(279),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(279),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_PERCENTattribute] = ACTIONS(279),
    [anon_sym_PERCENTnonassoc] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(279),
    [anon_sym_PERCENTtoken] = ACTIONS(279),
  },
  [138] = {
    [sym_ocaml] = STATE(56),
    [sym__ocaml] = STATE(34),
    [sym_postlude] = STATE(194),
    [aux_sym__ocaml_repeat1] = STATE(58),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(91),
    [aux_sym__ocaml_token2] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(91),
    [aux_sym__ocaml_token3] = ACTIONS(91),
  },
  [139] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(382),
    [anon_sym_PERCENTright] = ACTIONS(382),
    [sym_uid] = ACTIONS(382),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(382),
    [anon_sym_PERCENTparameter] = ACTIONS(382),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(382),
    [anon_sym_PERCENTtype] = ACTIONS(382),
    [anon_sym_PERCENTleft] = ACTIONS(382),
    [sym_lid] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(382),
    [sym_qid] = ACTIONS(382),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(382),
    [anon_sym_PERCENTattribute] = ACTIONS(382),
    [anon_sym_PERCENTnonassoc] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(382),
    [anon_sym_PERCENTtoken] = ACTIONS(382),
  },
  [140] = {
    [sym_symbol] = STATE(140),
    [aux_sym_declaration_repeat2] = STATE(140),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(382),
    [anon_sym_PERCENTright] = ACTIONS(382),
    [sym_uid] = ACTIONS(384),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(382),
    [anon_sym_PERCENTparameter] = ACTIONS(382),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(382),
    [anon_sym_PERCENTtype] = ACTIONS(382),
    [anon_sym_PERCENTleft] = ACTIONS(382),
    [sym_lid] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(387),
    [sym_qid] = ACTIONS(384),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(382),
    [anon_sym_PERCENTattribute] = ACTIONS(382),
    [anon_sym_PERCENTnonassoc] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(382),
    [anon_sym_PERCENTtoken] = ACTIONS(382),
  },
  [141] = {
    [sym_symbol] = STATE(195),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [142] = {
    [aux_sym_declaration_repeat5] = STATE(145),
    [sym_equality_symbol] = STATE(197),
    [sym_attribute] = STATE(145),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [143] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(198),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [144] = {
    [aux_sym_old_rule_repeat1] = STATE(200),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [145] = {
    [aux_sym_declaration_repeat5] = STATE(145),
    [sym_attribute] = STATE(145),
    [anon_sym_COLON_EQ] = ACTIONS(342),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [146] = {
    [anon_sym_PERCENTinline] = ACTIONS(79),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(79),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(79),
    [anon_sym_LBRACK_AT] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(394),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(394),
    [sym_qid] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PERCENTpublic] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
  },
  [147] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [148] = {
    [sym_pattern] = STATE(202),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(294),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(298),
  },
  [149] = {
    [sym_symbol] = STATE(151),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(203),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [150] = {
    [anon_sym_PERCENTinline] = ACTIONS(79),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(79),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(79),
    [anon_sym_LBRACK_AT] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(394),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(396),
    [sym_lid] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym_qid] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PERCENTpublic] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
  },
  [151] = {
    [aux_sym_declaration_repeat5] = STATE(206),
    [sym_attribute] = STATE(206),
    [anon_sym_PERCENTinline] = ACTIONS(400),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(400),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(400),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(404),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(404),
    [sym_qid] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_PERCENTpublic] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(400),
  },
  [152] = {
    [sym_qid] = ACTIONS(408),
    [anon_sym_PERCENTinline] = ACTIONS(408),
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_uid] = ACTIONS(408),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(408),
    [anon_sym_PERCENTpublic] = ACTIONS(408),
    [anon_sym_let] = ACTIONS(410),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(410),
  },
  [153] = {
    [sym_precedence] = STATE(207),
    [sym_qid] = ACTIONS(412),
    [anon_sym_PERCENTinline] = ACTIONS(412),
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym_uid] = ACTIONS(412),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(412),
    [anon_sym_PERCENTpublic] = ACTIONS(412),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_PERCENTprec] = ACTIONS(326),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(412),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(414),
  },
  [154] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(416),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [155] = {
    [anon_sym_PERCENTinline] = ACTIONS(418),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(418),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(418),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(420),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_lid] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(418),
    [sym_qid] = ACTIONS(418),
    [ts_builtin_sym_end] = ACTIONS(418),
    [anon_sym_PERCENTpublic] = ACTIONS(418),
    [anon_sym_PERCENTprec] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(418),
  },
  [156] = {
    [aux_sym_expression_repeat1] = STATE(210),
    [sym_qid] = ACTIONS(422),
    [anon_sym_PERCENTinline] = ACTIONS(422),
    [ts_builtin_sym_end] = ACTIONS(422),
    [sym_uid] = ACTIONS(422),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(422),
    [anon_sym_PERCENTpublic] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(426),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(424),
  },
  [157] = {
    [sym_type] = STATE(155),
    [sym_action] = STATE(155),
    [sym_menhir_action] = STATE(207),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [158] = {
    [sym_modifier] = STATE(213),
    [anon_sym_PERCENTinline] = ACTIONS(428),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(428),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(428),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(430),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(430),
    [sym_qid] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(432),
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_PERCENTpublic] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(432),
  },
  [159] = {
    [sym_qid] = ACTIONS(428),
    [anon_sym_PERCENTinline] = ACTIONS(428),
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym_uid] = ACTIONS(428),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(428),
    [anon_sym_PERCENTpublic] = ACTIONS(428),
    [anon_sym_let] = ACTIONS(430),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(428),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_lid] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(428),
  },
  [160] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(436),
    [sym_line_comment] = ACTIONS(1),
  },
  [161] = {
    [sym_symbol] = STATE(215),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [162] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [163] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(440),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(440),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(440),
    [anon_sym_PERCENTtype] = ACTIONS(440),
    [anon_sym_PERCENTleft] = ACTIONS(440),
    [sym_lid] = ACTIONS(440),
    [anon_sym_COMMA] = ACTIONS(440),
    [sym_qid] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_PERCENTprec] = ACTIONS(440),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(440),
    [anon_sym_PERCENTstart] = ACTIONS(440),
    [anon_sym_PERCENTright] = ACTIONS(440),
    [sym_uid] = ACTIONS(440),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(440),
    [anon_sym_PERCENTparameter] = ACTIONS(440),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(440),
    [anon_sym_PERCENTattribute] = ACTIONS(440),
    [anon_sym_PERCENTnonassoc] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_PERCENTtoken] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(440),
    [anon_sym_STAR] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(442),
    [anon_sym_QMARK] = ACTIONS(440),
  },
  [164] = {
    [anon_sym_PERCENTinline] = ACTIONS(444),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(444),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(444),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(446),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(444),
    [sym_lid] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(444),
    [sym_qid] = ACTIONS(444),
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_PERCENTpublic] = ACTIONS(444),
    [anon_sym_PERCENTprec] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
  },
  [165] = {
    [anon_sym_RBRACE] = ACTIONS(448),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [166] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(450),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(450),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [sym_lid] = ACTIONS(452),
    [anon_sym_COMMA] = ACTIONS(450),
    [sym_qid] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_PERCENTpublic] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(450),
  },
  [167] = {
    [sym_symbol] = STATE(111),
    [sym_actual] = STATE(219),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [168] = {
    [sym_qid] = ACTIONS(171),
    [anon_sym_PERCENTinline] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_uid] = ACTIONS(171),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(171),
    [anon_sym_PERCENTpublic] = ACTIONS(171),
    [anon_sym_PERCENTprec] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(454),
  },
  [169] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(456),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [170] = {
    [aux_sym_production_group_repeat1] = STATE(170),
    [sym_symbol] = STATE(111),
    [sym_actual] = STATE(114),
    [sym_producer] = STATE(170),
    [sym_qid] = ACTIONS(458),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_PERCENTprec] = ACTIONS(461),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(461),
    [sym_lid] = ACTIONS(463),
  },
  [171] = {
    [sym_action] = STATE(221),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym_type] = STATE(221),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [172] = {
    [sym_precedence] = STATE(222),
    [sym_qid] = ACTIONS(466),
    [anon_sym_PERCENTinline] = ACTIONS(466),
    [ts_builtin_sym_end] = ACTIONS(466),
    [sym_uid] = ACTIONS(466),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(466),
    [anon_sym_PERCENTpublic] = ACTIONS(466),
    [anon_sym_let] = ACTIONS(468),
    [anon_sym_PERCENTprec] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(468),
  },
  [173] = {
    [sym_action] = STATE(221),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(223),
    [sym_type] = STATE(221),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [174] = {
    [aux_sym_production_group_repeat1] = STATE(224),
    [sym_symbol] = STATE(225),
    [sym_type] = STATE(226),
    [sym_lax_actual] = STATE(229),
    [aux_sym_production_group_repeat2] = STATE(227),
    [sym_actual] = STATE(228),
    [sym_production_group] = STATE(230),
    [sym_action] = STATE(226),
    [sym_precedence] = STATE(231),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(224),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(207),
  },
  [175] = {
    [sym_symbol] = STATE(166),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(290),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(290),
    [sym_line_comment] = ACTIONS(1),
  },
  [176] = {
    [anon_sym_PERCENTinline] = ACTIONS(466),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(466),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(466),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(468),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_lid] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(466),
    [sym_qid] = ACTIONS(466),
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_PERCENTpublic] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
  },
  [177] = {
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym__high_prec_bar] = STATE(117),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [178] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACK_AT] = ACTIONS(475),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(475),
    [sym_lid] = ACTIONS(475),
    [sym_qid] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(475),
    [anon_sym_PERCENTprec] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_QMARK] = ACTIONS(475),
  },
  [179] = {
    [aux_sym_declaration_repeat5] = STATE(232),
    [sym_attribute] = STATE(232),
    [aux_sym_old_rule_repeat3] = STATE(233),
    [sym_qid] = ACTIONS(477),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_PERCENTprec] = ACTIONS(477),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(477),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(477),
    [sym_lid] = ACTIONS(477),
  },
  [180] = {
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(477),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_PERCENTprec] = ACTIONS(477),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(477),
    [sym_lid] = ACTIONS(477),
  },
  [181] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(483),
    [anon_sym_PERCENTinline] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_uid] = ACTIONS(483),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(483),
    [anon_sym_PERCENTpublic] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(485),
  },
  [182] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(236),
    [sym_qid] = ACTIONS(483),
    [anon_sym_PERCENTinline] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_uid] = ACTIONS(483),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(483),
    [anon_sym_PERCENTpublic] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(485),
  },
  [183] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(238),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [184] = {
    [aux_sym_production_group_repeat1] = STATE(170),
    [sym_symbol] = STATE(111),
    [sym_precedence] = STATE(239),
    [sym_actual] = STATE(114),
    [sym_producer] = STATE(170),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [sym_lid] = ACTIONS(207),
  },
  [185] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [186] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(240),
    [aux_sym_old_rule_repeat3] = STATE(236),
    [sym_qid] = ACTIONS(483),
    [anon_sym_PERCENTinline] = ACTIONS(483),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_uid] = ACTIONS(483),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(483),
    [anon_sym_PERCENTpublic] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(485),
  },
  [187] = {
    [aux_sym_old_rule_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [188] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(242),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [189] = {
    [sym_symbol] = STATE(243),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [190] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(242),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(244),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [191] = {
    [sym_strict_actual] = STATE(245),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [192] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(491),
    [anon_sym_PERCENTright] = ACTIONS(491),
    [sym_uid] = ACTIONS(491),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(491),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(491),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(491),
    [anon_sym_PERCENTtype] = ACTIONS(491),
    [anon_sym_PERCENTleft] = ACTIONS(491),
    [sym_lid] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [sym_qid] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(491),
    [anon_sym_PERCENTattribute] = ACTIONS(491),
    [anon_sym_PERCENTnonassoc] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(491),
    [anon_sym_PERCENTtoken] = ACTIONS(491),
    [anon_sym_STAR] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
  },
  [193] = {
    [aux_sym_strict_actual_repeat1] = STATE(247),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(493),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [194] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [195] = {
    [aux_sym_old_rule_repeat1] = STATE(249),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(497),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [196] = {
    [sym_symbol] = STATE(250),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [197] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(251),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [198] = {
    [sym_qid] = ACTIONS(499),
    [anon_sym_PERCENTinline] = ACTIONS(499),
    [ts_builtin_sym_end] = ACTIONS(499),
    [sym_uid] = ACTIONS(499),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(499),
    [anon_sym_PERCENTpublic] = ACTIONS(499),
    [anon_sym_let] = ACTIONS(501),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(501),
  },
  [199] = {
    [sym_equality_symbol] = STATE(252),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [200] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(497),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [201] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [202] = {
    [aux_sym_pattern_repeat1] = STATE(255),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(507),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [203] = {
    [aux_sym_expression_repeat1] = STATE(256),
    [sym_qid] = ACTIONS(509),
    [anon_sym_PERCENTinline] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(509),
    [sym_uid] = ACTIONS(509),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(509),
    [anon_sym_PERCENTpublic] = ACTIONS(509),
    [anon_sym_let] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(426),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(511),
  },
  [204] = {
    [sym_symbol] = STATE(258),
    [sym_expression] = STATE(259),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(262),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [205] = {
    [sym__ocaml] = STATE(34),
    [aux_sym__ocaml_repeat1] = STATE(44),
    [sym_ocaml] = STATE(266),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(61),
    [aux_sym__ocaml_token2] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(515),
    [aux_sym__ocaml_token1] = ACTIONS(61),
    [aux_sym__ocaml_token3] = ACTIONS(61),
  },
  [206] = {
    [aux_sym_declaration_repeat5] = STATE(267),
    [sym_attribute] = STATE(267),
    [anon_sym_PERCENTinline] = ACTIONS(517),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(517),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(517),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(519),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(519),
    [sym_qid] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_PERCENTpublic] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
  },
  [207] = {
    [sym_qid] = ACTIONS(521),
    [anon_sym_PERCENTinline] = ACTIONS(521),
    [ts_builtin_sym_end] = ACTIONS(521),
    [sym_uid] = ACTIONS(521),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(521),
    [anon_sym_PERCENTpublic] = ACTIONS(521),
    [anon_sym_let] = ACTIONS(523),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(521),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(521),
    [sym_lid] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(521),
  },
  [208] = {
    [sym_symbol] = STATE(268),
    [sym_symbol_expression] = STATE(269),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [209] = {
    [sym_symbol] = STATE(151),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(270),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [210] = {
    [aux_sym_expression_repeat1] = STATE(271),
    [sym_qid] = ACTIONS(509),
    [anon_sym_PERCENTinline] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(509),
    [sym_uid] = ACTIONS(509),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(509),
    [anon_sym_PERCENTpublic] = ACTIONS(509),
    [anon_sym_let] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(426),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(511),
  },
  [211] = {
    [sym_symbol] = STATE(151),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(272),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [212] = {
    [anon_sym_PERCENTinline] = ACTIONS(230),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(230),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(230),
    [anon_sym_LBRACK_AT] = ACTIONS(230),
    [anon_sym_let] = ACTIONS(525),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(525),
    [sym_qid] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_PERCENTpublic] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(230),
    [anon_sym_QMARK] = ACTIONS(230),
  },
  [213] = {
    [aux_sym_declaration_repeat5] = STATE(273),
    [sym_attribute] = STATE(273),
    [anon_sym_PERCENTinline] = ACTIONS(517),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(517),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(517),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(519),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(519),
    [sym_qid] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_PERCENTpublic] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
  },
  [214] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(274),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(275),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [216] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(529),
    [sym_line_comment] = ACTIONS(1),
  },
  [217] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [218] = {
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(534),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(534),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(536),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(534),
    [sym_lid] = ACTIONS(536),
    [anon_sym_COMMA] = ACTIONS(534),
    [sym_qid] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [anon_sym_PERCENTprec] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_PIPE] = ACTIONS(534),
  },
  [219] = {
    [aux_sym_old_rule_repeat3] = STATE(278),
    [sym_modifier] = STATE(178),
    [aux_sym_declaration_repeat5] = STATE(277),
    [sym_attribute] = STATE(277),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(538),
    [sym_lid] = ACTIONS(538),
    [sym_qid] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_PERCENTprec] = ACTIONS(538),
    [anon_sym_SEMI] = ACTIONS(540),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [220] = {
    [sym_qid] = ACTIONS(269),
    [anon_sym_PERCENTinline] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_uid] = ACTIONS(269),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(269),
    [anon_sym_PERCENTpublic] = ACTIONS(269),
    [anon_sym_PERCENTprec] = ACTIONS(269),
    [anon_sym_let] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(542),
  },
  [221] = {
    [sym_precedence] = STATE(279),
    [sym_qid] = ACTIONS(544),
    [anon_sym_PERCENTinline] = ACTIONS(544),
    [ts_builtin_sym_end] = ACTIONS(544),
    [sym_uid] = ACTIONS(544),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(544),
    [anon_sym_PERCENTpublic] = ACTIONS(544),
    [anon_sym_let] = ACTIONS(546),
    [anon_sym_PERCENTprec] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(544),
    [anon_sym_PIPE] = ACTIONS(544),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(546),
  },
  [222] = {
    [anon_sym_PERCENTinline] = ACTIONS(544),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(544),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(544),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(546),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(544),
    [sym_lid] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(544),
    [sym_qid] = ACTIONS(544),
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_PERCENTpublic] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
    [anon_sym_PIPE] = ACTIONS(544),
  },
  [223] = {
    [sym_action] = STATE(280),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym_type] = STATE(280),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [224] = {
    [aux_sym_production_group_repeat1] = STATE(170),
    [sym_symbol] = STATE(111),
    [sym_actual] = STATE(114),
    [aux_sym_production_group_repeat2] = STATE(281),
    [sym_type] = STATE(282),
    [sym_action] = STATE(282),
    [sym__high_prec_bar] = STATE(117),
    [sym_precedence] = STATE(283),
    [sym_producer] = STATE(170),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(207),
  },
  [225] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_LBRACK_AT] = ACTIONS(318),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(318),
    [sym_lid] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(548),
    [sym_qid] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(550),
    [anon_sym_PERCENTprec] = ACTIONS(318),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_QMARK] = ACTIONS(318),
  },
  [226] = {
    [sym_precedence] = STATE(176),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(322),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(322),
  },
  [227] = {
    [sym_action] = STATE(282),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym_type] = STATE(282),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [228] = {
    [aux_sym_old_rule_repeat3] = STATE(180),
    [sym_modifier] = STATE(285),
    [aux_sym_declaration_repeat5] = STATE(179),
    [sym_attribute] = STATE(179),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(328),
    [sym_lid] = ACTIONS(328),
    [sym_qid] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_PERCENTprec] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [229] = {
    [aux_sym_actual_repeat1] = STATE(288),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [230] = {
    [aux_sym_old_rule_repeat2] = STATE(289),
    [sym__high_prec_bar] = STATE(290),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(556),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(548),
  },
  [231] = {
    [sym_action] = STATE(282),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(281),
    [sym_type] = STATE(282),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [232] = {
    [aux_sym_declaration_repeat5] = STATE(232),
    [sym_attribute] = STATE(232),
    [sym_qid] = ACTIONS(342),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_PERCENTprec] = ACTIONS(342),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(342),
    [sym_lid] = ACTIONS(342),
  },
  [233] = {
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(538),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_PERCENTprec] = ACTIONS(538),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [sym_lid] = ACTIONS(538),
  },
  [234] = {
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(558),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(558),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_PERCENTprec] = ACTIONS(558),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(560),
    [anon_sym_PIPE] = ACTIONS(558),
    [anon_sym_LT] = ACTIONS(558),
    [sym_lid] = ACTIONS(558),
  },
  [235] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(558),
    [anon_sym_PERCENTinline] = ACTIONS(558),
    [ts_builtin_sym_end] = ACTIONS(558),
    [sym_uid] = ACTIONS(558),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(558),
    [anon_sym_PERCENTpublic] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(563),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(565),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(563),
  },
  [236] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(568),
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(570),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(570),
  },
  [237] = {
    [aux_sym_old_rule_repeat2] = STATE(237),
    [sym__high_prec_bar] = STATE(183),
    [sym_qid] = ACTIONS(572),
    [anon_sym_PERCENTinline] = ACTIONS(572),
    [ts_builtin_sym_end] = ACTIONS(572),
    [sym_uid] = ACTIONS(572),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(572),
    [anon_sym_PERCENTpublic] = ACTIONS(572),
    [anon_sym_let] = ACTIONS(574),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(576),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(574),
  },
  [238] = {
    [anon_sym_PERCENTinline] = ACTIONS(572),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(572),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(572),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(574),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(572),
    [sym_lid] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(572),
    [sym_qid] = ACTIONS(572),
    [ts_builtin_sym_end] = ACTIONS(572),
    [anon_sym_PERCENTpublic] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
  },
  [239] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(579),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [240] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(291),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(568),
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(570),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(570),
  },
  [241] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(583),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [242] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(293),
    [aux_sym_old_rule_repeat3] = STATE(291),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(568),
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(570),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(570),
  },
  [243] = {
    [aux_sym_old_rule_repeat1] = STATE(294),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(583),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [244] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(274),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [245] = {
    [sym_modifier] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [246] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(587),
    [anon_sym_PERCENTright] = ACTIONS(587),
    [sym_uid] = ACTIONS(587),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(587),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(587),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(587),
    [anon_sym_PERCENTtype] = ACTIONS(587),
    [anon_sym_PERCENTleft] = ACTIONS(587),
    [sym_lid] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(587),
    [sym_qid] = ACTIONS(587),
    [anon_sym_PLUS] = ACTIONS(587),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(587),
    [anon_sym_PERCENTattribute] = ACTIONS(587),
    [anon_sym_PERCENTnonassoc] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(587),
    [anon_sym_PERCENTtoken] = ACTIONS(587),
    [anon_sym_STAR] = ACTIONS(587),
    [anon_sym_QMARK] = ACTIONS(587),
  },
  [247] = {
    [aux_sym_strict_actual_repeat1] = STATE(247),
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [248] = {
    [sym_equality_symbol] = STATE(295),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [249] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [250] = {
    [aux_sym_old_rule_repeat1] = STATE(297),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [251] = {
    [sym_qid] = ACTIONS(594),
    [anon_sym_PERCENTinline] = ACTIONS(594),
    [ts_builtin_sym_end] = ACTIONS(594),
    [sym_uid] = ACTIONS(594),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(594),
    [anon_sym_PERCENTpublic] = ACTIONS(594),
    [anon_sym_let] = ACTIONS(596),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(596),
  },
  [252] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(298),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [253] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_EQ] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [254] = {
    [sym_pattern] = STATE(299),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(298),
    [sym_line_comment] = ACTIONS(1),
  },
  [255] = {
    [aux_sym_pattern_repeat1] = STATE(301),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [256] = {
    [aux_sym_expression_repeat1] = STATE(271),
    [sym_qid] = ACTIONS(602),
    [anon_sym_PERCENTinline] = ACTIONS(602),
    [ts_builtin_sym_end] = ACTIONS(602),
    [sym_uid] = ACTIONS(602),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(602),
    [anon_sym_PERCENTpublic] = ACTIONS(602),
    [anon_sym_let] = ACTIONS(604),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(426),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(604),
  },
  [257] = {
    [sym_symbol] = STATE(258),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(302),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [258] = {
    [aux_sym_declaration_repeat5] = STATE(304),
    [sym_attribute] = STATE(304),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(606),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(400),
  },
  [259] = {
    [aux_sym_symbol_expression_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [260] = {
    [sym_precedence] = STATE(207),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(412),
  },
  [261] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(612),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [262] = {
    [aux_sym_expression_repeat1] = STATE(310),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(614),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(422),
  },
  [263] = {
    [sym_type] = STATE(155),
    [sym_action] = STATE(155),
    [sym_menhir_action] = STATE(207),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [264] = {
    [sym_modifier] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [265] = {
    [anon_sym_PERCENTinline] = ACTIONS(306),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(306),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(306),
    [anon_sym_LBRACK_AT] = ACTIONS(306),
    [anon_sym_let] = ACTIONS(308),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(308),
    [sym_qid] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_PERCENTpublic] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
  },
  [266] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(618),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [267] = {
    [aux_sym_declaration_repeat5] = STATE(267),
    [sym_attribute] = STATE(267),
    [anon_sym_PERCENTinline] = ACTIONS(342),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(342),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(342),
    [anon_sym_LBRACK_AT] = ACTIONS(620),
    [anon_sym_let] = ACTIONS(623),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(623),
    [sym_qid] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_PERCENTpublic] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(342),
  },
  [268] = {
    [aux_sym_declaration_repeat5] = STATE(315),
    [sym_attribute] = STATE(315),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(625),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(400),
  },
  [269] = {
    [sym_modifier] = STATE(317),
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_comment] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [270] = {
    [sym_qid] = ACTIONS(629),
    [anon_sym_PERCENTinline] = ACTIONS(629),
    [ts_builtin_sym_end] = ACTIONS(629),
    [sym_uid] = ACTIONS(629),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(629),
    [anon_sym_PERCENTpublic] = ACTIONS(629),
    [anon_sym_let] = ACTIONS(631),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(629),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(629),
    [sym_lid] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(629),
  },
  [271] = {
    [aux_sym_expression_repeat1] = STATE(271),
    [sym_qid] = ACTIONS(629),
    [anon_sym_PERCENTinline] = ACTIONS(629),
    [ts_builtin_sym_end] = ACTIONS(629),
    [sym_uid] = ACTIONS(629),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(629),
    [anon_sym_PERCENTpublic] = ACTIONS(629),
    [anon_sym_let] = ACTIONS(631),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(633),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(631),
  },
  [272] = {
    [sym_qid] = ACTIONS(636),
    [anon_sym_PERCENTinline] = ACTIONS(636),
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_uid] = ACTIONS(636),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(636),
    [anon_sym_PERCENTpublic] = ACTIONS(636),
    [anon_sym_let] = ACTIONS(638),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(636),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_lid] = ACTIONS(638),
    [anon_sym_COMMA] = ACTIONS(636),
  },
  [273] = {
    [aux_sym_declaration_repeat5] = STATE(267),
    [sym_attribute] = STATE(267),
    [anon_sym_PERCENTinline] = ACTIONS(640),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(640),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(640),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(642),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(642),
    [sym_qid] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [ts_builtin_sym_end] = ACTIONS(640),
    [anon_sym_PERCENTpublic] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_PIPE] = ACTIONS(640),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_QMARK] = ACTIONS(640),
  },
  [274] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(319),
    [aux_sym_old_rule_repeat3] = STATE(318),
    [sym_qid] = ACTIONS(644),
    [anon_sym_PERCENTinline] = ACTIONS(644),
    [ts_builtin_sym_end] = ACTIONS(644),
    [sym_uid] = ACTIONS(644),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(644),
    [anon_sym_PERCENTpublic] = ACTIONS(644),
    [anon_sym_let] = ACTIONS(646),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(646),
  },
  [275] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(320),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [276] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(320),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(321),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [277] = {
    [aux_sym_declaration_repeat5] = STATE(232),
    [sym_attribute] = STATE(232),
    [aux_sym_old_rule_repeat3] = STATE(322),
    [sym_qid] = ACTIONS(650),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(650),
    [anon_sym_PERCENTprec] = ACTIONS(650),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(652),
    [anon_sym_PIPE] = ACTIONS(650),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(650),
    [sym_lid] = ACTIONS(650),
  },
  [278] = {
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(650),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(650),
    [anon_sym_LBRACE] = ACTIONS(650),
    [anon_sym_PERCENTprec] = ACTIONS(650),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(650),
    [anon_sym_LT] = ACTIONS(650),
    [sym_lid] = ACTIONS(650),
  },
  [279] = {
    [anon_sym_PERCENTinline] = ACTIONS(654),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(654),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(654),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(656),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(654),
    [sym_lid] = ACTIONS(656),
    [anon_sym_COMMA] = ACTIONS(654),
    [sym_qid] = ACTIONS(654),
    [ts_builtin_sym_end] = ACTIONS(654),
    [anon_sym_PERCENTpublic] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_PIPE] = ACTIONS(654),
  },
  [280] = {
    [sym_precedence] = STATE(323),
    [sym_qid] = ACTIONS(654),
    [anon_sym_PERCENTinline] = ACTIONS(654),
    [ts_builtin_sym_end] = ACTIONS(654),
    [sym_uid] = ACTIONS(654),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(654),
    [anon_sym_PERCENTpublic] = ACTIONS(654),
    [anon_sym_let] = ACTIONS(656),
    [anon_sym_PERCENTprec] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_PIPE] = ACTIONS(654),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(656),
  },
  [281] = {
    [sym_action] = STATE(324),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym_type] = STATE(324),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [282] = {
    [sym_precedence] = STATE(222),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(466),
  },
  [283] = {
    [sym_action] = STATE(324),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(325),
    [sym_type] = STATE(324),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [284] = {
    [aux_sym_production_group_repeat1] = STATE(224),
    [sym_symbol] = STATE(225),
    [sym_type] = STATE(226),
    [sym_lax_actual] = STATE(326),
    [aux_sym_production_group_repeat2] = STATE(227),
    [sym_actual] = STATE(228),
    [sym_production_group] = STATE(230),
    [sym_action] = STATE(226),
    [sym_precedence] = STATE(231),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(224),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(207),
  },
  [285] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACK_AT] = ACTIONS(475),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(658),
    [anon_sym_LT] = ACTIONS(475),
    [sym_lid] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(658),
    [sym_qid] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(475),
    [anon_sym_PERCENTprec] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_STAR] = ACTIONS(475),
    [anon_sym_QMARK] = ACTIONS(475),
  },
  [286] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_LBRACK_AT] = ACTIONS(660),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(660),
    [sym_lid] = ACTIONS(660),
    [sym_qid] = ACTIONS(660),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_PERCENTprec] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(660),
    [anon_sym_PIPE] = ACTIONS(660),
    [anon_sym_STAR] = ACTIONS(660),
    [anon_sym_QMARK] = ACTIONS(660),
  },
  [287] = {
    [aux_sym_production_group_repeat1] = STATE(224),
    [sym_symbol] = STATE(225),
    [sym_type] = STATE(226),
    [sym_lax_actual] = STATE(327),
    [aux_sym_production_group_repeat2] = STATE(227),
    [sym_actual] = STATE(228),
    [sym_production_group] = STATE(230),
    [sym_action] = STATE(226),
    [sym_precedence] = STATE(231),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(224),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(207),
  },
  [288] = {
    [aux_sym_actual_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [289] = {
    [aux_sym_old_rule_repeat2] = STATE(330),
    [sym__high_prec_bar] = STATE(290),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(658),
    [anon_sym_PIPE] = ACTIONS(556),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(658),
  },
  [290] = {
    [aux_sym_production_group_repeat1] = STATE(224),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(226),
    [aux_sym_production_group_repeat2] = STATE(227),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(238),
    [sym_action] = STATE(226),
    [sym_precedence] = STATE(231),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(224),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(207),
  },
  [291] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(644),
    [anon_sym_PERCENTinline] = ACTIONS(644),
    [ts_builtin_sym_end] = ACTIONS(644),
    [sym_uid] = ACTIONS(644),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(644),
    [anon_sym_PERCENTpublic] = ACTIONS(644),
    [anon_sym_let] = ACTIONS(646),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(646),
  },
  [292] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(664),
    [sym_line_comment] = ACTIONS(1),
  },
  [293] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(318),
    [sym_qid] = ACTIONS(644),
    [anon_sym_PERCENTinline] = ACTIONS(644),
    [ts_builtin_sym_end] = ACTIONS(644),
    [sym_uid] = ACTIONS(644),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(644),
    [anon_sym_PERCENTpublic] = ACTIONS(644),
    [anon_sym_let] = ACTIONS(646),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(646),
  },
  [294] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(666),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [295] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(333),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [296] = {
    [sym_equality_symbol] = STATE(334),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [297] = {
    [aux_sym_old_rule_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(668),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [298] = {
    [sym_qid] = ACTIONS(670),
    [anon_sym_PERCENTinline] = ACTIONS(670),
    [ts_builtin_sym_end] = ACTIONS(670),
    [sym_uid] = ACTIONS(670),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(670),
    [anon_sym_PERCENTpublic] = ACTIONS(670),
    [anon_sym_let] = ACTIONS(672),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(672),
  },
  [299] = {
    [anon_sym_COMMA] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [300] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(676),
    [anon_sym_EQ] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [301] = {
    [aux_sym_pattern_repeat1] = STATE(301),
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [302] = {
    [aux_sym_expression_repeat1] = STATE(336),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(614),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(509),
  },
  [303] = {
    [sym_symbol] = STATE(258),
    [sym_expression] = STATE(337),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(262),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [304] = {
    [aux_sym_declaration_repeat5] = STATE(338),
    [sym_attribute] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
  },
  [305] = {
    [aux_sym_declaration_repeat5] = STATE(339),
    [sym_attribute] = STATE(339),
    [anon_sym_PERCENTinline] = ACTIONS(681),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(681),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(681),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(683),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(683),
    [sym_qid] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(681),
    [ts_builtin_sym_end] = ACTIONS(681),
    [anon_sym_PERCENTpublic] = ACTIONS(681),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_STAR] = ACTIONS(681),
    [anon_sym_QMARK] = ACTIONS(681),
  },
  [306] = {
    [sym_symbol] = STATE(258),
    [sym_expression] = STATE(340),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(262),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [307] = {
    [aux_sym_symbol_expression_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(685),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [308] = {
    [sym_symbol] = STATE(268),
    [sym_symbol_expression] = STATE(343),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [309] = {
    [sym_symbol] = STATE(258),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(270),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [310] = {
    [aux_sym_expression_repeat1] = STATE(344),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(614),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(509),
  },
  [311] = {
    [sym_symbol] = STATE(258),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(272),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [312] = {
    [aux_sym_declaration_repeat5] = STATE(345),
    [sym_attribute] = STATE(345),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
  },
  [313] = {
    [anon_sym_PERCENTinline] = ACTIONS(440),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(440),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(440),
    [anon_sym_LBRACK_AT] = ACTIONS(440),
    [anon_sym_let] = ACTIONS(442),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(442),
    [sym_qid] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_PERCENTpublic] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_STAR] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
  },
  [314] = {
    [sym_symbol] = STATE(258),
    [sym_expression] = STATE(346),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(262),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [315] = {
    [aux_sym_declaration_repeat5] = STATE(347),
    [sym_attribute] = STATE(347),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(517),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
  },
  [316] = {
    [sym_symbol] = STATE(151),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(348),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [317] = {
    [aux_sym_declaration_repeat5] = STATE(349),
    [sym_attribute] = STATE(349),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(517),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
  },
  [318] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(687),
    [anon_sym_PERCENTinline] = ACTIONS(687),
    [ts_builtin_sym_end] = ACTIONS(687),
    [sym_uid] = ACTIONS(687),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(687),
    [anon_sym_PERCENTpublic] = ACTIONS(687),
    [anon_sym_let] = ACTIONS(689),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(689),
  },
  [319] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(350),
    [sym_qid] = ACTIONS(687),
    [anon_sym_PERCENTinline] = ACTIONS(687),
    [ts_builtin_sym_end] = ACTIONS(687),
    [sym_uid] = ACTIONS(687),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(687),
    [anon_sym_PERCENTpublic] = ACTIONS(687),
    [anon_sym_let] = ACTIONS(689),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(689),
  },
  [320] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(351),
    [aux_sym_old_rule_repeat3] = STATE(350),
    [sym_qid] = ACTIONS(687),
    [anon_sym_PERCENTinline] = ACTIONS(687),
    [ts_builtin_sym_end] = ACTIONS(687),
    [sym_uid] = ACTIONS(687),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(687),
    [anon_sym_PERCENTpublic] = ACTIONS(687),
    [anon_sym_let] = ACTIONS(689),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(689),
  },
  [321] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(352),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [322] = {
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(693),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_PERCENTprec] = ACTIONS(693),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(693),
    [anon_sym_LT] = ACTIONS(693),
    [sym_lid] = ACTIONS(693),
  },
  [323] = {
    [anon_sym_PERCENTinline] = ACTIONS(695),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(695),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(695),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(697),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_lid] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(695),
    [sym_qid] = ACTIONS(695),
    [ts_builtin_sym_end] = ACTIONS(695),
    [anon_sym_PERCENTpublic] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_PIPE] = ACTIONS(695),
  },
  [324] = {
    [sym_precedence] = STATE(279),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(544),
  },
  [325] = {
    [sym_action] = STATE(353),
    [sym__high_prec_bar] = STATE(117),
    [aux_sym_production_group_repeat2] = STATE(177),
    [sym_type] = STATE(353),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [326] = {
    [aux_sym_actual_repeat1] = STATE(355),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [328] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [anon_sym_LBRACK_AT] = ACTIONS(703),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(703),
    [sym_lid] = ACTIONS(703),
    [sym_qid] = ACTIONS(703),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_PERCENTprec] = ACTIONS(703),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(703),
    [anon_sym_QMARK] = ACTIONS(703),
  },
  [329] = {
    [aux_sym_actual_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [330] = {
    [aux_sym_old_rule_repeat2] = STATE(330),
    [sym__high_prec_bar] = STATE(290),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(572),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(572),
  },
  [331] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(352),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(356),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [332] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(1),
  },
  [333] = {
    [sym_qid] = ACTIONS(713),
    [anon_sym_PERCENTinline] = ACTIONS(713),
    [ts_builtin_sym_end] = ACTIONS(713),
    [sym_uid] = ACTIONS(713),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(713),
    [anon_sym_PERCENTpublic] = ACTIONS(713),
    [anon_sym_let] = ACTIONS(715),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(715),
  },
  [334] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(358),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [335] = {
    [sym_equality_symbol] = STATE(359),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [336] = {
    [aux_sym_expression_repeat1] = STATE(344),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(614),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(602),
  },
  [337] = {
    [aux_sym_symbol_expression_repeat1] = STATE(361),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(717),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [338] = {
    [aux_sym_declaration_repeat5] = STATE(338),
    [sym_attribute] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(342),
  },
  [339] = {
    [aux_sym_declaration_repeat5] = STATE(267),
    [sym_attribute] = STATE(267),
    [anon_sym_PERCENTinline] = ACTIONS(719),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(719),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(719),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(721),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(721),
    [sym_qid] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(719),
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_PERCENTpublic] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [341] = {
    [aux_sym_declaration_repeat5] = STATE(362),
    [sym_attribute] = STATE(362),
    [anon_sym_PERCENTinline] = ACTIONS(719),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(719),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(719),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(721),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(721),
    [sym_qid] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(719),
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_PERCENTpublic] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
  },
  [342] = {
    [aux_sym_symbol_expression_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [343] = {
    [sym_modifier] = STATE(317),
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_PLUS] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(103),
    [sym_comment] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [344] = {
    [aux_sym_expression_repeat1] = STATE(344),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(629),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(629),
  },
  [345] = {
    [aux_sym_declaration_repeat5] = STATE(338),
    [sym_attribute] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_PIPE] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_QMARK] = ACTIONS(640),
  },
  [346] = {
    [aux_sym_symbol_expression_repeat1] = STATE(365),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [347] = {
    [aux_sym_declaration_repeat5] = STATE(347),
    [sym_attribute] = STATE(347),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(342),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(344),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(342),
  },
  [348] = {
    [sym_qid] = ACTIONS(735),
    [anon_sym_PERCENTinline] = ACTIONS(735),
    [ts_builtin_sym_end] = ACTIONS(735),
    [sym_uid] = ACTIONS(735),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(735),
    [anon_sym_PERCENTpublic] = ACTIONS(735),
    [anon_sym_let] = ACTIONS(737),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(735),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(735),
    [sym_lid] = ACTIONS(737),
    [anon_sym_COMMA] = ACTIONS(735),
  },
  [349] = {
    [aux_sym_declaration_repeat5] = STATE(347),
    [sym_attribute] = STATE(347),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(640),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_STAR] = ACTIONS(640),
    [anon_sym_QMARK] = ACTIONS(640),
  },
  [350] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(739),
    [anon_sym_PERCENTinline] = ACTIONS(739),
    [ts_builtin_sym_end] = ACTIONS(739),
    [sym_uid] = ACTIONS(739),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(739),
    [anon_sym_PERCENTpublic] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(741),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(741),
  },
  [351] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(366),
    [sym_qid] = ACTIONS(739),
    [anon_sym_PERCENTinline] = ACTIONS(739),
    [ts_builtin_sym_end] = ACTIONS(739),
    [sym_uid] = ACTIONS(739),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(739),
    [anon_sym_PERCENTpublic] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(741),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(741),
  },
  [352] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(367),
    [aux_sym_old_rule_repeat3] = STATE(366),
    [sym_qid] = ACTIONS(739),
    [anon_sym_PERCENTinline] = ACTIONS(739),
    [ts_builtin_sym_end] = ACTIONS(739),
    [sym_uid] = ACTIONS(739),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(739),
    [anon_sym_PERCENTpublic] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(741),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(741),
  },
  [353] = {
    [sym_precedence] = STATE(323),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(654),
  },
  [354] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_LBRACK_AT] = ACTIONS(660),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(745),
    [anon_sym_LT] = ACTIONS(660),
    [sym_lid] = ACTIONS(660),
    [anon_sym_COMMA] = ACTIONS(745),
    [sym_qid] = ACTIONS(660),
    [anon_sym_PLUS] = ACTIONS(660),
    [anon_sym_PERCENTprec] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(660),
    [anon_sym_PIPE] = ACTIONS(660),
    [anon_sym_STAR] = ACTIONS(660),
    [anon_sym_QMARK] = ACTIONS(660),
  },
  [355] = {
    [aux_sym_actual_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(747),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [356] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(369),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [357] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(369),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym__low_prec_bar] = STATE(370),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [358] = {
    [sym_qid] = ACTIONS(749),
    [anon_sym_PERCENTinline] = ACTIONS(749),
    [ts_builtin_sym_end] = ACTIONS(749),
    [sym_uid] = ACTIONS(749),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(749),
    [anon_sym_PERCENTpublic] = ACTIONS(749),
    [anon_sym_let] = ACTIONS(751),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(751),
  },
  [359] = {
    [sym_symbol] = STATE(151),
    [sym_expression] = STATE(371),
    [sym_menhir_action] = STATE(153),
    [sym_pattern] = STATE(154),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(156),
    [sym_precedence] = STATE(157),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(158),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [360] = {
    [aux_sym_declaration_repeat5] = STATE(372),
    [sym_attribute] = STATE(372),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(681),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_STAR] = ACTIONS(681),
    [anon_sym_QMARK] = ACTIONS(681),
  },
  [361] = {
    [aux_sym_symbol_expression_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(753),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [362] = {
    [aux_sym_declaration_repeat5] = STATE(267),
    [sym_attribute] = STATE(267),
    [anon_sym_PERCENTinline] = ACTIONS(755),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(755),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(755),
    [anon_sym_LBRACK_AT] = ACTIONS(402),
    [anon_sym_let] = ACTIONS(757),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(757),
    [sym_qid] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(755),
    [ts_builtin_sym_end] = ACTIONS(755),
    [anon_sym_PERCENTpublic] = ACTIONS(755),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_QMARK] = ACTIONS(755),
  },
  [363] = {
    [sym_symbol] = STATE(258),
    [sym_menhir_action] = STATE(260),
    [sym_pattern] = STATE(261),
    [sym_type] = STATE(155),
    [sym_seq_expression] = STATE(348),
    [sym_precedence] = STATE(263),
    [sym_action] = STATE(155),
    [sym_symbol_expression] = STATE(264),
    [sym_action_expression] = STATE(159),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(292),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(298),
    [sym_lid] = ACTIONS(300),
  },
  [364] = {
    [aux_sym_declaration_repeat5] = STATE(374),
    [sym_attribute] = STATE(374),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(681),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_STAR] = ACTIONS(681),
    [anon_sym_QMARK] = ACTIONS(681),
  },
  [365] = {
    [aux_sym_symbol_expression_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [366] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(761),
    [anon_sym_PERCENTinline] = ACTIONS(761),
    [ts_builtin_sym_end] = ACTIONS(761),
    [sym_uid] = ACTIONS(761),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(761),
    [anon_sym_PERCENTpublic] = ACTIONS(761),
    [anon_sym_let] = ACTIONS(763),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(763),
  },
  [367] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(376),
    [sym_qid] = ACTIONS(761),
    [anon_sym_PERCENTinline] = ACTIONS(761),
    [ts_builtin_sym_end] = ACTIONS(761),
    [sym_uid] = ACTIONS(761),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(761),
    [anon_sym_PERCENTpublic] = ACTIONS(761),
    [anon_sym_let] = ACTIONS(763),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(763),
  },
  [368] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(703),
    [anon_sym_LBRACK_AT] = ACTIONS(703),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_LT] = ACTIONS(703),
    [sym_lid] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(767),
    [sym_qid] = ACTIONS(703),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_PERCENTprec] = ACTIONS(703),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(703),
    [anon_sym_QMARK] = ACTIONS(703),
  },
  [369] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(377),
    [aux_sym_old_rule_repeat3] = STATE(376),
    [sym_qid] = ACTIONS(761),
    [anon_sym_PERCENTinline] = ACTIONS(761),
    [ts_builtin_sym_end] = ACTIONS(761),
    [sym_uid] = ACTIONS(761),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(761),
    [anon_sym_PERCENTpublic] = ACTIONS(761),
    [anon_sym_let] = ACTIONS(763),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(763),
  },
  [370] = {
    [aux_sym_production_group_repeat1] = STATE(110),
    [sym_symbol] = STATE(111),
    [sym_type] = STATE(112),
    [aux_sym_production_group_repeat2] = STATE(113),
    [sym_actual] = STATE(114),
    [sym_production_group] = STATE(378),
    [sym_action] = STATE(112),
    [sym_precedence] = STATE(116),
    [sym__high_prec_bar] = STATE(117),
    [sym_producer] = STATE(110),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_PERCENTprec] = ACTIONS(201),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(205),
    [sym_lid] = ACTIONS(207),
  },
  [371] = {
    [sym_qid] = ACTIONS(769),
    [anon_sym_PERCENTinline] = ACTIONS(769),
    [ts_builtin_sym_end] = ACTIONS(769),
    [sym_uid] = ACTIONS(769),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(769),
    [anon_sym_PERCENTpublic] = ACTIONS(769),
    [anon_sym_let] = ACTIONS(771),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(771),
  },
  [372] = {
    [aux_sym_declaration_repeat5] = STATE(338),
    [sym_attribute] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(719),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
  },
  [373] = {
    [aux_sym_declaration_repeat5] = STATE(379),
    [sym_attribute] = STATE(379),
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(719),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
  },
  [374] = {
    [aux_sym_declaration_repeat5] = STATE(347),
    [sym_attribute] = STATE(347),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(719),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
  },
  [375] = {
    [aux_sym_declaration_repeat5] = STATE(380),
    [sym_attribute] = STATE(380),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(719),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
  },
  [376] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(773),
    [anon_sym_PERCENTinline] = ACTIONS(773),
    [ts_builtin_sym_end] = ACTIONS(773),
    [sym_uid] = ACTIONS(773),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(773),
    [anon_sym_PERCENTpublic] = ACTIONS(773),
    [anon_sym_let] = ACTIONS(775),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(775),
  },
  [377] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(381),
    [sym_qid] = ACTIONS(773),
    [anon_sym_PERCENTinline] = ACTIONS(773),
    [ts_builtin_sym_end] = ACTIONS(773),
    [sym_uid] = ACTIONS(773),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(773),
    [anon_sym_PERCENTpublic] = ACTIONS(773),
    [anon_sym_let] = ACTIONS(775),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(775),
  },
  [378] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(382),
    [aux_sym_old_rule_repeat3] = STATE(381),
    [sym_qid] = ACTIONS(773),
    [anon_sym_PERCENTinline] = ACTIONS(773),
    [ts_builtin_sym_end] = ACTIONS(773),
    [sym_uid] = ACTIONS(773),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(773),
    [anon_sym_PERCENTpublic] = ACTIONS(773),
    [anon_sym_let] = ACTIONS(775),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(775),
  },
  [379] = {
    [aux_sym_declaration_repeat5] = STATE(338),
    [sym_attribute] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_PLUS] = ACTIONS(755),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_QMARK] = ACTIONS(755),
  },
  [380] = {
    [aux_sym_declaration_repeat5] = STATE(347),
    [sym_attribute] = STATE(347),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(755),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(97),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_STAR] = ACTIONS(755),
    [anon_sym_QMARK] = ACTIONS(755),
  },
  [381] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(779),
    [anon_sym_PERCENTinline] = ACTIONS(779),
    [ts_builtin_sym_end] = ACTIONS(779),
    [sym_uid] = ACTIONS(779),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(779),
    [anon_sym_PERCENTpublic] = ACTIONS(779),
    [anon_sym_let] = ACTIONS(781),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(781),
  },
  [382] = {
    [sym__high_prec_bar] = STATE(183),
    [aux_sym_old_rule_repeat2] = STATE(237),
    [aux_sym_old_rule_repeat3] = STATE(383),
    [sym_qid] = ACTIONS(779),
    [anon_sym_PERCENTinline] = ACTIONS(779),
    [ts_builtin_sym_end] = ACTIONS(779),
    [sym_uid] = ACTIONS(779),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(779),
    [anon_sym_PERCENTpublic] = ACTIONS(779),
    [anon_sym_let] = ACTIONS(781),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(783),
    [anon_sym_PIPE] = ACTIONS(338),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(781),
  },
  [383] = {
    [aux_sym_old_rule_repeat3] = STATE(235),
    [sym_qid] = ACTIONS(785),
    [anon_sym_PERCENTinline] = ACTIONS(785),
    [ts_builtin_sym_end] = ACTIONS(785),
    [sym_uid] = ACTIONS(785),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(785),
    [anon_sym_PERCENTpublic] = ACTIONS(785),
    [anon_sym_let] = ACTIONS(787),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(787),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(9),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_priority_keyword, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = false}, SHIFT(24),
  [45] = {.count = 1, .reusable = false}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(36),
  [51] = {.count = 1, .reusable = false}, SHIFT(31),
  [53] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [55] = {.count = 1, .reusable = false}, SHIFT(32),
  [57] = {.count = 1, .reusable = false}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = false}, SHIFT(44),
  [63] = {.count = 1, .reusable = false}, SHIFT(42),
  [65] = {.count = 1, .reusable = true}, SHIFT(45),
  [67] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = false}, SHIFT(48),
  [71] = {.count = 1, .reusable = false}, SHIFT(49),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(51),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(54),
  [85] = {.count = 1, .reusable = false}, SHIFT(55),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_flags, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [91] = {.count = 1, .reusable = false}, SHIFT(58),
  [93] = {.count = 1, .reusable = true}, SHIFT(59),
  [95] = {.count = 1, .reusable = true}, SHIFT(60),
  [97] = {.count = 1, .reusable = true}, SHIFT(61),
  [99] = {.count = 1, .reusable = true}, SHIFT(62),
  [101] = {.count = 1, .reusable = true}, SHIFT(65),
  [103] = {.count = 1, .reusable = true}, SHIFT(67),
  [105] = {.count = 1, .reusable = true}, SHIFT(68),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(73),
  [111] = {.count = 1, .reusable = false}, SHIFT(74),
  [113] = {.count = 1, .reusable = false}, SHIFT(76),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_header, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_ocaml, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(78),
  [121] = {.count = 1, .reusable = false}, SHIFT(79),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__ocaml, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(80),
  [129] = {.count = 1, .reusable = true}, SHIFT(83),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_attribute, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(87),
  [135] = {.count = 1, .reusable = false}, SHIFT(88),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [143] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [169] = {.count = 1, .reusable = true}, SHIFT(90),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_ocaml_type, 1),
  [175] = {.count = 1, .reusable = false}, SHIFT(92),
  [177] = {.count = 1, .reusable = true}, SHIFT(93),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(97),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_postlude, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__ocaml, 1),
  [191] = {.count = 1, .reusable = false}, SHIFT(98),
  [193] = {.count = 1, .reusable = true}, SHIFT(99),
  [195] = {.count = 1, .reusable = true}, SHIFT(100),
  [197] = {.count = 1, .reusable = false}, SHIFT(104),
  [199] = {.count = 1, .reusable = true}, SHIFT(106),
  [201] = {.count = 1, .reusable = true}, SHIFT(107),
  [203] = {.count = 1, .reusable = true}, SHIFT(117),
  [205] = {.count = 1, .reusable = true}, SHIFT(109),
  [207] = {.count = 1, .reusable = true}, SHIFT(108),
  [209] = {.count = 1, .reusable = true}, SHIFT(119),
  [211] = {.count = 1, .reusable = true}, SHIFT(120),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(22),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(24),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [236] = {.count = 1, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2),
  [238] = {.count = 1, .reusable = true}, REDUCE(aux_sym__ocaml_repeat1, 2),
  [240] = {.count = 1, .reusable = true}, SHIFT(129),
  [242] = {.count = 1, .reusable = false}, SHIFT(130),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_header, 3),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2), SHIFT_REPEAT(79),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2), SHIFT_REPEAT(31),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2), SHIFT_REPEAT(32),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_attribute, 3),
  [259] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2), SHIFT_REPEAT(88),
  [262] = {.count = 1, .reusable = true}, SHIFT(138),
  [264] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ocaml_type_repeat1, 2),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ocaml_type_repeat1, 2), SHIFT_REPEAT(92),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(17),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(51),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [281] = {.count = 1, .reusable = true}, SHIFT(141),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2), SHIFT_REPEAT(98),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_equality_symbol, 1),
  [288] = {.count = 1, .reusable = false}, REDUCE(sym_equality_symbol, 1),
  [290] = {.count = 1, .reusable = true}, SHIFT(146),
  [292] = {.count = 1, .reusable = true}, SHIFT(147),
  [294] = {.count = 1, .reusable = true}, SHIFT(148),
  [296] = {.count = 1, .reusable = true}, SHIFT(149),
  [298] = {.count = 1, .reusable = false}, SHIFT(147),
  [300] = {.count = 1, .reusable = false}, SHIFT(150),
  [302] = {.count = 1, .reusable = true}, SHIFT(161),
  [304] = {.count = 1, .reusable = true}, SHIFT(160),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [310] = {.count = 1, .reusable = true}, SHIFT(163),
  [312] = {.count = 1, .reusable = false}, SHIFT(164),
  [314] = {.count = 1, .reusable = true}, SHIFT(167),
  [316] = {.count = 1, .reusable = false}, SHIFT(168),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(174),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [326] = {.count = 1, .reusable = true}, SHIFT(175),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(180),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [336] = {.count = 1, .reusable = true}, SHIFT(181),
  [338] = {.count = 1, .reusable = true}, SHIFT(183),
  [340] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [342] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(61),
  [347] = {.count = 1, .reusable = true}, SHIFT(189),
  [349] = {.count = 1, .reusable = true}, SHIFT(190),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(20),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(68),
  [361] = {.count = 1, .reusable = true}, SHIFT(191),
  [363] = {.count = 1, .reusable = true}, SHIFT(192),
  [365] = {.count = 1, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(aux_sym__ocaml_repeat1, 3),
  [369] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml_repeat1, 2), SHIFT_REPEAT(130),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(37),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(83),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(20),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(90),
  [390] = {.count = 1, .reusable = true}, SHIFT(196),
  [392] = {.count = 1, .reusable = true}, SHIFT(199),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [398] = {.count = 1, .reusable = true}, SHIFT(201),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 1),
  [402] = {.count = 1, .reusable = true}, SHIFT(205),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 1),
  [406] = {.count = 1, .reusable = true}, SHIFT(204),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 4),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 4),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_action_expression, 1),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_action_expression, 1),
  [416] = {.count = 1, .reusable = true}, SHIFT(208),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_menhir_action, 1),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_menhir_action, 1),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [426] = {.count = 1, .reusable = true}, SHIFT(209),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_seq_expression, 1),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_seq_expression, 1),
  [432] = {.count = 1, .reusable = true}, SHIFT(212),
  [434] = {.count = 1, .reusable = true}, SHIFT(211),
  [436] = {.count = 1, .reusable = true}, SHIFT(214),
  [438] = {.count = 1, .reusable = true}, SHIFT(216),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 3),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_action, 2),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_action, 2),
  [448] = {.count = 1, .reusable = true}, SHIFT(218),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [456] = {.count = 1, .reusable = true}, SHIFT(220),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(20),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(108),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [470] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(117),
  [473] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [479] = {.count = 1, .reusable = true}, SHIFT(233),
  [481] = {.count = 1, .reusable = true}, SHIFT(234),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [487] = {.count = 1, .reusable = true}, SHIFT(235),
  [489] = {.count = 1, .reusable = true}, SHIFT(236),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [493] = {.count = 1, .reusable = true}, SHIFT(246),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 5),
  [497] = {.count = 1, .reusable = true}, SHIFT(248),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 5),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 5),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [505] = {.count = 1, .reusable = true}, SHIFT(254),
  [507] = {.count = 1, .reusable = true}, SHIFT(253),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [513] = {.count = 1, .reusable = true}, SHIFT(257),
  [515] = {.count = 1, .reusable = false}, SHIFT(265),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 2),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 2),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_action_expression, 2),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym_action_expression, 2),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_modifier, 1),
  [527] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [529] = {.count = 1, .reusable = true}, SHIFT(276),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(161),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_action, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [540] = {.count = 1, .reusable = true}, SHIFT(278),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [550] = {.count = 1, .reusable = true}, SHIFT(284),
  [552] = {.count = 1, .reusable = true}, SHIFT(287),
  [554] = {.count = 1, .reusable = true}, SHIFT(286),
  [556] = {.count = 1, .reusable = true}, SHIFT(290),
  [558] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(234),
  [563] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(235),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [572] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [574] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(183),
  [579] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [581] = {.count = 1, .reusable = true}, SHIFT(291),
  [583] = {.count = 1, .reusable = true}, SHIFT(292),
  [585] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(191),
  [592] = {.count = 1, .reusable = true}, SHIFT(296),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 6),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 6),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 3),
  [600] = {.count = 1, .reusable = true}, SHIFT(300),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [606] = {.count = 1, .reusable = true}, SHIFT(303),
  [608] = {.count = 1, .reusable = true}, SHIFT(306),
  [610] = {.count = 1, .reusable = true}, SHIFT(305),
  [612] = {.count = 1, .reusable = true}, SHIFT(308),
  [614] = {.count = 1, .reusable = true}, SHIFT(309),
  [616] = {.count = 1, .reusable = true}, SHIFT(311),
  [618] = {.count = 1, .reusable = true}, SHIFT(313),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(205),
  [623] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat5, 2),
  [625] = {.count = 1, .reusable = true}, SHIFT(314),
  [627] = {.count = 1, .reusable = true}, SHIFT(316),
  [629] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [631] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(209),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_seq_expression, 3),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_seq_expression, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 3),
  [642] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 3),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [648] = {.count = 1, .reusable = true}, SHIFT(318),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [652] = {.count = 1, .reusable = true}, SHIFT(322),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [656] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [662] = {.count = 1, .reusable = true}, SHIFT(328),
  [664] = {.count = 1, .reusable = true}, SHIFT(331),
  [666] = {.count = 1, .reusable = true}, SHIFT(332),
  [668] = {.count = 1, .reusable = true}, SHIFT(335),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 7),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 7),
  [674] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 4),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(254),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 4),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 4),
  [685] = {.count = 1, .reusable = true}, SHIFT(341),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [689] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [691] = {.count = 1, .reusable = true}, SHIFT(350),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [699] = {.count = 1, .reusable = true}, SHIFT(354),
  [701] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(287),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(290),
  [711] = {.count = 1, .reusable = true}, SHIFT(357),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 8),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 8),
  [717] = {.count = 1, .reusable = true}, SHIFT(360),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 5),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 5),
  [723] = {.count = 1, .reusable = true}, REDUCE(aux_sym_symbol_expression_repeat1, 2),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_symbol_expression_repeat1, 2), SHIFT_REPEAT(306),
  [728] = {.count = 1, .reusable = true}, SHIFT(363),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(309),
  [733] = {.count = 1, .reusable = true}, SHIFT(364),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_seq_expression, 5),
  [737] = {.count = 1, .reusable = false}, REDUCE(sym_seq_expression, 5),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [743] = {.count = 1, .reusable = true}, SHIFT(366),
  [745] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [747] = {.count = 1, .reusable = true}, SHIFT(368),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 9),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 9),
  [753] = {.count = 1, .reusable = true}, SHIFT(373),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 6),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 6),
  [759] = {.count = 1, .reusable = true}, SHIFT(375),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [763] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [765] = {.count = 1, .reusable = true}, SHIFT(376),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 10),
  [771] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 10),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [777] = {.count = 1, .reusable = true}, SHIFT(381),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [781] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [783] = {.count = 1, .reusable = true}, SHIFT(383),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
  [787] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
};

void *tree_sitter_menhir_external_scanner_create();
void tree_sitter_menhir_external_scanner_destroy(void *);
bool tree_sitter_menhir_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_menhir_external_scanner_serialize(void *, char *);
void tree_sitter_menhir_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_menhir() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_menhir_external_scanner_create,
      tree_sitter_menhir_external_scanner_destroy,
      tree_sitter_menhir_external_scanner_scan,
      tree_sitter_menhir_external_scanner_serialize,
      tree_sitter_menhir_external_scanner_deserialize,
    },
  };
  return &language;
}
