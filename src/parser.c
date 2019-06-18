#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 359
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
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
  aux_sym__ocaml = 83,
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
  aux_sym_ocaml_type_repeat1 = 102,
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
  [aux_sym__ocaml] = "_ocaml",
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
  [aux_sym__ocaml] = {
    .visible = false,
    .named = false,
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
      if (lookahead != 0 &&
          (lookahead < ' ' || '~' < lookahead))
        ADVANCE(27);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      if ((' ' <= lookahead && lookahead <= '~'))
        ADVANCE(30);
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
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(44);
      if (lookahead == '\\')
        ADVANCE(45);
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
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(27);
      if (lookahead == '"')
        ADVANCE(28);
      if (lookahead == '\\')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__ocaml_token1);
      END_STATE();
    case 29:
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          (lookahead < ' ' || '~' < lookahead))
        ADVANCE(27);
      if (lookahead == '"')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(29);
      if ((' ' <= lookahead && lookahead <= '~'))
        ADVANCE(30);
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
      if (lookahead != 0 &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead))
        ADVANCE(44);
      if (lookahead == '\\')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
    case 182:
      if (lookahead == '%')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == '}')
        ADVANCE(43);
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
        SKIP(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(26);
      END_STATE();
    case 192:
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
        SKIP(192);
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
    case 193:
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
        SKIP(193);
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
    case 194:
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(196);
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
  [35] = {.lex_state = 182, .external_lex_state = 1},
  [36] = {.lex_state = 132, .external_lex_state = 1},
  [37] = {.lex_state = 132, .external_lex_state = 1},
  [38] = {.lex_state = 132, .external_lex_state = 1},
  [39] = {.lex_state = 132, .external_lex_state = 1},
  [40] = {.lex_state = 132, .external_lex_state = 1},
  [41] = {.lex_state = 132, .external_lex_state = 1},
  [42] = {.lex_state = 184, .external_lex_state = 1},
  [43] = {.lex_state = 143, .external_lex_state = 1},
  [44] = {.lex_state = 132, .external_lex_state = 1},
  [45] = {.lex_state = 132, .external_lex_state = 1},
  [46] = {.lex_state = 185, .external_lex_state = 1},
  [47] = {.lex_state = 186, .external_lex_state = 1},
  [48] = {.lex_state = 161, .external_lex_state = 1},
  [49] = {.lex_state = 132, .external_lex_state = 1},
  [50] = {.lex_state = 132, .external_lex_state = 1},
  [51] = {.lex_state = 132, .external_lex_state = 1},
  [52] = {.lex_state = 132, .external_lex_state = 1},
  [53] = {.lex_state = 132, .external_lex_state = 1},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 187, .external_lex_state = 1},
  [57] = {.lex_state = 132, .external_lex_state = 1},
  [58] = {.lex_state = 159, .external_lex_state = 1},
  [59] = {.lex_state = 139, .external_lex_state = 1},
  [60] = {.lex_state = 178, .external_lex_state = 1},
  [61] = {.lex_state = 178, .external_lex_state = 1},
  [62] = {.lex_state = 146, .external_lex_state = 1},
  [63] = {.lex_state = 143, .external_lex_state = 1},
  [64] = {.lex_state = 190, .external_lex_state = 1},
  [65] = {.lex_state = 132, .external_lex_state = 1},
  [66] = {.lex_state = 132, .external_lex_state = 1},
  [67] = {.lex_state = 179, .external_lex_state = 1},
  [68] = {.lex_state = 132, .external_lex_state = 1},
  [69] = {.lex_state = 132, .external_lex_state = 1},
  [70] = {.lex_state = 132, .external_lex_state = 1},
  [71] = {.lex_state = 181, .external_lex_state = 1},
  [72] = {.lex_state = 180, .external_lex_state = 1},
  [73] = {.lex_state = 159, .external_lex_state = 1},
  [74] = {.lex_state = 181, .external_lex_state = 1},
  [75] = {.lex_state = 132, .external_lex_state = 1},
  [76] = {.lex_state = 132, .external_lex_state = 1},
  [77] = {.lex_state = 132, .external_lex_state = 1},
  [78] = {.lex_state = 132, .external_lex_state = 1},
  [79] = {.lex_state = 132, .external_lex_state = 1},
  [80] = {.lex_state = 132, .external_lex_state = 1},
  [81] = {.lex_state = 132, .external_lex_state = 1},
  [82] = {.lex_state = 132, .external_lex_state = 1},
  [83] = {.lex_state = 132, .external_lex_state = 1},
  [84] = {.lex_state = 143, .external_lex_state = 1},
  [85] = {.lex_state = 132, .external_lex_state = 1},
  [86] = {.lex_state = 132, .external_lex_state = 1},
  [87] = {.lex_state = 185, .external_lex_state = 1},
  [88] = {.lex_state = 161, .external_lex_state = 1},
  [89] = {.lex_state = 132, .external_lex_state = 1},
  [90] = {.lex_state = 132, .external_lex_state = 1},
  [91] = {.lex_state = 132, .external_lex_state = 1},
  [92] = {.lex_state = 187, .external_lex_state = 1},
  [93] = {.lex_state = 191, .external_lex_state = 1},
  [94] = {.lex_state = 132, .external_lex_state = 1},
  [95] = {.lex_state = 187, .external_lex_state = 1},
  [96] = {.lex_state = 191, .external_lex_state = 1},
  [97] = {.lex_state = 139, .external_lex_state = 1},
  [98] = {.lex_state = 192, .external_lex_state = 1},
  [99] = {.lex_state = 184, .external_lex_state = 1},
  [100] = {.lex_state = 180, .external_lex_state = 1},
  [101] = {.lex_state = 132, .external_lex_state = 1},
  [102] = {.lex_state = 139, .external_lex_state = 1},
  [103] = {.lex_state = 139, .external_lex_state = 1},
  [104] = {.lex_state = 139, .external_lex_state = 1},
  [105] = {.lex_state = 143, .external_lex_state = 1},
  [106] = {.lex_state = 139, .external_lex_state = 1},
  [107] = {.lex_state = 139, .external_lex_state = 1},
  [108] = {.lex_state = 143, .external_lex_state = 1},
  [109] = {.lex_state = 139, .external_lex_state = 1},
  [110] = {.lex_state = 139, .external_lex_state = 1},
  [111] = {.lex_state = 139, .external_lex_state = 1},
  [112] = {.lex_state = 132, .external_lex_state = 1},
  [113] = {.lex_state = 139, .external_lex_state = 1},
  [114] = {.lex_state = 192, .external_lex_state = 1},
  [115] = {.lex_state = 178, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 132, .external_lex_state = 1},
  [118] = {.lex_state = 132, .external_lex_state = 1},
  [119] = {.lex_state = 132, .external_lex_state = 1},
  [120] = {.lex_state = 139, .external_lex_state = 1},
  [121] = {.lex_state = 181, .external_lex_state = 1},
  [122] = {.lex_state = 132, .external_lex_state = 1},
  [123] = {.lex_state = 132, .external_lex_state = 1},
  [124] = {.lex_state = 132, .external_lex_state = 1},
  [125] = {.lex_state = 132, .external_lex_state = 1},
  [126] = {.lex_state = 132, .external_lex_state = 1},
  [127] = {.lex_state = 146, .external_lex_state = 1},
  [128] = {.lex_state = 132, .external_lex_state = 1},
  [129] = {.lex_state = 132, .external_lex_state = 1},
  [130] = {.lex_state = 132, .external_lex_state = 1},
  [131] = {.lex_state = 187, .external_lex_state = 1},
  [132] = {.lex_state = 191, .external_lex_state = 1},
  [133] = {.lex_state = 139, .external_lex_state = 1},
  [134] = {.lex_state = 139, .external_lex_state = 1},
  [135] = {.lex_state = 191, .external_lex_state = 1},
  [136] = {.lex_state = 191, .external_lex_state = 1},
  [137] = {.lex_state = 193, .external_lex_state = 1},
  [138] = {.lex_state = 143, .external_lex_state = 1},
  [139] = {.lex_state = 143, .external_lex_state = 1},
  [140] = {.lex_state = 143, .external_lex_state = 1},
  [141] = {.lex_state = 139, .external_lex_state = 1},
  [142] = {.lex_state = 193, .external_lex_state = 1},
  [143] = {.lex_state = 143, .external_lex_state = 1},
  [144] = {.lex_state = 139, .external_lex_state = 1},
  [145] = {.lex_state = 143, .external_lex_state = 1},
  [146] = {.lex_state = 193, .external_lex_state = 1},
  [147] = {.lex_state = 178, .external_lex_state = 1},
  [148] = {.lex_state = 132, .external_lex_state = 1},
  [149] = {.lex_state = 139, .external_lex_state = 1},
  [150] = {.lex_state = 192, .external_lex_state = 1},
  [151] = {.lex_state = 193, .external_lex_state = 1},
  [152] = {.lex_state = 194, .external_lex_state = 1},
  [153] = {.lex_state = 195, .external_lex_state = 1},
  [154] = {.lex_state = 132, .external_lex_state = 1},
  [155] = {.lex_state = 139, .external_lex_state = 1},
  [156] = {.lex_state = 139, .external_lex_state = 1},
  [157] = {.lex_state = 143, .external_lex_state = 1},
  [158] = {.lex_state = 139, .external_lex_state = 1},
  [159] = {.lex_state = 139, .external_lex_state = 1},
  [160] = {.lex_state = 193, .external_lex_state = 1},
  [161] = {.lex_state = 139, .external_lex_state = 1},
  [162] = {.lex_state = 139, .external_lex_state = 1},
  [163] = {.lex_state = 139, .external_lex_state = 1},
  [164] = {.lex_state = 139, .external_lex_state = 1},
  [165] = {.lex_state = 143, .external_lex_state = 1},
  [166] = {.lex_state = 143, .external_lex_state = 1},
  [167] = {.lex_state = 139, .external_lex_state = 1},
  [168] = {.lex_state = 139, .external_lex_state = 1},
  [169] = {.lex_state = 139, .external_lex_state = 1},
  [170] = {.lex_state = 143, .external_lex_state = 1},
  [171] = {.lex_state = 139, .external_lex_state = 1},
  [172] = {.lex_state = 139, .external_lex_state = 1},
  [173] = {.lex_state = 132, .external_lex_state = 1},
  [174] = {.lex_state = 139, .external_lex_state = 1},
  [175] = {.lex_state = 132, .external_lex_state = 1},
  [176] = {.lex_state = 179, .external_lex_state = 1},
  [177] = {.lex_state = 139, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 139, .external_lex_state = 1},
  [180] = {.lex_state = 132, .external_lex_state = 1},
  [181] = {.lex_state = 191, .external_lex_state = 1},
  [182] = {.lex_state = 143, .external_lex_state = 1},
  [183] = {.lex_state = 187, .external_lex_state = 1},
  [184] = {.lex_state = 139, .external_lex_state = 1},
  [185] = {.lex_state = 139, .external_lex_state = 1},
  [186] = {.lex_state = 139, .external_lex_state = 1},
  [187] = {.lex_state = 143, .external_lex_state = 1},
  [188] = {.lex_state = 191, .external_lex_state = 1},
  [189] = {.lex_state = 143, .external_lex_state = 1},
  [190] = {.lex_state = 193, .external_lex_state = 1},
  [191] = {.lex_state = 132, .external_lex_state = 1},
  [192] = {.lex_state = 191, .external_lex_state = 1},
  [193] = {.lex_state = 143, .external_lex_state = 1},
  [194] = {.lex_state = 191, .external_lex_state = 1},
  [195] = {.lex_state = 143, .external_lex_state = 1},
  [196] = {.lex_state = 139, .external_lex_state = 1},
  [197] = {.lex_state = 139, .external_lex_state = 1},
  [198] = {.lex_state = 178, .external_lex_state = 1},
  [199] = {.lex_state = 139, .external_lex_state = 1},
  [200] = {.lex_state = 193, .external_lex_state = 1},
  [201] = {.lex_state = 139, .external_lex_state = 1},
  [202] = {.lex_state = 143, .external_lex_state = 1},
  [203] = {.lex_state = 193, .external_lex_state = 1},
  [204] = {.lex_state = 139, .external_lex_state = 1},
  [205] = {.lex_state = 139, .external_lex_state = 1},
  [206] = {.lex_state = 139, .external_lex_state = 1},
  [207] = {.lex_state = 139, .external_lex_state = 1},
  [208] = {.lex_state = 139, .external_lex_state = 1},
  [209] = {.lex_state = 139, .external_lex_state = 1},
  [210] = {.lex_state = 139, .external_lex_state = 1},
  [211] = {.lex_state = 143, .external_lex_state = 1},
  [212] = {.lex_state = 143, .external_lex_state = 1},
  [213] = {.lex_state = 193, .external_lex_state = 1},
  [214] = {.lex_state = 139, .external_lex_state = 1},
  [215] = {.lex_state = 143, .external_lex_state = 1},
  [216] = {.lex_state = 139, .external_lex_state = 1},
  [217] = {.lex_state = 143, .external_lex_state = 1},
  [218] = {.lex_state = 139, .external_lex_state = 1},
  [219] = {.lex_state = 139, .external_lex_state = 1},
  [220] = {.lex_state = 139, .external_lex_state = 1},
  [221] = {.lex_state = 179, .external_lex_state = 1},
  [222] = {.lex_state = 139, .external_lex_state = 1},
  [223] = {.lex_state = 187, .external_lex_state = 1},
  [224] = {.lex_state = 139, .external_lex_state = 1},
  [225] = {.lex_state = 139, .external_lex_state = 1},
  [226] = {.lex_state = 143, .external_lex_state = 1},
  [227] = {.lex_state = 191, .external_lex_state = 1},
  [228] = {.lex_state = 139, .external_lex_state = 1},
  [229] = {.lex_state = 191, .external_lex_state = 1},
  [230] = {.lex_state = 139, .external_lex_state = 1},
  [231] = {.lex_state = 143, .external_lex_state = 1},
  [232] = {.lex_state = 139, .external_lex_state = 1},
  [233] = {.lex_state = 132, .external_lex_state = 1},
  [234] = {.lex_state = 193, .external_lex_state = 1},
  [235] = {.lex_state = 143, .external_lex_state = 1},
  [236] = {.lex_state = 193, .external_lex_state = 1},
  [237] = {.lex_state = 143, .external_lex_state = 1},
  [238] = {.lex_state = 143, .external_lex_state = 1},
  [239] = {.lex_state = 139, .external_lex_state = 1},
  [240] = {.lex_state = 139, .external_lex_state = 1},
  [241] = {.lex_state = 139, .external_lex_state = 1},
  [242] = {.lex_state = 139, .external_lex_state = 1},
  [243] = {.lex_state = 193, .external_lex_state = 1},
  [244] = {.lex_state = 143, .external_lex_state = 1},
  [245] = {.lex_state = 139, .external_lex_state = 1},
  [246] = {.lex_state = 139, .external_lex_state = 1},
  [247] = {.lex_state = 139, .external_lex_state = 1},
  [248] = {.lex_state = 139, .external_lex_state = 1},
  [249] = {.lex_state = 139, .external_lex_state = 1},
  [250] = {.lex_state = 139, .external_lex_state = 1},
  [251] = {.lex_state = 143, .external_lex_state = 1},
  [252] = {.lex_state = 178, .external_lex_state = 1},
  [253] = {.lex_state = 143, .external_lex_state = 1},
  [254] = {.lex_state = 139, .external_lex_state = 1},
  [255] = {.lex_state = 191, .external_lex_state = 1},
  [256] = {.lex_state = 187, .external_lex_state = 1},
  [257] = {.lex_state = 139, .external_lex_state = 1},
  [258] = {.lex_state = 143, .external_lex_state = 1},
  [259] = {.lex_state = 139, .external_lex_state = 1},
  [260] = {.lex_state = 139, .external_lex_state = 1},
  [261] = {.lex_state = 139, .external_lex_state = 1},
  [262] = {.lex_state = 143, .external_lex_state = 1},
  [263] = {.lex_state = 191, .external_lex_state = 1},
  [264] = {.lex_state = 139, .external_lex_state = 1},
  [265] = {.lex_state = 191, .external_lex_state = 1},
  [266] = {.lex_state = 143, .external_lex_state = 1},
  [267] = {.lex_state = 143, .external_lex_state = 1},
  [268] = {.lex_state = 143, .external_lex_state = 1},
  [269] = {.lex_state = 139, .external_lex_state = 1},
  [270] = {.lex_state = 139, .external_lex_state = 1},
  [271] = {.lex_state = 193, .external_lex_state = 1},
  [272] = {.lex_state = 139, .external_lex_state = 1},
  [273] = {.lex_state = 139, .external_lex_state = 1},
  [274] = {.lex_state = 139, .external_lex_state = 1},
  [275] = {.lex_state = 139, .external_lex_state = 1},
  [276] = {.lex_state = 139, .external_lex_state = 1},
  [277] = {.lex_state = 178, .external_lex_state = 1},
  [278] = {.lex_state = 143, .external_lex_state = 1},
  [279] = {.lex_state = 191, .external_lex_state = 1},
  [280] = {.lex_state = 187, .external_lex_state = 1},
  [281] = {.lex_state = 143, .external_lex_state = 1},
  [282] = {.lex_state = 139, .external_lex_state = 1},
  [283] = {.lex_state = 143, .external_lex_state = 1},
  [284] = {.lex_state = 139, .external_lex_state = 1},
  [285] = {.lex_state = 193, .external_lex_state = 1},
  [286] = {.lex_state = 143, .external_lex_state = 1},
  [287] = {.lex_state = 143, .external_lex_state = 1},
  [288] = {.lex_state = 143, .external_lex_state = 1},
  [289] = {.lex_state = 139, .external_lex_state = 1},
  [290] = {.lex_state = 139, .external_lex_state = 1},
  [291] = {.lex_state = 139, .external_lex_state = 1},
  [292] = {.lex_state = 139, .external_lex_state = 1},
  [293] = {.lex_state = 143, .external_lex_state = 1},
  [294] = {.lex_state = 191, .external_lex_state = 1},
  [295] = {.lex_state = 143, .external_lex_state = 1},
  [296] = {.lex_state = 143, .external_lex_state = 1},
  [297] = {.lex_state = 143, .external_lex_state = 1},
  [298] = {.lex_state = 139, .external_lex_state = 1},
  [299] = {.lex_state = 143, .external_lex_state = 1},
  [300] = {.lex_state = 139, .external_lex_state = 1},
  [301] = {.lex_state = 143, .external_lex_state = 1},
  [302] = {.lex_state = 143, .external_lex_state = 1},
  [303] = {.lex_state = 143, .external_lex_state = 1},
  [304] = {.lex_state = 143, .external_lex_state = 1},
  [305] = {.lex_state = 143, .external_lex_state = 1},
  [306] = {.lex_state = 143, .external_lex_state = 1},
  [307] = {.lex_state = 143, .external_lex_state = 1},
  [308] = {.lex_state = 143, .external_lex_state = 1},
  [309] = {.lex_state = 143, .external_lex_state = 1},
  [310] = {.lex_state = 143, .external_lex_state = 1},
  [311] = {.lex_state = 143, .external_lex_state = 1},
  [312] = {.lex_state = 143, .external_lex_state = 1},
  [313] = {.lex_state = 132, .external_lex_state = 1},
  [314] = {.lex_state = 139, .external_lex_state = 1},
  [315] = {.lex_state = 143, .external_lex_state = 1},
  [316] = {.lex_state = 191, .external_lex_state = 1},
  [317] = {.lex_state = 139, .external_lex_state = 1},
  [318] = {.lex_state = 139, .external_lex_state = 1},
  [319] = {.lex_state = 143, .external_lex_state = 1},
  [320] = {.lex_state = 139, .external_lex_state = 1},
  [321] = {.lex_state = 191, .external_lex_state = 1},
  [322] = {.lex_state = 139, .external_lex_state = 1},
  [323] = {.lex_state = 191, .external_lex_state = 1},
  [324] = {.lex_state = 139, .external_lex_state = 1},
  [325] = {.lex_state = 143, .external_lex_state = 1},
  [326] = {.lex_state = 139, .external_lex_state = 1},
  [327] = {.lex_state = 139, .external_lex_state = 1},
  [328] = {.lex_state = 139, .external_lex_state = 1},
  [329] = {.lex_state = 191, .external_lex_state = 1},
  [330] = {.lex_state = 161, .external_lex_state = 1},
  [331] = {.lex_state = 186, .external_lex_state = 1},
  [332] = {.lex_state = 159, .external_lex_state = 1},
  [333] = {.lex_state = 184, .external_lex_state = 1},
  [334] = {.lex_state = 139, .external_lex_state = 1},
  [335] = {.lex_state = 139, .external_lex_state = 1},
  [336] = {.lex_state = 139, .external_lex_state = 1},
  [337] = {.lex_state = 139, .external_lex_state = 1},
  [338] = {.lex_state = 139, .external_lex_state = 1},
  [339] = {.lex_state = 139, .external_lex_state = 1},
  [340] = {.lex_state = 139, .external_lex_state = 1},
  [341] = {.lex_state = 139, .external_lex_state = 1},
  [342] = {.lex_state = 139, .external_lex_state = 1},
  [343] = {.lex_state = 139, .external_lex_state = 1},
  [344] = {.lex_state = 139, .external_lex_state = 1},
  [345] = {.lex_state = 139, .external_lex_state = 1},
  [346] = {.lex_state = 139, .external_lex_state = 1},
  [347] = {.lex_state = 139, .external_lex_state = 1},
  [348] = {.lex_state = 132, .external_lex_state = 1},
  [349] = {.lex_state = 139, .external_lex_state = 1},
  [350] = {.lex_state = 139, .external_lex_state = 1},
  [351] = {.lex_state = 139, .external_lex_state = 1},
  [352] = {.lex_state = 139, .external_lex_state = 1},
  [353] = {.lex_state = 139, .external_lex_state = 1},
  [354] = {.lex_state = 132, .external_lex_state = 1},
  [355] = {.lex_state = 139, .external_lex_state = 1},
  [356] = {.lex_state = 139, .external_lex_state = 1},
  [357] = {.lex_state = 139, .external_lex_state = 1},
  [358] = {.lex_state = 191, .external_lex_state = 1},
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
    [aux_sym__ocaml] = STATE(34),
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
    [sym_type] = STATE(37),
    [sym_terminal_alias_attrs] = STATE(38),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [10] = {
    [sym_strict_actual] = STATE(39),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [11] = {
    [sym_type] = STATE(40),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [12] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_ocaml] = STATE(42),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(49),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(61),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
  },
  [13] = {
    [sym_grammar_attribute] = STATE(7),
    [sym_header] = STATE(7),
    [sym_priority_keyword] = STATE(14),
    [sym_declaration] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
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
    [sym_symbol] = STATE(45),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [15] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [16] = {
    [sym_ocaml_type] = STATE(47),
    [aux_sym_ocaml_type_repeat1] = STATE(48),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(67),
    [aux_sym_ocaml_type_token1] = ACTIONS(69),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [17] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(71),
    [anon_sym_PERCENTright] = ACTIONS(71),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(71),
    [anon_sym_PERCENTparameter] = ACTIONS(71),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(71),
    [anon_sym_PERCENTtype] = ACTIONS(71),
    [anon_sym_PERCENTleft] = ACTIONS(71),
    [sym_lid] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(71),
    [anon_sym_PERCENTattribute] = ACTIONS(71),
    [anon_sym_PERCENTnonassoc] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(71),
    [anon_sym_PERCENTtoken] = ACTIONS(71),
  },
  [18] = {
    [sym_non_terminal] = STATE(50),
    [aux_sym_declaration_repeat4] = STATE(50),
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
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PERCENTattribute] = ACTIONS(73),
    [anon_sym_PERCENTnonassoc] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_PERCENTtoken] = ACTIONS(73),
  },
  [19] = {
    [sym_non_terminal] = STATE(51),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(1),
  },
  [20] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(77),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(77),
    [anon_sym_PERCENTtype] = ACTIONS(77),
    [anon_sym_PERCENTleft] = ACTIONS(77),
    [sym_lid] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_qid] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_PERCENTprec] = ACTIONS(77),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(77),
    [anon_sym_PERCENTstart] = ACTIONS(77),
    [anon_sym_PERCENTright] = ACTIONS(77),
    [sym_uid] = ACTIONS(77),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(77),
    [anon_sym_PERCENTparameter] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(77),
    [anon_sym_PERCENTattribute] = ACTIONS(77),
    [anon_sym_PERCENTnonassoc] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_PERCENTtoken] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
  },
  [21] = {
    [sym_qid] = ACTIONS(79),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(79),
    [anon_sym_PERCENTpublic] = ACTIONS(81),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(79),
    [sym_line_comment] = ACTIONS(1),
  },
  [22] = {
    [sym_qid] = ACTIONS(79),
    [anon_sym_PERCENTinline] = ACTIONS(81),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(79),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(85),
  },
  [23] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_postlude] = STATE(54),
    [sym_ocaml] = STATE(55),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
  },
  [24] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(89),
    [sym_line_comment] = ACTIONS(1),
  },
  [25] = {
    [aux_sym_declaration_repeat5] = STATE(60),
    [sym_attribute] = STATE(60),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [sym_line_comment] = ACTIONS(1),
  },
  [26] = {
    [sym_symbol] = STATE(61),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [27] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(63),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(63),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(97),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [28] = {
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
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(73),
    [anon_sym_PERCENTattribute] = ACTIONS(73),
    [anon_sym_PERCENTnonassoc] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_PERCENTtoken] = ACTIONS(73),
  },
  [29] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [sym_modifier] = STATE(67),
    [aux_sym_declaration_repeat5] = STATE(68),
    [aux_sym_declaration_repeat3] = STATE(69),
    [sym_attribute] = STATE(68),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_lid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(101),
  },
  [30] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(103),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(103),
    [anon_sym_PERCENTtype] = ACTIONS(103),
    [anon_sym_PERCENTleft] = ACTIONS(103),
    [sym_lid] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(103),
    [anon_sym_PERCENTstart] = ACTIONS(103),
    [anon_sym_PERCENTright] = ACTIONS(103),
    [sym_uid] = ACTIONS(103),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(103),
    [anon_sym_PERCENTparameter] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(103),
    [anon_sym_PERCENTattribute] = ACTIONS(103),
    [anon_sym_PERCENTnonassoc] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_PERCENTtoken] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
  },
  [31] = {
    [aux_sym__ocaml] = STATE(72),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(107),
    [aux_sym__ocaml_token3] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(107),
    [aux_sym__ocaml_token2] = ACTIONS(107),
  },
  [32] = {
    [aux_sym__ocaml] = STATE(73),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(111),
    [aux_sym__ocaml_token3] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(111),
    [aux_sym__ocaml_token2] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(109),
  },
  [33] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(113),
    [anon_sym_PERCENTright] = ACTIONS(113),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(113),
    [anon_sym_PERCENTparameter] = ACTIONS(113),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(113),
    [anon_sym_PERCENTtype] = ACTIONS(113),
    [anon_sym_PERCENTleft] = ACTIONS(113),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(113),
    [anon_sym_PERCENTattribute] = ACTIONS(113),
    [anon_sym_PERCENTnonassoc] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(113),
    [anon_sym_PERCENTtoken] = ACTIONS(113),
  },
  [34] = {
    [aux_sym__ocaml] = STATE(74),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(115),
    [aux_sym__ocaml_token3] = ACTIONS(115),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(115),
    [aux_sym__ocaml_token2] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(117),
  },
  [35] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(1),
  },
  [36] = {
    [aux_sym_declaration_repeat5] = STATE(77),
    [sym_attribute] = STATE(77),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(123),
    [anon_sym_PERCENTright] = ACTIONS(123),
    [sym_uid] = ACTIONS(123),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(123),
    [anon_sym_PERCENTparameter] = ACTIONS(123),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(123),
    [anon_sym_PERCENTtype] = ACTIONS(123),
    [anon_sym_PERCENTleft] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(123),
    [sym_qid] = ACTIONS(125),
    [anon_sym_PERCENTattribute] = ACTIONS(123),
    [anon_sym_PERCENTnonassoc] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(123),
    [anon_sym_PERCENTtoken] = ACTIONS(123),
  },
  [37] = {
    [sym_terminal_alias_attrs] = STATE(78),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(59),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [38] = {
    [aux_sym_declaration_repeat1] = STATE(80),
    [sym_terminal_alias_attrs] = STATE(80),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(73),
    [anon_sym_PERCENTright] = ACTIONS(73),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(73),
    [anon_sym_PERCENTparameter] = ACTIONS(73),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(73),
    [anon_sym_PERCENTtype] = ACTIONS(73),
    [anon_sym_PERCENTleft] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(73),
    [anon_sym_PERCENTattribute] = ACTIONS(73),
    [anon_sym_PERCENTnonassoc] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_PERCENTtoken] = ACTIONS(73),
  },
  [39] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [sym_modifier] = STATE(67),
    [aux_sym_declaration_repeat3] = STATE(81),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(73),
    [anon_sym_PERCENTright] = ACTIONS(73),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(73),
    [anon_sym_PERCENTparameter] = ACTIONS(73),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(73),
    [anon_sym_PERCENTtype] = ACTIONS(73),
    [anon_sym_PERCENTleft] = ACTIONS(73),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(73),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_PERCENTattribute] = ACTIONS(73),
    [anon_sym_PERCENTnonassoc] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_PERCENTtoken] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [40] = {
    [sym_strict_actual] = STATE(82),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [41] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(129),
    [anon_sym_PERCENTright] = ACTIONS(129),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(129),
    [anon_sym_PERCENTparameter] = ACTIONS(129),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(129),
    [anon_sym_PERCENTtype] = ACTIONS(129),
    [anon_sym_PERCENTleft] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(129),
    [anon_sym_PERCENTattribute] = ACTIONS(129),
    [anon_sym_PERCENTnonassoc] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(129),
    [anon_sym_PERCENTtoken] = ACTIONS(129),
  },
  [42] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [43] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(84),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(84),
    [aux_sym_source_file_repeat2] = STATE(84),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(97),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [44] = {
    [sym_grammar_attribute] = STATE(7),
    [sym_header] = STATE(7),
    [sym_priority_keyword] = STATE(14),
    [sym_declaration] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(133),
    [anon_sym_PERCENTright] = ACTIONS(136),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(139),
    [anon_sym_PERCENTparameter] = ACTIONS(141),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(144),
    [anon_sym_PERCENTtype] = ACTIONS(147),
    [anon_sym_PERCENTleft] = ACTIONS(136),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(150),
    [anon_sym_PERCENTattribute] = ACTIONS(153),
    [anon_sym_PERCENTnonassoc] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(159),
    [anon_sym_PERCENTtoken] = ACTIONS(162),
  },
  [45] = {
    [sym_symbol] = STATE(86),
    [aux_sym_declaration_repeat2] = STATE(86),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(73),
    [anon_sym_PERCENTright] = ACTIONS(73),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(73),
    [anon_sym_PERCENTparameter] = ACTIONS(73),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(73),
    [anon_sym_PERCENTtype] = ACTIONS(73),
    [anon_sym_PERCENTleft] = ACTIONS(73),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(73),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_PERCENTattribute] = ACTIONS(73),
    [anon_sym_PERCENTnonassoc] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(73),
    [anon_sym_PERCENTtoken] = ACTIONS(73),
  },
  [46] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(167),
    [anon_sym_PERCENTright] = ACTIONS(167),
    [sym_uid] = ACTIONS(167),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(167),
    [anon_sym_PERCENTparameter] = ACTIONS(167),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(167),
    [anon_sym_PERCENTtype] = ACTIONS(167),
    [anon_sym_PERCENTleft] = ACTIONS(167),
    [sym_lid] = ACTIONS(167),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(167),
    [sym_qid] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_PERCENTprec] = ACTIONS(167),
    [anon_sym_PERCENTattribute] = ACTIONS(167),
    [anon_sym_PERCENTnonassoc] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(167),
    [anon_sym_PERCENTtoken] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
  },
  [47] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(169),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [48] = {
    [aux_sym_ocaml_type_repeat1] = STATE(88),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(171),
    [aux_sym_ocaml_type_token1] = ACTIONS(173),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [49] = {
    [sym_non_terminal] = STATE(89),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(1),
  },
  [50] = {
    [sym_non_terminal] = STATE(90),
    [aux_sym_declaration_repeat4] = STATE(90),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [51] = {
    [sym_non_terminal] = STATE(91),
    [aux_sym_declaration_repeat4] = STATE(91),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [52] = {
    [sym_qid] = ACTIONS(177),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(177),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(177),
    [sym_line_comment] = ACTIONS(1),
  },
  [53] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(1),
  },
  [54] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [55] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [56] = {
    [aux_sym_declaration_repeat5] = STATE(95),
    [sym_equality_symbol] = STATE(96),
    [sym_attribute] = STATE(95),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [57] = {
    [sym_symbol] = STATE(97),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [58] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_ocaml] = STATE(99),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(189),
  },
  [59] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(108),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(111),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [60] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(203),
    [sym_line_comment] = ACTIONS(1),
  },
  [61] = {
    [aux_sym_declaration_repeat5] = STATE(115),
    [sym_attribute] = STATE(115),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(203),
    [sym_line_comment] = ACTIONS(1),
  },
  [62] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_postlude] = STATE(116),
    [sym_ocaml] = STATE(55),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
  },
  [63] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(63),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(63),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_qid] = ACTIONS(205),
    [anon_sym_PERCENTinline] = ACTIONS(208),
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_uid] = ACTIONS(205),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(211),
    [anon_sym_PERCENTpublic] = ACTIONS(213),
    [anon_sym_let] = ACTIONS(216),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(219),
  },
  [64] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(222),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(222),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(222),
    [anon_sym_PERCENTtype] = ACTIONS(222),
    [anon_sym_PERCENTleft] = ACTIONS(222),
    [sym_lid] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_qid] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_PERCENTprec] = ACTIONS(222),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(222),
    [anon_sym_PERCENTstart] = ACTIONS(222),
    [anon_sym_PERCENTright] = ACTIONS(222),
    [sym_uid] = ACTIONS(222),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(222),
    [anon_sym_PERCENTparameter] = ACTIONS(222),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(222),
    [anon_sym_PERCENTattribute] = ACTIONS(222),
    [anon_sym_PERCENTnonassoc] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_PERCENTtoken] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
  },
  [65] = {
    [sym_strict_actual] = STATE(117),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
  },
  [66] = {
    [sym_modifier] = STATE(67),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(224),
    [anon_sym_PERCENTright] = ACTIONS(224),
    [sym_uid] = ACTIONS(224),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(224),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(224),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(224),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(224),
    [anon_sym_PERCENTtype] = ACTIONS(224),
    [anon_sym_PERCENTleft] = ACTIONS(224),
    [sym_lid] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [sym_qid] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(224),
    [anon_sym_PERCENTattribute] = ACTIONS(224),
    [anon_sym_PERCENTnonassoc] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(224),
    [anon_sym_PERCENTtoken] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [67] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(226),
    [anon_sym_PERCENTright] = ACTIONS(226),
    [sym_uid] = ACTIONS(226),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(226),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(226),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(226),
    [anon_sym_PERCENTtype] = ACTIONS(226),
    [anon_sym_PERCENTleft] = ACTIONS(226),
    [sym_lid] = ACTIONS(226),
    [anon_sym_COMMA] = ACTIONS(226),
    [sym_qid] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(226),
    [anon_sym_PERCENTattribute] = ACTIONS(226),
    [anon_sym_PERCENTnonassoc] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(226),
    [anon_sym_PERCENTtoken] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(226),
  },
  [68] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [69] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat5] = STATE(118),
    [aux_sym_declaration_repeat3] = STATE(119),
    [sym_attribute] = STATE(118),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(101),
  },
  [70] = {
    [sym_strict_actual] = STATE(120),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
  },
  [71] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(228),
    [anon_sym_LBRACE] = ACTIONS(228),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(228),
    [aux_sym__ocaml_token3] = ACTIONS(228),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_PERCENT] = ACTIONS(228),
    [aux_sym__ocaml_token2] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
  },
  [72] = {
    [aux_sym__ocaml] = STATE(74),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(115),
    [aux_sym__ocaml_token3] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(115),
    [aux_sym__ocaml_token2] = ACTIONS(115),
  },
  [73] = {
    [aux_sym__ocaml] = STATE(74),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(115),
    [aux_sym__ocaml_token3] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(115),
    [aux_sym__ocaml_token2] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(232),
  },
  [74] = {
    [aux_sym__ocaml] = STATE(74),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(234),
    [aux_sym__ocaml_token3] = ACTIONS(234),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(234),
    [aux_sym__ocaml_token2] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(228),
  },
  [75] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(243),
    [anon_sym_PERCENTright] = ACTIONS(243),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(243),
    [anon_sym_PERCENTparameter] = ACTIONS(243),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(243),
    [anon_sym_PERCENTtype] = ACTIONS(243),
    [anon_sym_PERCENTleft] = ACTIONS(243),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(243),
    [anon_sym_PERCENTattribute] = ACTIONS(243),
    [anon_sym_PERCENTnonassoc] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(243),
    [anon_sym_PERCENTtoken] = ACTIONS(243),
  },
  [76] = {
    [aux_sym_declaration_repeat5] = STATE(122),
    [sym_attribute] = STATE(122),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(245),
    [anon_sym_PERCENTright] = ACTIONS(245),
    [sym_uid] = ACTIONS(245),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(245),
    [anon_sym_PERCENTparameter] = ACTIONS(245),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(245),
    [anon_sym_PERCENTtype] = ACTIONS(245),
    [anon_sym_PERCENTleft] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(245),
    [anon_sym_PERCENTattribute] = ACTIONS(245),
    [anon_sym_PERCENTnonassoc] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(245),
    [anon_sym_PERCENTtoken] = ACTIONS(245),
  },
  [77] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(245),
    [anon_sym_PERCENTright] = ACTIONS(245),
    [sym_uid] = ACTIONS(245),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(245),
    [anon_sym_PERCENTparameter] = ACTIONS(245),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(245),
    [anon_sym_PERCENTtype] = ACTIONS(245),
    [anon_sym_PERCENTleft] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(245),
    [anon_sym_PERCENTattribute] = ACTIONS(245),
    [anon_sym_PERCENTnonassoc] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(245),
    [anon_sym_PERCENTtoken] = ACTIONS(245),
  },
  [78] = {
    [aux_sym_declaration_repeat1] = STATE(123),
    [sym_terminal_alias_attrs] = STATE(123),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [79] = {
    [sym_terminal_alias_attrs] = STATE(124),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(59),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [80] = {
    [aux_sym_declaration_repeat1] = STATE(125),
    [sym_terminal_alias_attrs] = STATE(125),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [81] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(119),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [82] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [sym_modifier] = STATE(67),
    [aux_sym_declaration_repeat3] = STATE(126),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [83] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(247),
    [anon_sym_PERCENTright] = ACTIONS(247),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(247),
    [anon_sym_PERCENTparameter] = ACTIONS(247),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(247),
    [anon_sym_PERCENTtype] = ACTIONS(247),
    [anon_sym_PERCENTleft] = ACTIONS(247),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(247),
    [anon_sym_PERCENTattribute] = ACTIONS(247),
    [anon_sym_PERCENTnonassoc] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(247),
    [anon_sym_PERCENTtoken] = ACTIONS(247),
  },
  [84] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(63),
    [sym_flags] = STATE(26),
    [sym_new_rule] = STATE(63),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_qid] = ACTIONS(33),
    [anon_sym_PERCENTinline] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(39),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(249),
    [anon_sym_let] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(45),
  },
  [85] = {
    [sym_symbol] = STATE(128),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [86] = {
    [sym_symbol] = STATE(129),
    [aux_sym_declaration_repeat2] = STATE(129),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(175),
    [anon_sym_PERCENTright] = ACTIONS(175),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(175),
    [anon_sym_PERCENTparameter] = ACTIONS(175),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(175),
    [anon_sym_PERCENTtype] = ACTIONS(175),
    [anon_sym_PERCENTleft] = ACTIONS(175),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(175),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_PERCENTattribute] = ACTIONS(175),
    [anon_sym_PERCENTnonassoc] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(175),
    [anon_sym_PERCENTtoken] = ACTIONS(175),
  },
  [87] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(251),
    [anon_sym_PERCENTright] = ACTIONS(251),
    [sym_uid] = ACTIONS(251),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(251),
    [anon_sym_PERCENTparameter] = ACTIONS(251),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(251),
    [anon_sym_PERCENTtype] = ACTIONS(251),
    [anon_sym_PERCENTleft] = ACTIONS(251),
    [sym_lid] = ACTIONS(251),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(251),
    [sym_qid] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_PERCENTprec] = ACTIONS(251),
    [anon_sym_PERCENTattribute] = ACTIONS(251),
    [anon_sym_PERCENTnonassoc] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(251),
    [anon_sym_PERCENTtoken] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
  },
  [88] = {
    [aux_sym_ocaml_type_repeat1] = STATE(88),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(253),
    [aux_sym_ocaml_type_token1] = ACTIONS(255),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [89] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(258),
    [anon_sym_PERCENTright] = ACTIONS(258),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(258),
    [anon_sym_PERCENTparameter] = ACTIONS(258),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(258),
    [anon_sym_PERCENTtype] = ACTIONS(258),
    [anon_sym_PERCENTleft] = ACTIONS(258),
    [sym_lid] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(258),
    [anon_sym_PERCENTattribute] = ACTIONS(258),
    [anon_sym_PERCENTnonassoc] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(258),
    [anon_sym_PERCENTtoken] = ACTIONS(258),
  },
  [90] = {
    [sym_non_terminal] = STATE(90),
    [aux_sym_declaration_repeat4] = STATE(90),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(258),
    [anon_sym_PERCENTright] = ACTIONS(258),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(258),
    [anon_sym_PERCENTparameter] = ACTIONS(258),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(258),
    [anon_sym_PERCENTtype] = ACTIONS(258),
    [anon_sym_PERCENTleft] = ACTIONS(258),
    [sym_lid] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(258),
    [anon_sym_PERCENTattribute] = ACTIONS(258),
    [anon_sym_PERCENTnonassoc] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(258),
    [anon_sym_PERCENTtoken] = ACTIONS(258),
  },
  [91] = {
    [sym_non_terminal] = STATE(90),
    [aux_sym_declaration_repeat4] = STATE(90),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(266),
    [anon_sym_PERCENTright] = ACTIONS(266),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(266),
    [anon_sym_PERCENTparameter] = ACTIONS(266),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(266),
    [anon_sym_PERCENTtype] = ACTIONS(266),
    [anon_sym_PERCENTleft] = ACTIONS(266),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_PERCENTattribute] = ACTIONS(266),
    [anon_sym_PERCENTnonassoc] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(266),
    [anon_sym_PERCENTtoken] = ACTIONS(266),
  },
  [92] = {
    [aux_sym_declaration_repeat5] = STATE(131),
    [sym_equality_symbol] = STATE(132),
    [sym_attribute] = STATE(131),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [93] = {
    [sym_qid] = ACTIONS(270),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(270),
    [sym_uid] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_PERCENTprec] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym__] = ACTIONS(272),
    [sym_lid] = ACTIONS(272),
  },
  [94] = {
    [sym_symbol] = STATE(133),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [95] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_equality_symbol] = STATE(132),
    [sym_attribute] = STATE(114),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [96] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(139),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [97] = {
    [aux_sym_old_rule_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [98] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(290),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(290),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(290),
    [anon_sym_PERCENTtype] = ACTIONS(290),
    [anon_sym_PERCENTleft] = ACTIONS(290),
    [sym_lid] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(290),
    [sym_qid] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_PERCENTprec] = ACTIONS(290),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(290),
    [anon_sym_PERCENTstart] = ACTIONS(290),
    [anon_sym_PERCENTright] = ACTIONS(290),
    [sym_uid] = ACTIONS(290),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(290),
    [anon_sym_PERCENTparameter] = ACTIONS(290),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(290),
    [anon_sym_PERCENTattribute] = ACTIONS(290),
    [anon_sym_PERCENTnonassoc] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_PERCENTtoken] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(290),
  },
  [99] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(294),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [100] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_ocaml] = STATE(152),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
  },
  [101] = {
    [sym_symbol] = STATE(153),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
  },
  [102] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK_AT] = ACTIONS(77),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(77),
    [sym_lid] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_qid] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_PERCENTprec] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
  },
  [103] = {
    [aux_sym_production_group_repeat1] = STATE(155),
    [sym_symbol] = STATE(104),
    [sym_actual] = STATE(107),
    [aux_sym_production_group_repeat2] = STATE(156),
    [sym_type] = STATE(157),
    [sym_action] = STATE(157),
    [sym__high_prec_bar] = STATE(110),
    [sym_precedence] = STATE(158),
    [sym_producer] = STATE(155),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [104] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LBRACK_AT] = ACTIONS(300),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(300),
    [sym_lid] = ACTIONS(300),
    [sym_qid] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_PERCENTprec] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(300),
  },
  [105] = {
    [sym_precedence] = STATE(160),
    [sym_qid] = ACTIONS(304),
    [anon_sym_PERCENTinline] = ACTIONS(304),
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym_uid] = ACTIONS(304),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(304),
    [anon_sym_PERCENTpublic] = ACTIONS(304),
    [anon_sym_let] = ACTIONS(306),
    [anon_sym_PERCENTprec] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(306),
  },
  [106] = {
    [sym_action] = STATE(157),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym_type] = STATE(157),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [107] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_modifier] = STATE(162),
    [aux_sym_declaration_repeat5] = STATE(163),
    [sym_attribute] = STATE(163),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(310),
    [sym_lid] = ACTIONS(310),
    [sym_qid] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_PERCENTprec] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [108] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(166),
    [aux_sym_old_rule_repeat3] = STATE(165),
    [sym_qid] = ACTIONS(314),
    [anon_sym_PERCENTinline] = ACTIONS(314),
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_uid] = ACTIONS(314),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(314),
    [anon_sym_PERCENTpublic] = ACTIONS(314),
    [anon_sym_let] = ACTIONS(316),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(316),
  },
  [109] = {
    [sym_action] = STATE(157),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(156),
    [sym_type] = STATE(157),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [110] = {
    [aux_sym_production_group_repeat1] = STATE(168),
    [sym_symbol] = STATE(104),
    [sym_precedence] = STATE(169),
    [sym_actual] = STATE(107),
    [sym_producer] = STATE(168),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(322),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
    [sym_lid] = ACTIONS(199),
  },
  [111] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(170),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [112] = {
    [sym_symbol] = STATE(171),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [113] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(170),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(172),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [114] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(324),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(326),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(324),
    [anon_sym_PERCENTtype] = ACTIONS(324),
    [anon_sym_PERCENTleft] = ACTIONS(324),
    [sym_lid] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_qid] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_PERCENTprec] = ACTIONS(324),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(324),
    [anon_sym_PERCENTstart] = ACTIONS(324),
    [anon_sym_PERCENTright] = ACTIONS(324),
    [sym_uid] = ACTIONS(324),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(324),
    [anon_sym_PERCENTparameter] = ACTIONS(324),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(324),
    [anon_sym_PERCENTattribute] = ACTIONS(324),
    [anon_sym_PERCENTnonassoc] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_PERCENTtoken] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_QMARK] = ACTIONS(324),
  },
  [115] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(333),
    [sym_line_comment] = ACTIONS(1),
  },
  [116] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(335),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [117] = {
    [sym_modifier] = STATE(67),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(337),
    [anon_sym_PERCENTright] = ACTIONS(337),
    [sym_uid] = ACTIONS(337),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(337),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(337),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(337),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(337),
    [anon_sym_PERCENTtype] = ACTIONS(337),
    [anon_sym_PERCENTleft] = ACTIONS(337),
    [sym_lid] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_qid] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(337),
    [anon_sym_PERCENTattribute] = ACTIONS(337),
    [anon_sym_PERCENTnonassoc] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(337),
    [anon_sym_PERCENTtoken] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [118] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(266),
    [anon_sym_PERCENTright] = ACTIONS(266),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(266),
    [anon_sym_PERCENTparameter] = ACTIONS(266),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(266),
    [anon_sym_PERCENTtype] = ACTIONS(266),
    [anon_sym_PERCENTleft] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(266),
    [anon_sym_PERCENTattribute] = ACTIONS(266),
    [anon_sym_PERCENTnonassoc] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(266),
    [anon_sym_PERCENTtoken] = ACTIONS(266),
  },
  [119] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(119),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(337),
    [anon_sym_PERCENTright] = ACTIONS(337),
    [sym_uid] = ACTIONS(339),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(337),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(337),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(337),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(337),
    [anon_sym_PERCENTtype] = ACTIONS(337),
    [anon_sym_PERCENTleft] = ACTIONS(337),
    [sym_lid] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(342),
    [sym_qid] = ACTIONS(339),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(337),
    [anon_sym_PERCENTattribute] = ACTIONS(337),
    [anon_sym_PERCENTnonassoc] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(337),
    [anon_sym_PERCENTtoken] = ACTIONS(337),
  },
  [120] = {
    [aux_sym_strict_actual_repeat1] = STATE(177),
    [sym_modifier] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [121] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(349),
    [aux_sym__ocaml_token3] = ACTIONS(349),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(349),
    [aux_sym__ocaml_token2] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
  },
  [122] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(353),
    [anon_sym_PERCENTright] = ACTIONS(353),
    [sym_uid] = ACTIONS(353),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(353),
    [anon_sym_PERCENTparameter] = ACTIONS(353),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(353),
    [anon_sym_PERCENTtype] = ACTIONS(353),
    [anon_sym_PERCENTleft] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(353),
    [anon_sym_PERCENTattribute] = ACTIONS(353),
    [anon_sym_PERCENTnonassoc] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(353),
    [anon_sym_PERCENTtoken] = ACTIONS(353),
  },
  [123] = {
    [aux_sym_declaration_repeat1] = STATE(125),
    [sym_terminal_alias_attrs] = STATE(125),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(266),
    [anon_sym_PERCENTright] = ACTIONS(266),
    [sym_uid] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(266),
    [anon_sym_PERCENTparameter] = ACTIONS(266),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(266),
    [anon_sym_PERCENTtype] = ACTIONS(266),
    [anon_sym_PERCENTleft] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(266),
    [anon_sym_PERCENTattribute] = ACTIONS(266),
    [anon_sym_PERCENTnonassoc] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(266),
    [anon_sym_PERCENTtoken] = ACTIONS(266),
  },
  [124] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(355),
    [anon_sym_PERCENTright] = ACTIONS(355),
    [sym_uid] = ACTIONS(355),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(355),
    [anon_sym_PERCENTparameter] = ACTIONS(355),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(355),
    [anon_sym_PERCENTtype] = ACTIONS(355),
    [anon_sym_PERCENTleft] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(355),
    [anon_sym_PERCENTattribute] = ACTIONS(355),
    [anon_sym_PERCENTnonassoc] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(355),
    [anon_sym_PERCENTtoken] = ACTIONS(355),
  },
  [125] = {
    [aux_sym_declaration_repeat1] = STATE(125),
    [sym_terminal_alias_attrs] = STATE(125),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(355),
    [anon_sym_PERCENTright] = ACTIONS(355),
    [sym_uid] = ACTIONS(357),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(355),
    [anon_sym_PERCENTparameter] = ACTIONS(355),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(355),
    [anon_sym_PERCENTtype] = ACTIONS(355),
    [anon_sym_PERCENTleft] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(355),
    [anon_sym_PERCENTattribute] = ACTIONS(355),
    [anon_sym_PERCENTnonassoc] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(355),
    [anon_sym_PERCENTtoken] = ACTIONS(355),
  },
  [126] = {
    [sym_strict_actual] = STATE(66),
    [sym_symbol] = STATE(30),
    [aux_sym_declaration_repeat3] = STATE(119),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(266),
    [anon_sym_PERCENTright] = ACTIONS(266),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(266),
    [anon_sym_PERCENTparameter] = ACTIONS(266),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(266),
    [anon_sym_PERCENTtype] = ACTIONS(266),
    [anon_sym_PERCENTleft] = ACTIONS(266),
    [sym_lid] = ACTIONS(33),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(266),
    [sym_qid] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_PERCENTattribute] = ACTIONS(266),
    [anon_sym_PERCENTnonassoc] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(266),
    [anon_sym_PERCENTtoken] = ACTIONS(266),
  },
  [127] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_postlude] = STATE(178),
    [sym_ocaml] = STATE(55),
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(51),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
  },
  [128] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(363),
    [anon_sym_PERCENTright] = ACTIONS(363),
    [sym_uid] = ACTIONS(363),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(363),
    [anon_sym_PERCENTparameter] = ACTIONS(363),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(363),
    [anon_sym_PERCENTtype] = ACTIONS(363),
    [anon_sym_PERCENTleft] = ACTIONS(363),
    [sym_lid] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_qid] = ACTIONS(363),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(363),
    [anon_sym_PERCENTattribute] = ACTIONS(363),
    [anon_sym_PERCENTnonassoc] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(363),
    [anon_sym_PERCENTtoken] = ACTIONS(363),
  },
  [129] = {
    [sym_symbol] = STATE(129),
    [aux_sym_declaration_repeat2] = STATE(129),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(363),
    [anon_sym_PERCENTright] = ACTIONS(363),
    [sym_uid] = ACTIONS(365),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(363),
    [anon_sym_PERCENTparameter] = ACTIONS(363),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(363),
    [anon_sym_PERCENTtype] = ACTIONS(363),
    [anon_sym_PERCENTleft] = ACTIONS(363),
    [sym_lid] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(368),
    [sym_qid] = ACTIONS(365),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(363),
    [anon_sym_PERCENTattribute] = ACTIONS(363),
    [anon_sym_PERCENTnonassoc] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(363),
    [anon_sym_PERCENTtoken] = ACTIONS(363),
  },
  [130] = {
    [sym_symbol] = STATE(179),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [131] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_equality_symbol] = STATE(181),
    [sym_attribute] = STATE(114),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [132] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(182),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [133] = {
    [aux_sym_old_rule_repeat1] = STATE(184),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(373),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [134] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [135] = {
    [sym_pattern] = STATE(186),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(278),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(282),
  },
  [136] = {
    [sym_symbol] = STATE(138),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(187),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [137] = {
    [anon_sym_PERCENTinline] = ACTIONS(77),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(77),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(77),
    [anon_sym_LBRACK_AT] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(375),
    [sym_lid] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_qid] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PERCENTpublic] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
  },
  [138] = {
    [aux_sym_declaration_repeat5] = STATE(189),
    [sym_attribute] = STATE(189),
    [anon_sym_PERCENTinline] = ACTIONS(381),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(381),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(381),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(385),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(385),
    [sym_qid] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_PERCENTpublic] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
  },
  [139] = {
    [sym_qid] = ACTIONS(389),
    [anon_sym_PERCENTinline] = ACTIONS(389),
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym_uid] = ACTIONS(389),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(389),
    [anon_sym_PERCENTpublic] = ACTIONS(389),
    [anon_sym_let] = ACTIONS(391),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(391),
  },
  [140] = {
    [sym_precedence] = STATE(190),
    [sym_qid] = ACTIONS(393),
    [anon_sym_PERCENTinline] = ACTIONS(393),
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_uid] = ACTIONS(393),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(393),
    [anon_sym_PERCENTpublic] = ACTIONS(393),
    [anon_sym_let] = ACTIONS(395),
    [anon_sym_PERCENTprec] = ACTIONS(308),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(393),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(395),
  },
  [141] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(397),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [142] = {
    [anon_sym_PERCENTinline] = ACTIONS(399),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(399),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(399),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(401),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(399),
    [sym_lid] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(399),
    [sym_qid] = ACTIONS(399),
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_PERCENTpublic] = ACTIONS(399),
    [anon_sym_PERCENTprec] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
  },
  [143] = {
    [aux_sym_expression_repeat1] = STATE(193),
    [sym_qid] = ACTIONS(403),
    [anon_sym_PERCENTinline] = ACTIONS(403),
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym_uid] = ACTIONS(403),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(403),
    [anon_sym_PERCENTpublic] = ACTIONS(403),
    [anon_sym_let] = ACTIONS(405),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(407),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(405),
  },
  [144] = {
    [sym_type] = STATE(142),
    [sym_action] = STATE(142),
    [sym_menhir_action] = STATE(190),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [145] = {
    [sym_modifier] = STATE(195),
    [anon_sym_PERCENTinline] = ACTIONS(409),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(409),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(409),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(411),
    [sym_qid] = ACTIONS(409),
    [anon_sym_PLUS] = ACTIONS(413),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_PERCENTpublic] = ACTIONS(409),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(413),
    [anon_sym_QMARK] = ACTIONS(413),
  },
  [146] = {
    [anon_sym_PERCENTinline] = ACTIONS(409),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(409),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(409),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(409),
    [sym_lid] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym_qid] = ACTIONS(409),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_PERCENTpublic] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
  },
  [147] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(417),
    [sym_line_comment] = ACTIONS(1),
  },
  [148] = {
    [sym_symbol] = STATE(197),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [149] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [150] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(421),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(421),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(421),
    [anon_sym_PERCENTtype] = ACTIONS(421),
    [anon_sym_PERCENTleft] = ACTIONS(421),
    [sym_lid] = ACTIONS(421),
    [anon_sym_COMMA] = ACTIONS(421),
    [sym_qid] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_PERCENTprec] = ACTIONS(421),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(421),
    [anon_sym_PERCENTstart] = ACTIONS(421),
    [anon_sym_PERCENTright] = ACTIONS(421),
    [sym_uid] = ACTIONS(421),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(421),
    [anon_sym_PERCENTparameter] = ACTIONS(421),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(421),
    [anon_sym_PERCENTattribute] = ACTIONS(421),
    [anon_sym_PERCENTnonassoc] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PERCENTtoken] = ACTIONS(421),
    [anon_sym_EQ_EQ] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_QMARK] = ACTIONS(421),
  },
  [151] = {
    [anon_sym_PERCENTinline] = ACTIONS(425),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(425),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(425),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(427),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(425),
    [sym_lid] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(425),
    [sym_qid] = ACTIONS(425),
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_PERCENTpublic] = ACTIONS(425),
    [anon_sym_PERCENTprec] = ACTIONS(425),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
  },
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(429),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [153] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [sym_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(431),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(431),
    [sym_lid] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(431),
    [sym_qid] = ACTIONS(431),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_PERCENTpublic] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(431),
  },
  [154] = {
    [sym_symbol] = STATE(104),
    [sym_actual] = STATE(201),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [155] = {
    [aux_sym_production_group_repeat1] = STATE(155),
    [sym_symbol] = STATE(104),
    [sym_actual] = STATE(107),
    [sym_producer] = STATE(155),
    [sym_qid] = ACTIONS(435),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_PERCENTprec] = ACTIONS(438),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(438),
    [sym_lid] = ACTIONS(440),
  },
  [156] = {
    [sym_action] = STATE(202),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym_type] = STATE(202),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [157] = {
    [sym_precedence] = STATE(203),
    [sym_qid] = ACTIONS(443),
    [anon_sym_PERCENTinline] = ACTIONS(443),
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_uid] = ACTIONS(443),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(443),
    [anon_sym_PERCENTpublic] = ACTIONS(443),
    [anon_sym_let] = ACTIONS(445),
    [anon_sym_PERCENTprec] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(445),
  },
  [158] = {
    [sym_action] = STATE(202),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(204),
    [sym_type] = STATE(202),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [159] = {
    [aux_sym_production_group_repeat1] = STATE(334),
    [sym_symbol] = STATE(205),
    [sym_type] = STATE(314),
    [sym_lax_actual] = STATE(207),
    [aux_sym_production_group_repeat2] = STATE(335),
    [sym_actual] = STATE(206),
    [sym_production_group] = STATE(208),
    [sym_action] = STATE(314),
    [sym_precedence] = STATE(336),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(334),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(199),
  },
  [160] = {
    [anon_sym_PERCENTinline] = ACTIONS(443),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(443),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(443),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(445),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_lid] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(443),
    [sym_qid] = ACTIONS(443),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_PERCENTpublic] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
  },
  [161] = {
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym__high_prec_bar] = STATE(110),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [162] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_LBRACK_AT] = ACTIONS(452),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(452),
    [sym_lid] = ACTIONS(452),
    [sym_qid] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(452),
    [anon_sym_PERCENTprec] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_QMARK] = ACTIONS(452),
  },
  [163] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [aux_sym_old_rule_repeat3] = STATE(209),
    [sym_qid] = ACTIONS(454),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_PERCENTprec] = ACTIONS(454),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(454),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(454),
    [sym_lid] = ACTIONS(454),
  },
  [164] = {
    [aux_sym_old_rule_repeat3] = STATE(210),
    [sym_qid] = ACTIONS(454),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_PERCENTprec] = ACTIONS(454),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_LT] = ACTIONS(454),
    [sym_lid] = ACTIONS(454),
  },
  [165] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(460),
    [anon_sym_PERCENTinline] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_uid] = ACTIONS(460),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(460),
    [anon_sym_PERCENTpublic] = ACTIONS(460),
    [anon_sym_let] = ACTIONS(462),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(462),
  },
  [166] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(211),
    [sym_qid] = ACTIONS(460),
    [anon_sym_PERCENTinline] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_uid] = ACTIONS(460),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(460),
    [anon_sym_PERCENTpublic] = ACTIONS(460),
    [anon_sym_let] = ACTIONS(462),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(462),
  },
  [167] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(213),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [168] = {
    [aux_sym_production_group_repeat1] = STATE(155),
    [sym_symbol] = STATE(104),
    [sym_precedence] = STATE(214),
    [sym_actual] = STATE(107),
    [sym_producer] = STATE(155),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_uid] = ACTIONS(33),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [sym_lid] = ACTIONS(199),
  },
  [169] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [170] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(215),
    [aux_sym_old_rule_repeat3] = STATE(211),
    [sym_qid] = ACTIONS(460),
    [anon_sym_PERCENTinline] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_uid] = ACTIONS(460),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(460),
    [anon_sym_PERCENTpublic] = ACTIONS(460),
    [anon_sym_let] = ACTIONS(462),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(462),
  },
  [171] = {
    [aux_sym_old_rule_repeat1] = STATE(216),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [172] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(217),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [173] = {
    [sym_symbol] = STATE(218),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [174] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(217),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(219),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [175] = {
    [sym_strict_actual] = STATE(220),
    [sym_symbol] = STATE(30),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [176] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(468),
    [anon_sym_PERCENTright] = ACTIONS(468),
    [sym_uid] = ACTIONS(468),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(468),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(468),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(468),
    [anon_sym_PERCENTtype] = ACTIONS(468),
    [anon_sym_PERCENTleft] = ACTIONS(468),
    [sym_lid] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [sym_qid] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(468),
    [anon_sym_PERCENTattribute] = ACTIONS(468),
    [anon_sym_PERCENTnonassoc] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(468),
    [anon_sym_PERCENTtoken] = ACTIONS(468),
    [anon_sym_STAR] = ACTIONS(468),
    [anon_sym_QMARK] = ACTIONS(468),
  },
  [177] = {
    [aux_sym_strict_actual_repeat1] = STATE(222),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(345),
  },
  [178] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(472),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [179] = {
    [aux_sym_old_rule_repeat1] = STATE(224),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [180] = {
    [sym_symbol] = STATE(225),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [181] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(226),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [182] = {
    [sym_qid] = ACTIONS(476),
    [anon_sym_PERCENTinline] = ACTIONS(476),
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_uid] = ACTIONS(476),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(476),
    [anon_sym_PERCENTpublic] = ACTIONS(476),
    [anon_sym_let] = ACTIONS(478),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(478),
  },
  [183] = {
    [sym_equality_symbol] = STATE(227),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [184] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [185] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(480),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [186] = {
    [aux_sym_pattern_repeat1] = STATE(230),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(484),
  },
  [187] = {
    [aux_sym_expression_repeat1] = STATE(231),
    [sym_qid] = ACTIONS(486),
    [anon_sym_PERCENTinline] = ACTIONS(486),
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym_uid] = ACTIONS(486),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(486),
    [anon_sym_PERCENTpublic] = ACTIONS(486),
    [anon_sym_let] = ACTIONS(488),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(407),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(488),
  },
  [188] = {
    [sym_symbol] = STATE(337),
    [sym_expression] = STATE(232),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(338),
    [sym_precedence] = STATE(339),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [189] = {
    [aux_sym_declaration_repeat5] = STATE(315),
    [sym_attribute] = STATE(315),
    [anon_sym_PERCENTinline] = ACTIONS(492),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(492),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(492),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(494),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(494),
    [sym_qid] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_PERCENTpublic] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
  },
  [190] = {
    [anon_sym_PERCENTinline] = ACTIONS(496),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(496),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(496),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(498),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_lid] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(496),
    [sym_qid] = ACTIONS(496),
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_PERCENTpublic] = ACTIONS(496),
    [anon_sym_PIPE] = ACTIONS(496),
  },
  [191] = {
    [sym_symbol] = STATE(337),
    [sym_symbol_expression] = STATE(233),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [192] = {
    [sym_symbol] = STATE(138),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(234),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [193] = {
    [aux_sym_expression_repeat1] = STATE(235),
    [sym_qid] = ACTIONS(486),
    [anon_sym_PERCENTinline] = ACTIONS(486),
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym_uid] = ACTIONS(486),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(486),
    [anon_sym_PERCENTpublic] = ACTIONS(486),
    [anon_sym_let] = ACTIONS(488),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(407),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(488),
  },
  [194] = {
    [sym_symbol] = STATE(138),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(236),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [195] = {
    [aux_sym_declaration_repeat5] = STATE(237),
    [sym_attribute] = STATE(237),
    [anon_sym_PERCENTinline] = ACTIONS(492),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(492),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(492),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(494),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(494),
    [sym_qid] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_PERCENTpublic] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
  },
  [196] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(238),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(239),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [198] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(502),
    [sym_line_comment] = ACTIONS(1),
  },
  [199] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(500),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [200] = {
    [anon_sym_PERCENTinline] = ACTIONS(507),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(507),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(507),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(509),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(507),
    [sym_lid] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_qid] = ACTIONS(507),
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_PERCENTpublic] = ACTIONS(507),
    [anon_sym_PERCENTprec] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
  },
  [201] = {
    [aux_sym_old_rule_repeat3] = STATE(242),
    [sym_modifier] = STATE(162),
    [aux_sym_declaration_repeat5] = STATE(241),
    [sym_attribute] = STATE(241),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(511),
    [sym_lid] = ACTIONS(511),
    [sym_qid] = ACTIONS(511),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_PERCENTprec] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [202] = {
    [sym_precedence] = STATE(243),
    [sym_qid] = ACTIONS(515),
    [anon_sym_PERCENTinline] = ACTIONS(515),
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_uid] = ACTIONS(515),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(515),
    [anon_sym_PERCENTpublic] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(517),
    [anon_sym_PERCENTprec] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(517),
  },
  [203] = {
    [anon_sym_PERCENTinline] = ACTIONS(515),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(515),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(515),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(517),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_lid] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(515),
    [sym_qid] = ACTIONS(515),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_PERCENTpublic] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
  },
  [204] = {
    [sym_action] = STATE(244),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym_type] = STATE(244),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [205] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_LBRACK_AT] = ACTIONS(300),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(300),
    [sym_lid] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(519),
    [sym_qid] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_PERCENTprec] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(300),
  },
  [206] = {
    [aux_sym_old_rule_repeat3] = STATE(164),
    [sym_modifier] = STATE(246),
    [aux_sym_declaration_repeat5] = STATE(163),
    [sym_attribute] = STATE(163),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(310),
    [sym_lid] = ACTIONS(310),
    [sym_qid] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_PERCENTprec] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [207] = {
    [aux_sym_actual_repeat1] = STATE(249),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(525),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [208] = {
    [aux_sym_old_rule_repeat2] = STATE(250),
    [sym__high_prec_bar] = STATE(342),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(527),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(519),
  },
  [209] = {
    [aux_sym_old_rule_repeat3] = STATE(210),
    [sym_qid] = ACTIONS(511),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_PERCENTprec] = ACTIONS(511),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(511),
    [sym_lid] = ACTIONS(511),
  },
  [210] = {
    [aux_sym_old_rule_repeat3] = STATE(210),
    [sym_qid] = ACTIONS(529),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_PERCENTprec] = ACTIONS(529),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [sym_lid] = ACTIONS(529),
  },
  [211] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(534),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [anon_sym_let] = ACTIONS(536),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(536),
  },
  [212] = {
    [aux_sym_old_rule_repeat2] = STATE(212),
    [sym__high_prec_bar] = STATE(167),
    [sym_qid] = ACTIONS(538),
    [anon_sym_PERCENTinline] = ACTIONS(538),
    [ts_builtin_sym_end] = ACTIONS(538),
    [sym_uid] = ACTIONS(538),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(538),
    [anon_sym_PERCENTpublic] = ACTIONS(538),
    [anon_sym_let] = ACTIONS(540),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(542),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(540),
  },
  [213] = {
    [anon_sym_PERCENTinline] = ACTIONS(538),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(538),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(538),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(540),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_lid] = ACTIONS(540),
    [anon_sym_COMMA] = ACTIONS(538),
    [sym_qid] = ACTIONS(538),
    [ts_builtin_sym_end] = ACTIONS(538),
    [anon_sym_PERCENTpublic] = ACTIONS(538),
    [anon_sym_SEMI] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
  },
  [214] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [215] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(251),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(534),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [anon_sym_let] = ACTIONS(536),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(536),
  },
  [216] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(549),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [217] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(253),
    [aux_sym_old_rule_repeat3] = STATE(251),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(534),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [anon_sym_let] = ACTIONS(536),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(536),
  },
  [218] = {
    [aux_sym_old_rule_repeat1] = STATE(254),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(549),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [219] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(238),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [220] = {
    [sym_modifier] = STATE(67),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [221] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(553),
    [anon_sym_PERCENTright] = ACTIONS(553),
    [sym_uid] = ACTIONS(553),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(553),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(553),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(553),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(553),
    [anon_sym_PERCENTtype] = ACTIONS(553),
    [anon_sym_PERCENTleft] = ACTIONS(553),
    [sym_lid] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [sym_qid] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(553),
    [anon_sym_PERCENT_LBRACK_AT] = ACTIONS(553),
    [anon_sym_PERCENTattribute] = ACTIONS(553),
    [anon_sym_PERCENTnonassoc] = ACTIONS(553),
    [anon_sym_SEMI] = ACTIONS(553),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(553),
    [anon_sym_PERCENTtoken] = ACTIONS(553),
    [anon_sym_STAR] = ACTIONS(553),
    [anon_sym_QMARK] = ACTIONS(553),
  },
  [222] = {
    [aux_sym_strict_actual_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(551),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [223] = {
    [sym_equality_symbol] = STATE(255),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [224] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(558),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [225] = {
    [aux_sym_old_rule_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(558),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [226] = {
    [sym_qid] = ACTIONS(560),
    [anon_sym_PERCENTinline] = ACTIONS(560),
    [ts_builtin_sym_end] = ACTIONS(560),
    [sym_uid] = ACTIONS(560),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(560),
    [anon_sym_PERCENTpublic] = ACTIONS(560),
    [anon_sym_let] = ACTIONS(562),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(562),
  },
  [227] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(258),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [228] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_EQ] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [229] = {
    [sym_pattern] = STATE(259),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(282),
    [sym_line_comment] = ACTIONS(1),
  },
  [230] = {
    [aux_sym_pattern_repeat1] = STATE(261),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_COMMA] = ACTIONS(484),
  },
  [231] = {
    [aux_sym_expression_repeat1] = STATE(235),
    [sym_qid] = ACTIONS(568),
    [anon_sym_PERCENTinline] = ACTIONS(568),
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_uid] = ACTIONS(568),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(568),
    [anon_sym_PERCENTpublic] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(570),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(407),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(570),
  },
  [232] = {
    [aux_sym_symbol_expression_repeat1] = STATE(264),
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [233] = {
    [sym_modifier] = STATE(345),
    [anon_sym_SEMI] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_comment] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [234] = {
    [anon_sym_PERCENTinline] = ACTIONS(578),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(578),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(578),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(580),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(578),
    [sym_lid] = ACTIONS(580),
    [anon_sym_COMMA] = ACTIONS(578),
    [sym_qid] = ACTIONS(578),
    [ts_builtin_sym_end] = ACTIONS(578),
    [anon_sym_PERCENTpublic] = ACTIONS(578),
    [anon_sym_PIPE] = ACTIONS(578),
  },
  [235] = {
    [aux_sym_expression_repeat1] = STATE(235),
    [sym_qid] = ACTIONS(578),
    [anon_sym_PERCENTinline] = ACTIONS(578),
    [ts_builtin_sym_end] = ACTIONS(578),
    [sym_uid] = ACTIONS(578),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(578),
    [anon_sym_PERCENTpublic] = ACTIONS(578),
    [anon_sym_let] = ACTIONS(580),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(582),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(580),
  },
  [236] = {
    [anon_sym_PERCENTinline] = ACTIONS(585),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(585),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(585),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(587),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym_lid] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(585),
    [sym_qid] = ACTIONS(585),
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_PERCENTpublic] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
  },
  [237] = {
    [aux_sym_declaration_repeat5] = STATE(315),
    [sym_attribute] = STATE(315),
    [anon_sym_PERCENTinline] = ACTIONS(589),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(589),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(589),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(591),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(591),
    [sym_qid] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(589),
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_PERCENTpublic] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_STAR] = ACTIONS(589),
    [anon_sym_QMARK] = ACTIONS(589),
  },
  [238] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(267),
    [aux_sym_old_rule_repeat3] = STATE(266),
    [sym_qid] = ACTIONS(593),
    [anon_sym_PERCENTinline] = ACTIONS(593),
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym_uid] = ACTIONS(593),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(593),
    [anon_sym_PERCENTpublic] = ACTIONS(593),
    [anon_sym_let] = ACTIONS(595),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(595),
  },
  [239] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(268),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [240] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(268),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(269),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [241] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [aux_sym_old_rule_repeat3] = STATE(270),
    [sym_qid] = ACTIONS(599),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_PERCENTprec] = ACTIONS(599),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(599),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(599),
    [sym_lid] = ACTIONS(599),
  },
  [242] = {
    [aux_sym_old_rule_repeat3] = STATE(210),
    [sym_qid] = ACTIONS(599),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_PERCENTprec] = ACTIONS(599),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(599),
    [anon_sym_LT] = ACTIONS(599),
    [sym_lid] = ACTIONS(599),
  },
  [243] = {
    [anon_sym_PERCENTinline] = ACTIONS(603),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(603),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(603),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(605),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(603),
    [sym_lid] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(603),
    [sym_qid] = ACTIONS(603),
    [ts_builtin_sym_end] = ACTIONS(603),
    [anon_sym_PERCENTpublic] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
  },
  [244] = {
    [sym_precedence] = STATE(271),
    [sym_qid] = ACTIONS(603),
    [anon_sym_PERCENTinline] = ACTIONS(603),
    [ts_builtin_sym_end] = ACTIONS(603),
    [sym_uid] = ACTIONS(603),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(603),
    [anon_sym_PERCENTpublic] = ACTIONS(603),
    [anon_sym_let] = ACTIONS(605),
    [anon_sym_PERCENTprec] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(605),
  },
  [245] = {
    [aux_sym_production_group_repeat1] = STATE(334),
    [sym_symbol] = STATE(205),
    [sym_type] = STATE(314),
    [sym_lax_actual] = STATE(272),
    [aux_sym_production_group_repeat2] = STATE(335),
    [sym_actual] = STATE(206),
    [sym_production_group] = STATE(208),
    [sym_action] = STATE(314),
    [sym_precedence] = STATE(336),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(334),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(199),
  },
  [246] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_LBRACK_AT] = ACTIONS(452),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(452),
    [sym_lid] = ACTIONS(452),
    [anon_sym_COMMA] = ACTIONS(607),
    [sym_qid] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(452),
    [anon_sym_PERCENTprec] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_QMARK] = ACTIONS(452),
  },
  [247] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(609),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_LBRACK_AT] = ACTIONS(609),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(609),
    [sym_lid] = ACTIONS(609),
    [sym_qid] = ACTIONS(609),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_PERCENTprec] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_PIPE] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_QMARK] = ACTIONS(609),
  },
  [248] = {
    [aux_sym_production_group_repeat1] = STATE(334),
    [sym_symbol] = STATE(205),
    [sym_type] = STATE(314),
    [sym_lax_actual] = STATE(273),
    [aux_sym_production_group_repeat2] = STATE(335),
    [sym_actual] = STATE(206),
    [sym_production_group] = STATE(208),
    [sym_action] = STATE(314),
    [sym_precedence] = STATE(336),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(334),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(199),
  },
  [249] = {
    [aux_sym_actual_repeat1] = STATE(275),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(611),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [250] = {
    [aux_sym_old_rule_repeat2] = STATE(347),
    [sym__high_prec_bar] = STATE(342),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_PIPE] = ACTIONS(527),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(607),
  },
  [251] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(593),
    [anon_sym_PERCENTinline] = ACTIONS(593),
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym_uid] = ACTIONS(593),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(593),
    [anon_sym_PERCENTpublic] = ACTIONS(593),
    [anon_sym_let] = ACTIONS(595),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(595),
  },
  [252] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(613),
    [sym_line_comment] = ACTIONS(1),
  },
  [253] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(266),
    [sym_qid] = ACTIONS(593),
    [anon_sym_PERCENTinline] = ACTIONS(593),
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym_uid] = ACTIONS(593),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(593),
    [anon_sym_PERCENTpublic] = ACTIONS(593),
    [anon_sym_let] = ACTIONS(595),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(595),
  },
  [254] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(615),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [255] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(278),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [256] = {
    [sym_equality_symbol] = STATE(279),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [257] = {
    [aux_sym_old_rule_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [258] = {
    [sym_qid] = ACTIONS(619),
    [anon_sym_PERCENTinline] = ACTIONS(619),
    [ts_builtin_sym_end] = ACTIONS(619),
    [sym_uid] = ACTIONS(619),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(619),
    [anon_sym_PERCENTpublic] = ACTIONS(619),
    [anon_sym_let] = ACTIONS(621),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(621),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [260] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_EQ] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(625),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [261] = {
    [aux_sym_pattern_repeat1] = STATE(261),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_RPAREN] = ACTIONS(623),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [262] = {
    [aux_sym_declaration_repeat5] = STATE(281),
    [sym_attribute] = STATE(281),
    [anon_sym_PERCENTinline] = ACTIONS(630),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(630),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(630),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(632),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(632),
    [sym_qid] = ACTIONS(630),
    [anon_sym_PLUS] = ACTIONS(630),
    [ts_builtin_sym_end] = ACTIONS(630),
    [anon_sym_PERCENTpublic] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(630),
    [anon_sym_PIPE] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_QMARK] = ACTIONS(630),
  },
  [263] = {
    [sym_symbol] = STATE(337),
    [sym_expression] = STATE(282),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(338),
    [sym_precedence] = STATE(339),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [264] = {
    [aux_sym_symbol_expression_repeat1] = STATE(284),
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(634),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [265] = {
    [sym_symbol] = STATE(138),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(285),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [266] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(636),
    [anon_sym_PERCENTinline] = ACTIONS(636),
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_uid] = ACTIONS(636),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(636),
    [anon_sym_PERCENTpublic] = ACTIONS(636),
    [anon_sym_let] = ACTIONS(638),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(638),
  },
  [267] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(286),
    [sym_qid] = ACTIONS(636),
    [anon_sym_PERCENTinline] = ACTIONS(636),
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_uid] = ACTIONS(636),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(636),
    [anon_sym_PERCENTpublic] = ACTIONS(636),
    [anon_sym_let] = ACTIONS(638),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(638),
  },
  [268] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(287),
    [aux_sym_old_rule_repeat3] = STATE(286),
    [sym_qid] = ACTIONS(636),
    [anon_sym_PERCENTinline] = ACTIONS(636),
    [ts_builtin_sym_end] = ACTIONS(636),
    [sym_uid] = ACTIONS(636),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(636),
    [anon_sym_PERCENTpublic] = ACTIONS(636),
    [anon_sym_let] = ACTIONS(638),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(638),
  },
  [269] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(288),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [270] = {
    [aux_sym_old_rule_repeat3] = STATE(210),
    [sym_qid] = ACTIONS(642),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_PERCENTprec] = ACTIONS(642),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_PIPE] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(642),
    [sym_lid] = ACTIONS(642),
  },
  [271] = {
    [anon_sym_PERCENTinline] = ACTIONS(644),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(644),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(644),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(646),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_lid] = ACTIONS(646),
    [anon_sym_COMMA] = ACTIONS(644),
    [sym_qid] = ACTIONS(644),
    [ts_builtin_sym_end] = ACTIONS(644),
    [anon_sym_PERCENTpublic] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_PIPE] = ACTIONS(644),
  },
  [272] = {
    [aux_sym_actual_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(650),
    [anon_sym_RPAREN] = ACTIONS(650),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [274] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(652),
    [anon_sym_LBRACK_AT] = ACTIONS(652),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(652),
    [sym_lid] = ACTIONS(652),
    [sym_qid] = ACTIONS(652),
    [anon_sym_PLUS] = ACTIONS(652),
    [anon_sym_PERCENTprec] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(652),
    [anon_sym_PIPE] = ACTIONS(652),
    [anon_sym_STAR] = ACTIONS(652),
    [anon_sym_QMARK] = ACTIONS(652),
  },
  [275] = {
    [aux_sym_actual_repeat1] = STATE(275),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(650),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [276] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(288),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(291),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [277] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(657),
    [sym_line_comment] = ACTIONS(1),
  },
  [278] = {
    [sym_qid] = ACTIONS(659),
    [anon_sym_PERCENTinline] = ACTIONS(659),
    [ts_builtin_sym_end] = ACTIONS(659),
    [sym_uid] = ACTIONS(659),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(659),
    [anon_sym_PERCENTpublic] = ACTIONS(659),
    [anon_sym_let] = ACTIONS(661),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(661),
  },
  [279] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(293),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [280] = {
    [sym_equality_symbol] = STATE(294),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [281] = {
    [aux_sym_declaration_repeat5] = STATE(315),
    [sym_attribute] = STATE(315),
    [anon_sym_PERCENTinline] = ACTIONS(663),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(663),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(663),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(665),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(665),
    [sym_qid] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_PERCENTpublic] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(663),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(667),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [283] = {
    [aux_sym_declaration_repeat5] = STATE(295),
    [sym_attribute] = STATE(295),
    [anon_sym_PERCENTinline] = ACTIONS(663),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(663),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(663),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(665),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(665),
    [sym_qid] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_PERCENTpublic] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(663),
  },
  [284] = {
    [aux_sym_symbol_expression_repeat1] = STATE(284),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(667),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [285] = {
    [anon_sym_PERCENTinline] = ACTIONS(672),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(672),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(672),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(674),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(672),
    [sym_lid] = ACTIONS(674),
    [anon_sym_COMMA] = ACTIONS(672),
    [sym_qid] = ACTIONS(672),
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_PERCENTpublic] = ACTIONS(672),
    [anon_sym_PIPE] = ACTIONS(672),
  },
  [286] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(676),
    [anon_sym_PERCENTinline] = ACTIONS(676),
    [ts_builtin_sym_end] = ACTIONS(676),
    [sym_uid] = ACTIONS(676),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(676),
    [anon_sym_PERCENTpublic] = ACTIONS(676),
    [anon_sym_let] = ACTIONS(678),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(678),
  },
  [287] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(296),
    [sym_qid] = ACTIONS(676),
    [anon_sym_PERCENTinline] = ACTIONS(676),
    [ts_builtin_sym_end] = ACTIONS(676),
    [sym_uid] = ACTIONS(676),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(676),
    [anon_sym_PERCENTpublic] = ACTIONS(676),
    [anon_sym_let] = ACTIONS(678),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(678),
  },
  [288] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(297),
    [aux_sym_old_rule_repeat3] = STATE(296),
    [sym_qid] = ACTIONS(676),
    [anon_sym_PERCENTinline] = ACTIONS(676),
    [ts_builtin_sym_end] = ACTIONS(676),
    [sym_uid] = ACTIONS(676),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(676),
    [anon_sym_PERCENTpublic] = ACTIONS(676),
    [anon_sym_let] = ACTIONS(678),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(678),
  },
  [289] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(609),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_LBRACK_AT] = ACTIONS(609),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_LT] = ACTIONS(609),
    [sym_lid] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(682),
    [sym_qid] = ACTIONS(609),
    [anon_sym_PLUS] = ACTIONS(609),
    [anon_sym_PERCENTprec] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_PIPE] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(609),
    [anon_sym_QMARK] = ACTIONS(609),
  },
  [290] = {
    [aux_sym_actual_repeat1] = STATE(275),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(684),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [291] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(299),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [292] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(299),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym__low_prec_bar] = STATE(300),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [293] = {
    [sym_qid] = ACTIONS(686),
    [anon_sym_PERCENTinline] = ACTIONS(686),
    [ts_builtin_sym_end] = ACTIONS(686),
    [sym_uid] = ACTIONS(686),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(686),
    [anon_sym_PERCENTpublic] = ACTIONS(686),
    [anon_sym_let] = ACTIONS(688),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(688),
  },
  [294] = {
    [sym_symbol] = STATE(138),
    [sym_expression] = STATE(301),
    [sym_menhir_action] = STATE(140),
    [sym_pattern] = STATE(141),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(143),
    [sym_precedence] = STATE(144),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(145),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [295] = {
    [aux_sym_declaration_repeat5] = STATE(315),
    [sym_attribute] = STATE(315),
    [anon_sym_PERCENTinline] = ACTIONS(690),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(690),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(690),
    [anon_sym_LBRACK_AT] = ACTIONS(383),
    [anon_sym_let] = ACTIONS(692),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(692),
    [sym_qid] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [ts_builtin_sym_end] = ACTIONS(690),
    [anon_sym_PERCENTpublic] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_PIPE] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
  },
  [296] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(694),
    [anon_sym_PERCENTinline] = ACTIONS(694),
    [ts_builtin_sym_end] = ACTIONS(694),
    [sym_uid] = ACTIONS(694),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(694),
    [anon_sym_PERCENTpublic] = ACTIONS(694),
    [anon_sym_let] = ACTIONS(696),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(696),
  },
  [297] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(302),
    [sym_qid] = ACTIONS(694),
    [anon_sym_PERCENTinline] = ACTIONS(694),
    [ts_builtin_sym_end] = ACTIONS(694),
    [sym_uid] = ACTIONS(694),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(694),
    [anon_sym_PERCENTpublic] = ACTIONS(694),
    [anon_sym_let] = ACTIONS(696),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(696),
  },
  [298] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(652),
    [anon_sym_LBRACK_AT] = ACTIONS(652),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_LT] = ACTIONS(652),
    [sym_lid] = ACTIONS(652),
    [anon_sym_COMMA] = ACTIONS(700),
    [sym_qid] = ACTIONS(652),
    [anon_sym_PLUS] = ACTIONS(652),
    [anon_sym_PERCENTprec] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(652),
    [anon_sym_PIPE] = ACTIONS(652),
    [anon_sym_STAR] = ACTIONS(652),
    [anon_sym_QMARK] = ACTIONS(652),
  },
  [299] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(303),
    [aux_sym_old_rule_repeat3] = STATE(302),
    [sym_qid] = ACTIONS(694),
    [anon_sym_PERCENTinline] = ACTIONS(694),
    [ts_builtin_sym_end] = ACTIONS(694),
    [sym_uid] = ACTIONS(694),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(694),
    [anon_sym_PERCENTpublic] = ACTIONS(694),
    [anon_sym_let] = ACTIONS(696),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(696),
  },
  [300] = {
    [aux_sym_production_group_repeat1] = STATE(103),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(105),
    [aux_sym_production_group_repeat2] = STATE(106),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(304),
    [sym_action] = STATE(105),
    [sym_precedence] = STATE(109),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(103),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(197),
    [sym_lid] = ACTIONS(199),
  },
  [301] = {
    [sym_qid] = ACTIONS(702),
    [anon_sym_PERCENTinline] = ACTIONS(702),
    [ts_builtin_sym_end] = ACTIONS(702),
    [sym_uid] = ACTIONS(702),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(702),
    [anon_sym_PERCENTpublic] = ACTIONS(702),
    [anon_sym_let] = ACTIONS(704),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(704),
  },
  [302] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(706),
    [anon_sym_PERCENTinline] = ACTIONS(706),
    [ts_builtin_sym_end] = ACTIONS(706),
    [sym_uid] = ACTIONS(706),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(706),
    [anon_sym_PERCENTpublic] = ACTIONS(706),
    [anon_sym_let] = ACTIONS(708),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(708),
  },
  [303] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(305),
    [sym_qid] = ACTIONS(706),
    [anon_sym_PERCENTinline] = ACTIONS(706),
    [ts_builtin_sym_end] = ACTIONS(706),
    [sym_uid] = ACTIONS(706),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(706),
    [anon_sym_PERCENTpublic] = ACTIONS(706),
    [anon_sym_let] = ACTIONS(708),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(708),
  },
  [304] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(306),
    [aux_sym_old_rule_repeat3] = STATE(305),
    [sym_qid] = ACTIONS(706),
    [anon_sym_PERCENTinline] = ACTIONS(706),
    [ts_builtin_sym_end] = ACTIONS(706),
    [sym_uid] = ACTIONS(706),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(706),
    [anon_sym_PERCENTpublic] = ACTIONS(706),
    [anon_sym_let] = ACTIONS(708),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(708),
  },
  [305] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(712),
    [anon_sym_PERCENTinline] = ACTIONS(712),
    [ts_builtin_sym_end] = ACTIONS(712),
    [sym_uid] = ACTIONS(712),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(712),
    [anon_sym_PERCENTpublic] = ACTIONS(712),
    [anon_sym_let] = ACTIONS(714),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(714),
  },
  [306] = {
    [sym__high_prec_bar] = STATE(167),
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(307),
    [sym_qid] = ACTIONS(712),
    [anon_sym_PERCENTinline] = ACTIONS(712),
    [ts_builtin_sym_end] = ACTIONS(712),
    [sym_uid] = ACTIONS(712),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(712),
    [anon_sym_PERCENTpublic] = ACTIONS(712),
    [anon_sym_let] = ACTIONS(714),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(716),
    [anon_sym_PIPE] = ACTIONS(320),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(714),
  },
  [307] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(718),
    [anon_sym_PERCENTinline] = ACTIONS(718),
    [ts_builtin_sym_end] = ACTIONS(718),
    [sym_uid] = ACTIONS(718),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(718),
    [anon_sym_PERCENTpublic] = ACTIONS(718),
    [anon_sym_let] = ACTIONS(720),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(720),
  },
  [308] = {
    [anon_sym_PERCENTinline] = ACTIONS(77),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(77),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(77),
    [anon_sym_LBRACK_AT] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(379),
    [sym_qid] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PERCENTpublic] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
  },
  [309] = {
    [anon_sym_PERCENTinline] = ACTIONS(167),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(167),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(167),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(722),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(722),
    [sym_qid] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_PERCENTpublic] = ACTIONS(167),
    [anon_sym_PERCENTprec] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
  },
  [310] = {
    [anon_sym_PERCENTinline] = ACTIONS(222),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(222),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(222),
    [anon_sym_LBRACK_AT] = ACTIONS(222),
    [anon_sym_let] = ACTIONS(724),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(724),
    [sym_qid] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_PERCENTpublic] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
  },
  [311] = {
    [anon_sym_PERCENTinline] = ACTIONS(251),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(251),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(251),
    [sym_comment] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(726),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(726),
    [sym_qid] = ACTIONS(251),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PERCENTpublic] = ACTIONS(251),
    [anon_sym_PERCENTprec] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
  },
  [312] = {
    [anon_sym_PERCENTinline] = ACTIONS(290),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(290),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(290),
    [anon_sym_LBRACK_AT] = ACTIONS(290),
    [anon_sym_let] = ACTIONS(292),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(292),
    [sym_qid] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_PERCENTpublic] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_QMARK] = ACTIONS(290),
  },
  [313] = {
    [sym_symbol] = STATE(153),
    [sym_qid] = ACTIONS(274),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(274),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(274),
  },
  [314] = {
    [sym_precedence] = STATE(160),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(304),
  },
  [315] = {
    [aux_sym_declaration_repeat5] = STATE(315),
    [sym_attribute] = STATE(315),
    [anon_sym_PERCENTinline] = ACTIONS(324),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(324),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(324),
    [anon_sym_LBRACK_AT] = ACTIONS(728),
    [anon_sym_let] = ACTIONS(329),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(329),
    [sym_qid] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_PERCENTpublic] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_QMARK] = ACTIONS(324),
  },
  [316] = {
    [sym_symbol] = STATE(337),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(343),
    [sym_precedence] = STATE(339),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [317] = {
    [sym_precedence] = STATE(190),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(393),
  },
  [318] = {
    [sym_modifier] = STATE(345),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(731),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [319] = {
    [anon_sym_PERCENTinline] = ACTIONS(421),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(421),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(421),
    [anon_sym_LBRACK_AT] = ACTIONS(421),
    [anon_sym_let] = ACTIONS(423),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(423),
    [sym_qid] = ACTIONS(421),
    [anon_sym_PLUS] = ACTIONS(421),
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_PERCENTpublic] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_QMARK] = ACTIONS(421),
  },
  [320] = {
    [sym_precedence] = STATE(203),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(443),
  },
  [321] = {
    [sym_symbol] = STATE(337),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(234),
    [sym_precedence] = STATE(339),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [322] = {
    [aux_sym_expression_repeat1] = STATE(327),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(733),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(486),
  },
  [323] = {
    [sym_symbol] = STATE(337),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(236),
    [sym_precedence] = STATE(339),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [324] = {
    [sym_precedence] = STATE(243),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(515),
  },
  [325] = {
    [aux_sym_old_rule_repeat3] = STATE(325),
    [sym_qid] = ACTIONS(529),
    [anon_sym_PERCENTinline] = ACTIONS(529),
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_uid] = ACTIONS(529),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(529),
    [anon_sym_PERCENTpublic] = ACTIONS(529),
    [anon_sym_let] = ACTIONS(735),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(737),
    [sym_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(735),
  },
  [326] = {
    [aux_sym_expression_repeat1] = STATE(327),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_PIPE] = ACTIONS(733),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(568),
  },
  [327] = {
    [aux_sym_expression_repeat1] = STATE(327),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(578),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(578),
  },
  [328] = {
    [sym_precedence] = STATE(271),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(603),
  },
  [329] = {
    [sym_symbol] = STATE(337),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_seq_expression] = STATE(285),
    [sym_precedence] = STATE(339),
    [sym_action] = STATE(142),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(276),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym__] = ACTIONS(282),
    [sym_lid] = ACTIONS(284),
  },
  [330] = {
    [sym_ocaml_type] = STATE(331),
    [aux_sym_ocaml_type_repeat1] = STATE(48),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(743),
    [aux_sym_ocaml_type_token1] = ACTIONS(69),
    [sym_comment] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(53),
  },
  [331] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(745),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [332] = {
    [aux_sym__ocaml] = STATE(34),
    [sym_ocaml] = STATE(333),
    [sym_ocaml_comment] = ACTIONS(1),
    [aux_sym__ocaml_token4] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(49),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(49),
    [aux_sym__ocaml_token2] = ACTIONS(49),
    [sym_line_comment] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(747),
    [aux_sym__ocaml_token1] = ACTIONS(49),
    [aux_sym__ocaml_token3] = ACTIONS(49),
  },
  [333] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(749),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [334] = {
    [aux_sym_production_group_repeat1] = STATE(155),
    [sym_symbol] = STATE(104),
    [sym_actual] = STATE(107),
    [aux_sym_production_group_repeat2] = STATE(340),
    [sym_type] = STATE(320),
    [sym_action] = STATE(320),
    [sym__high_prec_bar] = STATE(110),
    [sym_precedence] = STATE(341),
    [sym_producer] = STATE(155),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(199),
  },
  [335] = {
    [sym_action] = STATE(320),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym_type] = STATE(320),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [336] = {
    [sym_action] = STATE(320),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(340),
    [sym_type] = STATE(320),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [337] = {
    [aux_sym_declaration_repeat5] = STATE(344),
    [sym_attribute] = STATE(344),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
  },
  [338] = {
    [aux_sym_expression_repeat1] = STATE(322),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(733),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(403),
  },
  [339] = {
    [sym_type] = STATE(142),
    [sym_action] = STATE(142),
    [sym_menhir_action] = STATE(190),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [340] = {
    [sym_action] = STATE(324),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym_type] = STATE(324),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [341] = {
    [sym_action] = STATE(324),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(346),
    [sym_type] = STATE(324),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [342] = {
    [aux_sym_production_group_repeat1] = STATE(334),
    [sym_symbol] = STATE(104),
    [sym_type] = STATE(314),
    [aux_sym_production_group_repeat2] = STATE(335),
    [sym_actual] = STATE(107),
    [sym_production_group] = STATE(213),
    [sym_action] = STATE(314),
    [sym_precedence] = STATE(336),
    [sym__high_prec_bar] = STATE(110),
    [sym_producer] = STATE(334),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(199),
  },
  [343] = {
    [aux_sym_expression_repeat1] = STATE(326),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(733),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(486),
  },
  [344] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
  },
  [345] = {
    [aux_sym_declaration_repeat5] = STATE(349),
    [sym_attribute] = STATE(349),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
  },
  [346] = {
    [sym_action] = STATE(328),
    [sym__high_prec_bar] = STATE(110),
    [aux_sym_production_group_repeat2] = STATE(161),
    [sym_type] = STATE(328),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(27),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [347] = {
    [aux_sym_old_rule_repeat2] = STATE(347),
    [sym__high_prec_bar] = STATE(342),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(538),
  },
  [348] = {
    [sym_modifier] = STATE(345),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(1),
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_comment] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(99),
  },
  [349] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_STAR] = ACTIONS(589),
    [anon_sym_QMARK] = ACTIONS(589),
  },
  [350] = {
    [aux_sym_declaration_repeat5] = STATE(351),
    [sym_attribute] = STATE(351),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_PLUS] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(630),
    [anon_sym_PIPE] = ACTIONS(630),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_QMARK] = ACTIONS(630),
  },
  [351] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(663),
  },
  [352] = {
    [aux_sym_declaration_repeat5] = STATE(353),
    [sym_attribute] = STATE(353),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_QMARK] = ACTIONS(663),
  },
  [353] = {
    [aux_sym_declaration_repeat5] = STATE(114),
    [sym_attribute] = STATE(114),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_AT] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [anon_sym_PLUS] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_PIPE] = ACTIONS(690),
    [anon_sym_STAR] = ACTIONS(690),
    [anon_sym_QMARK] = ACTIONS(690),
  },
  [354] = {
    [sym_symbol] = STATE(337),
    [sym_symbol_expression] = STATE(348),
    [sym_qid] = ACTIONS(33),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [sym_comment] = ACTIONS(1),
    [sym_lid] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(1),
  },
  [355] = {
    [aux_sym_symbol_expression_repeat1] = STATE(356),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(758),
    [anon_sym_COMMA] = ACTIONS(572),
  },
  [356] = {
    [aux_sym_symbol_expression_repeat1] = STATE(284),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(760),
    [anon_sym_COMMA] = ACTIONS(572),
  },
  [357] = {
    [sym_ocaml_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(762),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
  },
  [358] = {
    [sym_symbol] = STATE(337),
    [sym_seq_expression] = STATE(338),
    [sym_action] = STATE(142),
    [sym_expression] = STATE(355),
    [sym_menhir_action] = STATE(317),
    [sym_pattern] = STATE(357),
    [sym_type] = STATE(142),
    [sym_precedence] = STATE(339),
    [sym_symbol_expression] = STATE(318),
    [sym_action_expression] = STATE(146),
    [sym_ocaml_comment] = ACTIONS(1),
    [sym_uid] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(27),
    [sym_lid] = ACTIONS(284),
    [sym_qid] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTprec] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym__] = ACTIONS(282),
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
  [49] = {.count = 1, .reusable = false}, SHIFT(34),
  [51] = {.count = 1, .reusable = false}, SHIFT(31),
  [53] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [55] = {.count = 1, .reusable = false}, SHIFT(32),
  [57] = {.count = 1, .reusable = false}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(36),
  [61] = {.count = 1, .reusable = false}, SHIFT(41),
  [63] = {.count = 1, .reusable = true}, SHIFT(43),
  [65] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [67] = {.count = 1, .reusable = false}, SHIFT(46),
  [69] = {.count = 1, .reusable = false}, SHIFT(48),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [75] = {.count = 1, .reusable = true}, SHIFT(49),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(52),
  [83] = {.count = 1, .reusable = false}, SHIFT(53),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_flags, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(56),
  [91] = {.count = 1, .reusable = true}, SHIFT(57),
  [93] = {.count = 1, .reusable = true}, SHIFT(58),
  [95] = {.count = 1, .reusable = true}, SHIFT(59),
  [97] = {.count = 1, .reusable = true}, SHIFT(62),
  [99] = {.count = 1, .reusable = true}, SHIFT(64),
  [101] = {.count = 1, .reusable = true}, SHIFT(65),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(70),
  [107] = {.count = 1, .reusable = false}, SHIFT(72),
  [109] = {.count = 1, .reusable = false}, SHIFT(71),
  [111] = {.count = 1, .reusable = false}, SHIFT(73),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_header, 2),
  [115] = {.count = 1, .reusable = false}, SHIFT(74),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_ocaml, 1),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_ocaml, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(75),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(76),
  [127] = {.count = 1, .reusable = true}, SHIFT(79),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_attribute, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(83),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [165] = {.count = 1, .reusable = true}, SHIFT(85),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(87),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_ocaml_type, 1),
  [173] = {.count = 1, .reusable = false}, SHIFT(88),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [179] = {.count = 1, .reusable = true}, SHIFT(92),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_postlude, 1),
  [185] = {.count = 1, .reusable = true}, SHIFT(93),
  [187] = {.count = 1, .reusable = true}, SHIFT(94),
  [189] = {.count = 1, .reusable = false}, SHIFT(98),
  [191] = {.count = 1, .reusable = true}, SHIFT(100),
  [193] = {.count = 1, .reusable = true}, SHIFT(101),
  [195] = {.count = 1, .reusable = true}, SHIFT(110),
  [197] = {.count = 1, .reusable = true}, SHIFT(330),
  [199] = {.count = 1, .reusable = true}, SHIFT(102),
  [201] = {.count = 1, .reusable = true}, SHIFT(112),
  [203] = {.count = 1, .reusable = true}, SHIFT(113),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(22),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(24),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [228] = {.count = 1, .reusable = false}, REDUCE(aux_sym__ocaml, 2),
  [230] = {.count = 1, .reusable = true}, REDUCE(aux_sym__ocaml, 2),
  [232] = {.count = 1, .reusable = false}, SHIFT(121),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml, 2), SHIFT_REPEAT(74),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml, 2), SHIFT_REPEAT(31),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym__ocaml, 2), SHIFT_REPEAT(32),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_header, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_grammar_attribute, 3),
  [249] = {.count = 1, .reusable = true}, SHIFT(127),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ocaml_type_repeat1, 2),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ocaml_type_repeat1, 2), SHIFT_REPEAT(88),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(17),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(49),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [268] = {.count = 1, .reusable = true}, SHIFT(130),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_equality_symbol, 1),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_equality_symbol, 1),
  [274] = {.count = 1, .reusable = true}, SHIFT(308),
  [276] = {.count = 1, .reusable = true}, SHIFT(134),
  [278] = {.count = 1, .reusable = true}, SHIFT(135),
  [280] = {.count = 1, .reusable = true}, SHIFT(136),
  [282] = {.count = 1, .reusable = false}, SHIFT(134),
  [284] = {.count = 1, .reusable = false}, SHIFT(137),
  [286] = {.count = 1, .reusable = true}, SHIFT(148),
  [288] = {.count = 1, .reusable = true}, SHIFT(147),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [294] = {.count = 1, .reusable = true}, SHIFT(150),
  [296] = {.count = 1, .reusable = false}, SHIFT(151),
  [298] = {.count = 1, .reusable = true}, SHIFT(154),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [302] = {.count = 1, .reusable = true}, SHIFT(159),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [308] = {.count = 1, .reusable = true}, SHIFT(313),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [312] = {.count = 1, .reusable = true}, SHIFT(164),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [318] = {.count = 1, .reusable = true}, SHIFT(165),
  [320] = {.count = 1, .reusable = true}, SHIFT(167),
  [322] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [324] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(58),
  [329] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat5, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(173),
  [333] = {.count = 1, .reusable = true}, SHIFT(174),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [337] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(20),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(65),
  [345] = {.count = 1, .reusable = true}, SHIFT(175),
  [347] = {.count = 1, .reusable = true}, SHIFT(176),
  [349] = {.count = 1, .reusable = false}, REDUCE(aux_sym__ocaml, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym__ocaml, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(36),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(79),
  [363] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(20),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(85),
  [371] = {.count = 1, .reusable = true}, SHIFT(180),
  [373] = {.count = 1, .reusable = true}, SHIFT(183),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 1),
  [377] = {.count = 1, .reusable = true}, SHIFT(185),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 1),
  [383] = {.count = 1, .reusable = true}, SHIFT(332),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(188),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 4),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 4),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_action_expression, 1),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_action_expression, 1),
  [397] = {.count = 1, .reusable = true}, SHIFT(191),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_menhir_action, 1),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_menhir_action, 1),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [407] = {.count = 1, .reusable = true}, SHIFT(192),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_seq_expression, 1),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_seq_expression, 1),
  [413] = {.count = 1, .reusable = true}, SHIFT(310),
  [415] = {.count = 1, .reusable = true}, SHIFT(194),
  [417] = {.count = 1, .reusable = true}, SHIFT(196),
  [419] = {.count = 1, .reusable = true}, SHIFT(198),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_action, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_action, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(200),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(20),
  [438] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(102),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(110),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [456] = {.count = 1, .reusable = true}, SHIFT(209),
  [458] = {.count = 1, .reusable = true}, SHIFT(210),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [464] = {.count = 1, .reusable = true}, SHIFT(325),
  [466] = {.count = 1, .reusable = true}, SHIFT(211),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [470] = {.count = 1, .reusable = true}, SHIFT(221),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 5),
  [474] = {.count = 1, .reusable = true}, SHIFT(223),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 5),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 5),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 2),
  [482] = {.count = 1, .reusable = true}, SHIFT(228),
  [484] = {.count = 1, .reusable = true}, SHIFT(229),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 2),
  [490] = {.count = 1, .reusable = true}, SHIFT(316),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 2),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_action_expression, 2),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_action_expression, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [502] = {.count = 1, .reusable = true}, SHIFT(240),
  [504] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(148),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_action, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [513] = {.count = 1, .reusable = true}, SHIFT(242),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(245),
  [523] = {.count = 1, .reusable = true}, SHIFT(248),
  [525] = {.count = 1, .reusable = true}, SHIFT(247),
  [527] = {.count = 1, .reusable = true}, SHIFT(342),
  [529] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(210),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [538] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [540] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(167),
  [545] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [547] = {.count = 1, .reusable = true}, SHIFT(251),
  [549] = {.count = 1, .reusable = true}, SHIFT(252),
  [551] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(175),
  [558] = {.count = 1, .reusable = true}, SHIFT(256),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 6),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 6),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 3),
  [566] = {.count = 1, .reusable = true}, SHIFT(260),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [572] = {.count = 1, .reusable = true}, SHIFT(263),
  [574] = {.count = 1, .reusable = true}, SHIFT(262),
  [576] = {.count = 1, .reusable = true}, SHIFT(265),
  [578] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [580] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(192),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_seq_expression, 3),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_seq_expression, 3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 3),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [597] = {.count = 1, .reusable = true}, SHIFT(266),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [601] = {.count = 1, .reusable = true}, SHIFT(270),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [611] = {.count = 1, .reusable = true}, SHIFT(274),
  [613] = {.count = 1, .reusable = true}, SHIFT(276),
  [615] = {.count = 1, .reusable = true}, SHIFT(277),
  [617] = {.count = 1, .reusable = true}, SHIFT(280),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 7),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 7),
  [623] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_pattern, 4),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(229),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 4),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 4),
  [634] = {.count = 1, .reusable = true}, SHIFT(283),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [640] = {.count = 1, .reusable = true}, SHIFT(286),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [648] = {.count = 1, .reusable = true}, SHIFT(289),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(248),
  [657] = {.count = 1, .reusable = true}, SHIFT(292),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 8),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 8),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 5),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 5),
  [667] = {.count = 1, .reusable = true}, REDUCE(aux_sym_symbol_expression_repeat1, 2),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_symbol_expression_repeat1, 2), SHIFT_REPEAT(263),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_seq_expression, 5),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym_seq_expression, 5),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [680] = {.count = 1, .reusable = true}, SHIFT(296),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [684] = {.count = 1, .reusable = true}, SHIFT(298),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 9),
  [688] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 9),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_symbol_expression, 6),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym_symbol_expression, 6),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [696] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [698] = {.count = 1, .reusable = true}, SHIFT(302),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_new_rule, 10),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym_new_rule, 10),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [710] = {.count = 1, .reusable = true}, SHIFT(305),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [714] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [716] = {.count = 1, .reusable = true}, SHIFT(307),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [724] = {.count = 1, .reusable = false}, REDUCE(sym_modifier, 1),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(332),
  [731] = {.count = 1, .reusable = true}, SHIFT(323),
  [733] = {.count = 1, .reusable = true}, SHIFT(321),
  [735] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [737] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(325),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(321),
  [743] = {.count = 1, .reusable = false}, SHIFT(309),
  [745] = {.count = 1, .reusable = true}, SHIFT(311),
  [747] = {.count = 1, .reusable = false}, SHIFT(312),
  [749] = {.count = 1, .reusable = true}, SHIFT(319),
  [751] = {.count = 1, .reusable = true}, SHIFT(358),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(342),
  [756] = {.count = 1, .reusable = true}, SHIFT(329),
  [758] = {.count = 1, .reusable = true}, SHIFT(350),
  [760] = {.count = 1, .reusable = true}, SHIFT(352),
  [762] = {.count = 1, .reusable = true}, SHIFT(354),
};

void *tree_sitter_menhir_external_scanner_create(void);
void tree_sitter_menhir_external_scanner_destroy(void *);
bool tree_sitter_menhir_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_menhir_external_scanner_serialize(void *, char *);
void tree_sitter_menhir_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_menhir(void) {
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
    .field_count = FIELD_COUNT,
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
