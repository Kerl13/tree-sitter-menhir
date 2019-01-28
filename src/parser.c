#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 237
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  anon_sym_PERCENT_PERCENT = 1,
  anon_sym_PIPE = 2,
  anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE = 3,
  anon_sym_LTocaml_type_GT = 4,
  anon_sym_LBRACEaction_RBRACE = 5,
  sym_attribute = 6,
  sym_grammar_attribute = 7,
  sym_lid = 8,
  sym_uid = 9,
  sym_qid = 10,
  anon_sym_PERCENTparameter = 11,
  anon_sym_PERCENTtoken = 12,
  anon_sym_COMMA = 13,
  anon_sym_PERCENTtype = 14,
  anon_sym_PERCENTstart = 15,
  anon_sym_PERCENTattribute = 16,
  anon_sym_PERCENTon_error_reduce = 17,
  anon_sym_SEMI = 18,
  anon_sym_PERCENTleft = 19,
  anon_sym_PERCENTright = 20,
  anon_sym_PERCENTnonassoc = 21,
  anon_sym_LPAREN = 22,
  anon_sym_COMMA2 = 23,
  anon_sym_RPAREN = 24,
  anon_sym_COLON = 25,
  anon_sym_PERCENTpublic = 26,
  anon_sym_PERCENTinline = 27,
  anon_sym_PERCENTprec = 28,
  anon_sym_EQ = 29,
  anon_sym_QMARK = 30,
  anon_sym_STAR = 31,
  anon_sym_PLUS = 32,
  sym_new_rule = 33,
  sym_postlude = 34,
  sym_source_file = 35,
  sym_bar = 36,
  sym_header = 37,
  sym_ocaml_type = 38,
  sym_action = 39,
  sym_symbol = 40,
  sym_declaration = 41,
  sym_terminal_alias_attrs = 42,
  sym_priority_keyword = 43,
  sym_non_terminal = 44,
  sym_old_rule = 45,
  sym_flags = 46,
  sym_production_group = 47,
  sym_precedence = 48,
  sym_producer = 49,
  sym_strict_actual = 50,
  sym_actual = 51,
  sym_lax_actual = 52,
  sym_modifier = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_source_file_repeat2 = 55,
  aux_sym_declaration_repeat1 = 56,
  aux_sym_declaration_repeat2 = 57,
  aux_sym_declaration_repeat3 = 58,
  aux_sym_declaration_repeat4 = 59,
  aux_sym_declaration_repeat5 = 60,
  aux_sym_old_rule_repeat1 = 61,
  aux_sym_old_rule_repeat2 = 62,
  aux_sym_old_rule_repeat3 = 63,
  aux_sym_production_group_repeat1 = 64,
  aux_sym_production_group_repeat2 = 65,
  aux_sym_strict_actual_repeat1 = 66,
  aux_sym_actual_repeat1 = 67,
  aux_sym_lax_actual_repeat1 = 68,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_PIPE] = "|",
  [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = "%{ocaml_code%}",
  [anon_sym_LTocaml_type_GT] = "<ocaml_type>",
  [anon_sym_LBRACEaction_RBRACE] = "{action}",
  [sym_attribute] = "attribute",
  [sym_grammar_attribute] = "grammar_attribute",
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
  [anon_sym_COMMA2] = ", ",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_PERCENTpublic] = "%public",
  [anon_sym_PERCENTinline] = "%inline",
  [anon_sym_PERCENTprec] = "%prec",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_new_rule] = "new_rule",
  [sym_postlude] = "postlude",
  [sym_source_file] = "source_file",
  [sym_bar] = "bar",
  [sym_header] = "header",
  [sym_ocaml_type] = "ocaml_type",
  [sym_action] = "action",
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
  [aux_sym_lax_actual_repeat1] = "lax_actual_repeat1",
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
  [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTocaml_type_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEaction_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_attribute] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COMMA2] = {
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
  [sym_new_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_postlude] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml_type] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
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
  [aux_sym_lax_actual_repeat1] = {
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
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == 'Q')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'a')
        ADVANCE(22);
      if (lookahead == 'i')
        ADVANCE(23);
      if (lookahead == 'l')
        ADVANCE(24);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'p')
        ADVANCE(27);
      if (lookahead == 'r')
        ADVANCE(28);
      if (lookahead == 's')
        ADVANCE(29);
      if (lookahead == 't')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_uid);
      if (lookahead == 'I')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '@')
        ADVANCE(34);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'a')
        ADVANCE(36);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_uid);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_lid);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 21:
      if (lookahead == '@')
        ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 't')
        ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'o')
        ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'r')
        ADVANCE(44);
      if (lookahead == 'u')
        ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i')
        ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'o')
        ADVANCE(48);
      if (lookahead == 'y')
        ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'c')
        ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_uid);
      if (lookahead == 'D')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 'a')
        ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'w')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'c')
        ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'g')
        ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 't')
        ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'f')
        ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == '_')
        ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'b')
        ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'g')
        ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'k')
        ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'p')
        ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'c')
        ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_qid);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 't')
        ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == '_')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 't')
        ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'r')
        ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'i')
        ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 't')
        ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'a')
        ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'c')
        ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'h')
        ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'r')
        ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'e')
        ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'm')
        ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'r')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 73:
      if (lookahead == 'i')
        ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'a')
        ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'i')
        ADVANCE(93);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PERCENTleft);
      END_STATE();
    case 78:
      if (lookahead == 's')
        ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'r')
        ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'm')
        ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PERCENTprec);
      END_STATE();
    case 82:
      if (lookahead == 'i')
        ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PERCENTtype);
      END_STATE();
    case 87:
      if (lookahead == 'm')
        ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'l')
        ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'u')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 91:
      if (lookahead == 'o')
        ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'm')
        ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'b')
        ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 's')
        ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'r')
        ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PERCENTright);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PERCENTstart);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PERCENTtoken);
      END_STATE();
    case 102:
      if (lookahead == 'l')
        ADVANCE(114);
      END_STATE();
    case 103:
      if (lookahead == '_')
        ADVANCE(115);
      END_STATE();
    case 104:
      if (lookahead == 'i')
        ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'l')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'm')
        ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'u')
        ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PERCENTinline);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'o')
        ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 't')
        ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PERCENTpublic);
      END_STATE();
    case 114:
      if (lookahead == '_')
        ADVANCE(124);
      END_STATE();
    case 115:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 116:
      if (lookahead == 'b')
        ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 118:
      if (lookahead == '}')
        ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'c')
        ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 123:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'c')
        ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 'y')
        ADVANCE(135);
      END_STATE();
    case 126:
      if (lookahead == 'u')
        ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_new_rule);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACEaction_RBRACE);
      END_STATE();
    case 129:
      if (lookahead == 'r')
        ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENTnonassoc);
      END_STATE();
    case 132:
      if (lookahead == '_')
        ADVANCE(139);
      END_STATE();
    case 133:
      if (lookahead == 'r')
        ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 135:
      if (lookahead == 'p')
        ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == '_')
        ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENTattribute);
      END_STATE();
    case 139:
      if (lookahead == 'r')
        ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PERCENTparameter);
      END_STATE();
    case 141:
      if (lookahead == 'd')
        ADVANCE(146);
      END_STATE();
    case 142:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 143:
      if (lookahead == 'e')
        ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 'a')
        ADVANCE(149);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead == '>')
        ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == ']')
        ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == 't')
        ADVANCE(154);
      END_STATE();
    case 150:
      if (lookahead == 'd')
        ADVANCE(155);
      END_STATE();
    case 151:
      if (lookahead == '%')
        ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LTocaml_type_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_attribute);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(157);
      END_STATE();
    case 155:
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == '}')
        ADVANCE(159);
      END_STATE();
    case 157:
      if (lookahead == 'r')
        ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 'c')
        ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'e')
        ADVANCE(163);
      END_STATE();
    case 162:
      if (lookahead == 'b')
        ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PERCENTon_error_reduce);
      END_STATE();
    case 164:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == ']')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_grammar_attribute);
      END_STATE();
    case 169:
      if (lookahead == '%')
        ADVANCE(170);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == 'Q')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 170:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'a')
        ADVANCE(22);
      if (lookahead == 'l')
        ADVANCE(24);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 'r')
        ADVANCE(28);
      if (lookahead == 's')
        ADVANCE(29);
      if (lookahead == 't')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      END_STATE();
    case 171:
      if (lookahead == 'a')
        ADVANCE(43);
      END_STATE();
    case 172:
      if (lookahead == '%')
        ADVANCE(173);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(174);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 173:
      if (lookahead == 'p')
        ADVANCE(175);
      END_STATE();
    case 174:
      if (lookahead == ' ')
        ADVANCE(176);
      END_STATE();
    case 175:
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 177:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(178);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == 'Q')
        ADVANCE(13);
      if (lookahead == 'n')
        ADVANCE(15);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 178:
      if (lookahead == '%')
        ADVANCE(179);
      if (lookahead == 'i')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(180);
      END_STATE();
    case 179:
      if (lookahead == 'p')
        ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 'r')
        ADVANCE(44);
      if (lookahead == 'u')
        ADVANCE(45);
      END_STATE();
    case 181:
      if (lookahead == 'o')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 's')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 't')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'u')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'd')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_postlude);
      END_STATE();
    case 189:
      if (lookahead == '%')
        ADVANCE(190);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(174);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 190:
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'a')
        ADVANCE(22);
      if (lookahead == 'l')
        ADVANCE(24);
      if (lookahead == 'n')
        ADVANCE(25);
      if (lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'p')
        ADVANCE(191);
      if (lookahead == 'r')
        ADVANCE(28);
      if (lookahead == 's')
        ADVANCE(29);
      if (lookahead == 't')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(31);
      END_STATE();
    case 191:
      if (lookahead == 'a')
        ADVANCE(43);
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 192:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '%')
        ADVANCE(194);
      if (lookahead == 'Q')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 194:
      if (lookahead == 'i')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'u')
        ADVANCE(45);
      END_STATE();
    case 196:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == '%')
        ADVANCE(190);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == 'Q')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 198:
      if (lookahead == '%')
        ADVANCE(170);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      END_STATE();
    case 199:
      if (lookahead == '%')
        ADVANCE(173);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(174);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == 'Q')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 172},
  [4] = {.lex_state = 177},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 172},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 169},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 172},
  [11] = {.lex_state = 169},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 189},
  [17] = {.lex_state = 169},
  [18] = {.lex_state = 169},
  [19] = {.lex_state = 192},
  [20] = {.lex_state = 193},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 193},
  [23] = {.lex_state = 177},
  [24] = {.lex_state = 169},
  [25] = {.lex_state = 196},
  [26] = {.lex_state = 197},
  [27] = {.lex_state = 169},
  [28] = {.lex_state = 169},
  [29] = {.lex_state = 169},
  [30] = {.lex_state = 169},
  [31] = {.lex_state = 169},
  [32] = {.lex_state = 198},
  [33] = {.lex_state = 172},
  [34] = {.lex_state = 169},
  [35] = {.lex_state = 169},
  [36] = {.lex_state = 177},
  [37] = {.lex_state = 169},
  [38] = {.lex_state = 169},
  [39] = {.lex_state = 169},
  [40] = {.lex_state = 169},
  [41] = {.lex_state = 169},
  [42] = {.lex_state = 169},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 177},
  [45] = {.lex_state = 196},
  [46] = {.lex_state = 199},
  [47] = {.lex_state = 169},
  [48] = {.lex_state = 196},
  [49] = {.lex_state = 197},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 169},
  [52] = {.lex_state = 169},
  [53] = {.lex_state = 169},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 169},
  [56] = {.lex_state = 169},
  [57] = {.lex_state = 198},
  [58] = {.lex_state = 198},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 198},
  [61] = {.lex_state = 198},
  [62] = {.lex_state = 169},
  [63] = {.lex_state = 177},
  [64] = {.lex_state = 169},
  [65] = {.lex_state = 169},
  [66] = {.lex_state = 169},
  [67] = {.lex_state = 169},
  [68] = {.lex_state = 169},
  [69] = {.lex_state = 199},
  [70] = {.lex_state = 169},
  [71] = {.lex_state = 196},
  [72] = {.lex_state = 177},
  [73] = {.lex_state = 199},
  [74] = {.lex_state = 177},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 199},
  [77] = {.lex_state = 172},
  [78] = {.lex_state = 177},
  [79] = {.lex_state = 199},
  [80] = {.lex_state = 172},
  [81] = {.lex_state = 199},
  [82] = {.lex_state = 199},
  [83] = {.lex_state = 199},
  [84] = {.lex_state = 177},
  [85] = {.lex_state = 172},
  [86] = {.lex_state = 196},
  [87] = {.lex_state = 169},
  [88] = {.lex_state = 169},
  [89] = {.lex_state = 172},
  [90] = {.lex_state = 172},
  [91] = {.lex_state = 169},
  [92] = {.lex_state = 169},
  [93] = {.lex_state = 169},
  [94] = {.lex_state = 198},
  [95] = {.lex_state = 198},
  [96] = {.lex_state = 198},
  [97] = {.lex_state = 198},
  [98] = {.lex_state = 198},
  [99] = {.lex_state = 169},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 169},
  [102] = {.lex_state = 169},
  [103] = {.lex_state = 199},
  [104] = {.lex_state = 177},
  [105] = {.lex_state = 172},
  [106] = {.lex_state = 199},
  [107] = {.lex_state = 169},
  [108] = {.lex_state = 199},
  [109] = {.lex_state = 172},
  [110] = {.lex_state = 169},
  [111] = {.lex_state = 177},
  [112] = {.lex_state = 172},
  [113] = {.lex_state = 169},
  [114] = {.lex_state = 177},
  [115] = {.lex_state = 199},
  [116] = {.lex_state = 172},
  [117] = {.lex_state = 172},
  [118] = {.lex_state = 199},
  [119] = {.lex_state = 199},
  [120] = {.lex_state = 199},
  [121] = {.lex_state = 199},
  [122] = {.lex_state = 199},
  [123] = {.lex_state = 172},
  [124] = {.lex_state = 177},
  [125] = {.lex_state = 177},
  [126] = {.lex_state = 199},
  [127] = {.lex_state = 169},
  [128] = {.lex_state = 196},
  [129] = {.lex_state = 172},
  [130] = {.lex_state = 169},
  [131] = {.lex_state = 172},
  [132] = {.lex_state = 169},
  [133] = {.lex_state = 172},
  [134] = {.lex_state = 172},
  [135] = {.lex_state = 169},
  [136] = {.lex_state = 177},
  [137] = {.lex_state = 177},
  [138] = {.lex_state = 177},
  [139] = {.lex_state = 196},
  [140] = {.lex_state = 172},
  [141] = {.lex_state = 199},
  [142] = {.lex_state = 172},
  [143] = {.lex_state = 199},
  [144] = {.lex_state = 177},
  [145] = {.lex_state = 177},
  [146] = {.lex_state = 177},
  [147] = {.lex_state = 177},
  [148] = {.lex_state = 172},
  [149] = {.lex_state = 172},
  [150] = {.lex_state = 199},
  [151] = {.lex_state = 172},
  [152] = {.lex_state = 172},
  [153] = {.lex_state = 199},
  [154] = {.lex_state = 172},
  [155] = {.lex_state = 199},
  [156] = {.lex_state = 199},
  [157] = {.lex_state = 172},
  [158] = {.lex_state = 172},
  [159] = {.lex_state = 199},
  [160] = {.lex_state = 199},
  [161] = {.lex_state = 199},
  [162] = {.lex_state = 172},
  [163] = {.lex_state = 177},
  [164] = {.lex_state = 177},
  [165] = {.lex_state = 177},
  [166] = {.lex_state = 172},
  [167] = {.lex_state = 199},
  [168] = {.lex_state = 172},
  [169] = {.lex_state = 172},
  [170] = {.lex_state = 169},
  [171] = {.lex_state = 172},
  [172] = {.lex_state = 172},
  [173] = {.lex_state = 177},
  [174] = {.lex_state = 177},
  [175] = {.lex_state = 199},
  [176] = {.lex_state = 196},
  [177] = {.lex_state = 177},
  [178] = {.lex_state = 172},
  [179] = {.lex_state = 199},
  [180] = {.lex_state = 199},
  [181] = {.lex_state = 177},
  [182] = {.lex_state = 177},
  [183] = {.lex_state = 172},
  [184] = {.lex_state = 172},
  [185] = {.lex_state = 172},
  [186] = {.lex_state = 172},
  [187] = {.lex_state = 199},
  [188] = {.lex_state = 199},
  [189] = {.lex_state = 199},
  [190] = {.lex_state = 199},
  [191] = {.lex_state = 199},
  [192] = {.lex_state = 172},
  [193] = {.lex_state = 199},
  [194] = {.lex_state = 172},
  [195] = {.lex_state = 199},
  [196] = {.lex_state = 172},
  [197] = {.lex_state = 172},
  [198] = {.lex_state = 177},
  [199] = {.lex_state = 199},
  [200] = {.lex_state = 177},
  [201] = {.lex_state = 199},
  [202] = {.lex_state = 177},
  [203] = {.lex_state = 196},
  [204] = {.lex_state = 199},
  [205] = {.lex_state = 177},
  [206] = {.lex_state = 172},
  [207] = {.lex_state = 172},
  [208] = {.lex_state = 172},
  [209] = {.lex_state = 172},
  [210] = {.lex_state = 172},
  [211] = {.lex_state = 199},
  [212] = {.lex_state = 172},
  [213] = {.lex_state = 172},
  [214] = {.lex_state = 172},
  [215] = {.lex_state = 172},
  [216] = {.lex_state = 177},
  [217] = {.lex_state = 177},
  [218] = {.lex_state = 177},
  [219] = {.lex_state = 199},
  [220] = {.lex_state = 199},
  [221] = {.lex_state = 172},
  [222] = {.lex_state = 172},
  [223] = {.lex_state = 199},
  [224] = {.lex_state = 172},
  [225] = {.lex_state = 177},
  [226] = {.lex_state = 177},
  [227] = {.lex_state = 177},
  [228] = {.lex_state = 199},
  [229] = {.lex_state = 172},
  [230] = {.lex_state = 199},
  [231] = {.lex_state = 177},
  [232] = {.lex_state = 177},
  [233] = {.lex_state = 177},
  [234] = {.lex_state = 177},
  [235] = {.lex_state = 177},
  [236] = {.lex_state = 177},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(1),
    [sym_new_rule] = ACTIONS(1),
    [anon_sym_PERCENTtoken] = ACTIONS(1),
    [sym_uid] = ACTIONS(1),
    [anon_sym_PERCENTtype] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(1),
    [sym_lid] = ACTIONS(1),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENTpublic] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENTright] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_qid] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(1),
    [anon_sym_LTocaml_type_GT] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(1),
    [anon_sym_PERCENTattribute] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_grammar_attribute] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENTleft] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_declaration] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_header] = STATE(8),
    [sym_priority_keyword] = STATE(13),
    [sym_source_file] = STATE(14),
    [anon_sym_PERCENTnonassoc] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(7),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(9),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [anon_sym_PERCENTattribute] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_grammar_attribute] = ACTIONS(15),
    [anon_sym_PERCENTtoken] = ACTIONS(17),
    [anon_sym_PERCENTtype] = ACTIONS(19),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(21),
    [anon_sym_PERCENTleft] = ACTIONS(3),
  },
  [2] = {
    [sym_uid] = ACTIONS(23),
    [sym_qid] = ACTIONS(23),
    [sym_lid] = ACTIONS(25),
  },
  [3] = {
    [sym_ocaml_type] = STATE(17),
    [sym_non_terminal] = STATE(18),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
    [sym_lid] = ACTIONS(29),
  },
  [4] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(23),
    [sym_flags] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(23),
    [sym_qid] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_PERCENTpublic] = ACTIONS(35),
    [sym_new_rule] = ACTIONS(37),
    [anon_sym_PERCENTinline] = ACTIONS(39),
    [sym_postlude] = ACTIONS(41),
    [sym_uid] = ACTIONS(31),
    [sym_lid] = ACTIONS(31),
  },
  [5] = {
    [sym_strict_actual] = STATE(27),
    [sym_symbol] = STATE(28),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [6] = {
    [sym_ocaml_type] = STATE(29),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [7] = {
    [sym_strict_actual] = STATE(30),
    [sym_symbol] = STATE(28),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [8] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(47),
    [anon_sym_PERCENTstart] = ACTIONS(47),
    [anon_sym_PERCENTright] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(47),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(47),
    [anon_sym_PERCENTparameter] = ACTIONS(47),
    [anon_sym_PERCENTattribute] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_grammar_attribute] = ACTIONS(47),
    [anon_sym_PERCENTtoken] = ACTIONS(47),
    [anon_sym_PERCENTtype] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(47),
    [anon_sym_PERCENTleft] = ACTIONS(47),
  },
  [9] = {
    [sym_terminal_alias_attrs] = STATE(32),
    [sym_ocaml_type] = STATE(33),
    [sym_uid] = ACTIONS(49),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [10] = {
    [sym_ocaml_type] = STATE(35),
    [anon_sym_LTocaml_type_GT] = ACTIONS(51),
  },
  [11] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(53),
    [anon_sym_PERCENTstart] = ACTIONS(53),
    [anon_sym_PERCENTright] = ACTIONS(53),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(53),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(53),
    [anon_sym_PERCENTparameter] = ACTIONS(53),
    [anon_sym_PERCENTattribute] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [sym_grammar_attribute] = ACTIONS(53),
    [anon_sym_PERCENTtoken] = ACTIONS(53),
    [anon_sym_PERCENTtype] = ACTIONS(53),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(53),
    [anon_sym_PERCENTleft] = ACTIONS(53),
  },
  [12] = {
    [sym_declaration] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [sym_header] = STATE(8),
    [sym_priority_keyword] = STATE(13),
    [anon_sym_PERCENTnonassoc] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(3),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(9),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(55),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [anon_sym_PERCENTattribute] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_grammar_attribute] = ACTIONS(15),
    [anon_sym_PERCENTtoken] = ACTIONS(17),
    [anon_sym_PERCENTtype] = ACTIONS(19),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(21),
    [anon_sym_PERCENTleft] = ACTIONS(3),
  },
  [13] = {
    [sym_symbol] = STATE(38),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(57),
  },
  [15] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(59),
    [sym_lid] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
  },
  [16] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(61),
    [anon_sym_PERCENTstart] = ACTIONS(61),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_COMMA2] = ACTIONS(61),
    [anon_sym_PERCENTtoken] = ACTIONS(61),
    [sym_uid] = ACTIONS(61),
    [anon_sym_PERCENTtype] = ACTIONS(61),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(61),
    [sym_lid] = ACTIONS(61),
    [anon_sym_PERCENTright] = ACTIONS(61),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(61),
    [anon_sym_PERCENTparameter] = ACTIONS(61),
    [anon_sym_PERCENTattribute] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [sym_grammar_attribute] = ACTIONS(61),
    [anon_sym_PERCENTprec] = ACTIONS(61),
    [anon_sym_PERCENTleft] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [17] = {
    [sym_non_terminal] = STATE(39),
    [sym_lid] = ACTIONS(29),
  },
  [18] = {
    [sym_non_terminal] = STATE(41),
    [aux_sym_declaration_repeat4] = STATE(41),
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(63),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_PERCENTleft] = ACTIONS(63),
  },
  [19] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LTocaml_type_GT] = ACTIONS(67),
    [sym_attribute] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_COMMA2] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [20] = {
    [sym_qid] = ACTIONS(69),
    [sym_uid] = ACTIONS(69),
    [anon_sym_PERCENTinline] = ACTIONS(71),
    [sym_lid] = ACTIONS(73),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [22] = {
    [sym_qid] = ACTIONS(69),
    [anon_sym_PERCENTpublic] = ACTIONS(71),
    [sym_uid] = ACTIONS(69),
    [sym_lid] = ACTIONS(73),
  },
  [23] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(44),
    [sym_flags] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(44),
    [sym_qid] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PERCENTpublic] = ACTIONS(35),
    [sym_new_rule] = ACTIONS(77),
    [anon_sym_PERCENTinline] = ACTIONS(39),
    [sym_postlude] = ACTIONS(79),
    [sym_uid] = ACTIONS(31),
    [sym_lid] = ACTIONS(31),
  },
  [24] = {
    [sym_symbol] = STATE(45),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [25] = {
    [aux_sym_declaration_repeat5] = STATE(48),
    [anon_sym_COLON] = ACTIONS(83),
    [sym_attribute] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
  },
  [26] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(67),
    [sym_qid] = ACTIONS(89),
    [anon_sym_PERCENTstart] = ACTIONS(67),
    [anon_sym_LTocaml_type_GT] = ACTIONS(67),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(67),
    [sym_attribute] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_PERCENTtoken] = ACTIONS(67),
    [sym_uid] = ACTIONS(89),
    [anon_sym_PERCENTtype] = ACTIONS(67),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(67),
    [sym_lid] = ACTIONS(67),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_PERCENTright] = ACTIONS(67),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PERCENTparameter] = ACTIONS(67),
    [anon_sym_PERCENTattribute] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [sym_grammar_attribute] = ACTIONS(67),
    [anon_sym_PERCENTprec] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_PERCENTleft] = ACTIONS(67),
  },
  [27] = {
    [sym_strict_actual] = STATE(53),
    [sym_modifier] = STATE(51),
    [aux_sym_declaration_repeat3] = STATE(52),
    [sym_symbol] = STATE(28),
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [sym_qid] = ACTIONS(43),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(63),
    [sym_lid] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_PERCENTleft] = ACTIONS(63),
  },
  [28] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(95),
    [sym_qid] = ACTIONS(97),
    [anon_sym_PERCENTstart] = ACTIONS(95),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(95),
    [sym_attribute] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_PERCENTtoken] = ACTIONS(95),
    [sym_uid] = ACTIONS(97),
    [anon_sym_PERCENTtype] = ACTIONS(95),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(95),
    [sym_lid] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_PERCENTright] = ACTIONS(95),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_PERCENTparameter] = ACTIONS(95),
    [anon_sym_PERCENTattribute] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [sym_grammar_attribute] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(95),
    [anon_sym_PERCENTleft] = ACTIONS(95),
  },
  [29] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENTleft] = ACTIONS(63),
  },
  [30] = {
    [sym_strict_actual] = STATE(53),
    [sym_modifier] = STATE(51),
    [aux_sym_declaration_repeat5] = STATE(55),
    [aux_sym_declaration_repeat3] = STATE(56),
    [sym_symbol] = STATE(28),
    [sym_qid] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(91),
    [sym_attribute] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_uid] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(91),
    [sym_lid] = ACTIONS(45),
  },
  [31] = {
    [aux_sym_declaration_repeat5] = STATE(58),
    [anon_sym_PERCENTnonassoc] = ACTIONS(103),
    [sym_qid] = ACTIONS(105),
    [anon_sym_PERCENTstart] = ACTIONS(103),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(103),
    [sym_attribute] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_PERCENTtoken] = ACTIONS(103),
    [sym_uid] = ACTIONS(109),
    [anon_sym_PERCENTtype] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(103),
    [anon_sym_PERCENTright] = ACTIONS(103),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(103),
    [anon_sym_PERCENTparameter] = ACTIONS(103),
    [anon_sym_PERCENTattribute] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_grammar_attribute] = ACTIONS(103),
    [anon_sym_PERCENTleft] = ACTIONS(103),
  },
  [32] = {
    [aux_sym_declaration_repeat1] = STATE(60),
    [sym_terminal_alias_attrs] = STATE(60),
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(63),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_PERCENTleft] = ACTIONS(63),
  },
  [33] = {
    [sym_terminal_alias_attrs] = STATE(61),
    [sym_uid] = ACTIONS(49),
  },
  [34] = {
    [sym_uid] = ACTIONS(113),
    [sym_qid] = ACTIONS(113),
    [sym_lid] = ACTIONS(61),
  },
  [35] = {
    [sym_strict_actual] = STATE(62),
    [sym_symbol] = STATE(28),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [36] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(63),
    [sym_flags] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_qid] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_PERCENTpublic] = ACTIONS(35),
    [sym_new_rule] = ACTIONS(115),
    [anon_sym_PERCENTinline] = ACTIONS(39),
    [sym_postlude] = ACTIONS(79),
    [sym_uid] = ACTIONS(31),
    [sym_lid] = ACTIONS(31),
  },
  [37] = {
    [sym_declaration] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [sym_header] = STATE(8),
    [sym_priority_keyword] = STATE(13),
    [anon_sym_PERCENTnonassoc] = ACTIONS(117),
    [anon_sym_PERCENTstart] = ACTIONS(120),
    [anon_sym_PERCENTright] = ACTIONS(117),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(123),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(125),
    [anon_sym_PERCENTparameter] = ACTIONS(128),
    [anon_sym_PERCENTattribute] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_grammar_attribute] = ACTIONS(134),
    [anon_sym_PERCENTtoken] = ACTIONS(137),
    [anon_sym_PERCENTtype] = ACTIONS(140),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(143),
    [anon_sym_PERCENTleft] = ACTIONS(117),
  },
  [38] = {
    [aux_sym_declaration_repeat2] = STATE(65),
    [sym_symbol] = STATE(65),
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [sym_qid] = ACTIONS(43),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(63),
    [sym_lid] = ACTIONS(45),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_PERCENTleft] = ACTIONS(63),
  },
  [39] = {
    [sym_non_terminal] = STATE(66),
    [aux_sym_declaration_repeat4] = STATE(66),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [40] = {
    [sym_non_terminal] = STATE(67),
    [sym_lid] = ACTIONS(29),
  },
  [41] = {
    [sym_non_terminal] = STATE(68),
    [aux_sym_declaration_repeat4] = STATE(68),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [42] = {
    [sym_uid] = ACTIONS(150),
    [sym_qid] = ACTIONS(150),
    [sym_lid] = ACTIONS(152),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(154),
  },
  [44] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(44),
    [sym_flags] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(44),
    [sym_qid] = ACTIONS(156),
    [anon_sym_PERCENTpublic] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_new_rule] = ACTIONS(164),
    [anon_sym_PERCENTinline] = ACTIONS(167),
    [sym_postlude] = ACTIONS(162),
    [sym_uid] = ACTIONS(156),
    [sym_lid] = ACTIONS(156),
  },
  [45] = {
    [aux_sym_declaration_repeat5] = STATE(71),
    [anon_sym_COLON] = ACTIONS(170),
    [sym_attribute] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
  },
  [46] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(84),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(178),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [47] = {
    [sym_symbol] = STATE(85),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [48] = {
    [aux_sym_declaration_repeat5] = STATE(86),
    [anon_sym_COLON] = ACTIONS(170),
    [sym_attribute] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(174),
  },
  [49] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(188),
    [sym_qid] = ACTIONS(190),
    [anon_sym_PERCENTstart] = ACTIONS(188),
    [anon_sym_LTocaml_type_GT] = ACTIONS(188),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(188),
    [sym_attribute] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_PERCENTtoken] = ACTIONS(188),
    [sym_uid] = ACTIONS(190),
    [anon_sym_PERCENTtype] = ACTIONS(188),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(188),
    [sym_lid] = ACTIONS(188),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PERCENTright] = ACTIONS(188),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(188),
    [anon_sym_PERCENTparameter] = ACTIONS(188),
    [anon_sym_PERCENTattribute] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [sym_grammar_attribute] = ACTIONS(188),
    [anon_sym_PERCENTprec] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_PERCENTleft] = ACTIONS(188),
  },
  [50] = {
    [sym_strict_actual] = STATE(87),
    [sym_symbol] = STATE(28),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [51] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(192),
    [sym_qid] = ACTIONS(194),
    [anon_sym_PERCENTstart] = ACTIONS(192),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(192),
    [sym_attribute] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_PERCENTtoken] = ACTIONS(192),
    [sym_uid] = ACTIONS(194),
    [anon_sym_PERCENTtype] = ACTIONS(192),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(192),
    [sym_lid] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_PERCENTright] = ACTIONS(192),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(192),
    [anon_sym_PERCENTparameter] = ACTIONS(192),
    [anon_sym_PERCENTattribute] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [sym_grammar_attribute] = ACTIONS(192),
    [anon_sym_QMARK] = ACTIONS(192),
    [anon_sym_PERCENTleft] = ACTIONS(192),
  },
  [52] = {
    [sym_symbol] = STATE(28),
    [aux_sym_declaration_repeat3] = STATE(88),
    [sym_strict_actual] = STATE(53),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [sym_qid] = ACTIONS(43),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [sym_lid] = ACTIONS(45),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [53] = {
    [sym_modifier] = STATE(51),
    [anon_sym_PERCENTnonassoc] = ACTIONS(196),
    [sym_qid] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(196),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [sym_attribute] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_PERCENTtoken] = ACTIONS(196),
    [sym_uid] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(196),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(196),
    [sym_lid] = ACTIONS(196),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_PERCENTright] = ACTIONS(196),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(196),
    [anon_sym_PERCENTparameter] = ACTIONS(196),
    [anon_sym_PERCENTattribute] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_grammar_attribute] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_PERCENTleft] = ACTIONS(196),
  },
  [54] = {
    [sym_strict_actual] = STATE(89),
    [sym_symbol] = STATE(90),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [55] = {
    [aux_sym_declaration_repeat5] = STATE(91),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [sym_attribute] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [56] = {
    [sym_strict_actual] = STATE(53),
    [aux_sym_declaration_repeat5] = STATE(92),
    [aux_sym_declaration_repeat3] = STATE(93),
    [sym_symbol] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_qid] = ACTIONS(43),
    [sym_uid] = ACTIONS(43),
    [sym_attribute] = ACTIONS(202),
    [sym_lid] = ACTIONS(45),
  },
  [57] = {
    [aux_sym_declaration_repeat5] = STATE(94),
    [anon_sym_PERCENTnonassoc] = ACTIONS(204),
    [anon_sym_PERCENTstart] = ACTIONS(204),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(204),
    [sym_attribute] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_PERCENTtoken] = ACTIONS(204),
    [sym_uid] = ACTIONS(204),
    [anon_sym_PERCENTtype] = ACTIONS(204),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(204),
    [anon_sym_PERCENTright] = ACTIONS(204),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(204),
    [anon_sym_PERCENTparameter] = ACTIONS(204),
    [anon_sym_PERCENTattribute] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [sym_grammar_attribute] = ACTIONS(204),
    [anon_sym_PERCENTleft] = ACTIONS(204),
  },
  [58] = {
    [aux_sym_declaration_repeat5] = STATE(95),
    [anon_sym_PERCENTnonassoc] = ACTIONS(204),
    [anon_sym_PERCENTstart] = ACTIONS(204),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(204),
    [sym_attribute] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_PERCENTtoken] = ACTIONS(204),
    [sym_uid] = ACTIONS(204),
    [anon_sym_PERCENTtype] = ACTIONS(204),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(204),
    [anon_sym_PERCENTright] = ACTIONS(204),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(204),
    [anon_sym_PERCENTparameter] = ACTIONS(204),
    [anon_sym_PERCENTattribute] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [sym_grammar_attribute] = ACTIONS(204),
    [anon_sym_PERCENTleft] = ACTIONS(204),
  },
  [59] = {
    [sym_terminal_alias_attrs] = STATE(96),
    [sym_uid] = ACTIONS(49),
  },
  [60] = {
    [aux_sym_declaration_repeat1] = STATE(97),
    [sym_terminal_alias_attrs] = STATE(97),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [61] = {
    [aux_sym_declaration_repeat1] = STATE(98),
    [sym_terminal_alias_attrs] = STATE(98),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [62] = {
    [sym_strict_actual] = STATE(53),
    [sym_modifier] = STATE(51),
    [aux_sym_declaration_repeat3] = STATE(99),
    [sym_symbol] = STATE(28),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [sym_qid] = ACTIONS(43),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [sym_lid] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [63] = {
    [sym_symbol] = STATE(25),
    [sym_old_rule] = STATE(44),
    [sym_flags] = STATE(24),
    [aux_sym_source_file_repeat2] = STATE(44),
    [sym_qid] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_PERCENTpublic] = ACTIONS(35),
    [sym_new_rule] = ACTIONS(77),
    [anon_sym_PERCENTinline] = ACTIONS(39),
    [sym_postlude] = ACTIONS(210),
    [sym_uid] = ACTIONS(31),
    [sym_lid] = ACTIONS(31),
  },
  [64] = {
    [sym_symbol] = STATE(101),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [65] = {
    [aux_sym_declaration_repeat2] = STATE(102),
    [sym_symbol] = STATE(102),
    [anon_sym_PERCENTnonassoc] = ACTIONS(148),
    [sym_qid] = ACTIONS(43),
    [anon_sym_PERCENTstart] = ACTIONS(148),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_PERCENTtoken] = ACTIONS(148),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTtype] = ACTIONS(148),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(148),
    [sym_lid] = ACTIONS(45),
    [anon_sym_PERCENTright] = ACTIONS(148),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(148),
    [anon_sym_PERCENTparameter] = ACTIONS(148),
    [anon_sym_PERCENTattribute] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_grammar_attribute] = ACTIONS(148),
    [anon_sym_PERCENTleft] = ACTIONS(148),
  },
  [66] = {
    [sym_non_terminal] = STATE(68),
    [aux_sym_declaration_repeat4] = STATE(68),
    [anon_sym_PERCENTnonassoc] = ACTIONS(212),
    [anon_sym_PERCENTstart] = ACTIONS(212),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_PERCENTtoken] = ACTIONS(212),
    [anon_sym_PERCENTtype] = ACTIONS(212),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(212),
    [sym_lid] = ACTIONS(29),
    [anon_sym_PERCENTright] = ACTIONS(212),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(212),
    [anon_sym_PERCENTparameter] = ACTIONS(212),
    [anon_sym_PERCENTattribute] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(65),
    [sym_grammar_attribute] = ACTIONS(212),
    [anon_sym_PERCENTleft] = ACTIONS(212),
  },
  [67] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(214),
    [anon_sym_PERCENTstart] = ACTIONS(214),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_PERCENTtoken] = ACTIONS(214),
    [anon_sym_PERCENTtype] = ACTIONS(214),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(214),
    [sym_lid] = ACTIONS(214),
    [anon_sym_PERCENTright] = ACTIONS(214),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(214),
    [anon_sym_PERCENTparameter] = ACTIONS(214),
    [anon_sym_PERCENTattribute] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_grammar_attribute] = ACTIONS(214),
    [anon_sym_PERCENTleft] = ACTIONS(214),
  },
  [68] = {
    [sym_non_terminal] = STATE(68),
    [aux_sym_declaration_repeat4] = STATE(68),
    [anon_sym_PERCENTnonassoc] = ACTIONS(214),
    [anon_sym_PERCENTstart] = ACTIONS(214),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_PERCENTtoken] = ACTIONS(214),
    [anon_sym_PERCENTtype] = ACTIONS(214),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(214),
    [sym_lid] = ACTIONS(216),
    [anon_sym_PERCENTright] = ACTIONS(214),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(214),
    [anon_sym_PERCENTparameter] = ACTIONS(214),
    [anon_sym_PERCENTattribute] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_grammar_attribute] = ACTIONS(214),
    [anon_sym_PERCENTleft] = ACTIONS(214),
  },
  [69] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(104),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(222),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [70] = {
    [sym_symbol] = STATE(105),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [71] = {
    [aux_sym_declaration_repeat5] = STATE(86),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_attribute] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(226),
  },
  [72] = {
    [sym_qid] = ACTIONS(228),
    [anon_sym_PERCENTpublic] = ACTIONS(230),
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_new_rule] = ACTIONS(228),
    [anon_sym_PERCENTinline] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_PERCENTprec] = ACTIONS(230),
    [sym_uid] = ACTIONS(228),
    [sym_postlude] = ACTIONS(230),
    [sym_lid] = ACTIONS(228),
  },
  [73] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(104),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [74] = {
    [sym_qid] = ACTIONS(113),
    [anon_sym_PERCENTpublic] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_new_rule] = ACTIONS(113),
    [anon_sym_PERCENTinline] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_PERCENTprec] = ACTIONS(61),
    [sym_uid] = ACTIONS(113),
    [sym_postlude] = ACTIONS(61),
    [sym_lid] = ACTIONS(113),
  },
  [75] = {
    [sym_symbol] = STATE(109),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [76] = {
    [sym_qid] = ACTIONS(89),
    [anon_sym_LTocaml_type_GT] = ACTIONS(67),
    [sym_attribute] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_COMMA2] = ACTIONS(67),
    [sym_uid] = ACTIONS(89),
    [sym_lid] = ACTIONS(67),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_PERCENTprec] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [77] = {
    [sym_ocaml_type] = STATE(111),
    [sym_action] = STATE(111),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(112),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
  },
  [78] = {
    [sym_precedence] = STATE(114),
    [sym_qid] = ACTIONS(240),
    [anon_sym_PERCENTpublic] = ACTIONS(242),
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_new_rule] = ACTIONS(240),
    [anon_sym_PERCENTinline] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [sym_postlude] = ACTIONS(242),
    [sym_uid] = ACTIONS(240),
    [anon_sym_PERCENTprec] = ACTIONS(244),
    [sym_lid] = ACTIONS(240),
  },
  [79] = {
    [aux_sym_production_group_repeat1] = STATE(115),
    [sym_ocaml_type] = STATE(111),
    [sym_action] = STATE(111),
    [sym_precedence] = STATE(116),
    [sym_producer] = STATE(115),
    [aux_sym_production_group_repeat2] = STATE(112),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [80] = {
    [sym_ocaml_type] = STATE(111),
    [sym_action] = STATE(111),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(117),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
  },
  [81] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(246),
    [sym_qid] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LTocaml_type_GT] = ACTIONS(246),
    [sym_attribute] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_PERCENTprec] = ACTIONS(246),
    [sym_uid] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(246),
    [sym_lid] = ACTIONS(246),
  },
  [82] = {
    [aux_sym_declaration_repeat5] = STATE(119),
    [sym_modifier] = STATE(120),
    [aux_sym_old_rule_repeat3] = STATE(121),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(252),
    [sym_qid] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_LTocaml_type_GT] = ACTIONS(252),
    [sym_attribute] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_PERCENTprec] = ACTIONS(252),
    [sym_uid] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(91),
    [sym_lid] = ACTIONS(252),
  },
  [83] = {
    [aux_sym_production_group_repeat1] = STATE(122),
    [sym_precedence] = STATE(123),
    [sym_actual] = STATE(82),
    [sym_producer] = STATE(122),
    [sym_symbol] = STATE(81),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(260),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_uid] = ACTIONS(43),
    [sym_lid] = ACTIONS(184),
  },
  [84] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(125),
    [aux_sym_old_rule_repeat3] = STATE(124),
    [sym_qid] = ACTIONS(262),
    [anon_sym_PERCENTpublic] = ACTIONS(264),
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_new_rule] = ACTIONS(262),
    [anon_sym_PERCENTinline] = ACTIONS(264),
    [sym_postlude] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_uid] = ACTIONS(262),
    [sym_lid] = ACTIONS(262),
  },
  [85] = {
    [aux_sym_old_rule_repeat1] = STATE(129),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(270),
  },
  [86] = {
    [aux_sym_declaration_repeat5] = STATE(86),
    [anon_sym_COLON] = ACTIONS(272),
    [sym_attribute] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
  },
  [87] = {
    [sym_modifier] = STATE(51),
    [anon_sym_PERCENTnonassoc] = ACTIONS(277),
    [sym_qid] = ACTIONS(279),
    [anon_sym_PERCENTstart] = ACTIONS(277),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(277),
    [sym_attribute] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_PERCENTtoken] = ACTIONS(277),
    [sym_uid] = ACTIONS(279),
    [anon_sym_PERCENTtype] = ACTIONS(277),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(277),
    [sym_lid] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_PERCENTright] = ACTIONS(277),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(277),
    [anon_sym_PERCENTparameter] = ACTIONS(277),
    [anon_sym_PERCENTattribute] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [sym_grammar_attribute] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_PERCENTleft] = ACTIONS(277),
  },
  [88] = {
    [sym_symbol] = STATE(28),
    [aux_sym_declaration_repeat3] = STATE(88),
    [sym_strict_actual] = STATE(53),
    [anon_sym_PERCENTnonassoc] = ACTIONS(277),
    [sym_qid] = ACTIONS(281),
    [anon_sym_PERCENTstart] = ACTIONS(277),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_PERCENTtoken] = ACTIONS(277),
    [sym_uid] = ACTIONS(281),
    [anon_sym_PERCENTtype] = ACTIONS(277),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(277),
    [sym_lid] = ACTIONS(284),
    [anon_sym_PERCENTright] = ACTIONS(277),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(277),
    [anon_sym_PERCENTparameter] = ACTIONS(277),
    [anon_sym_PERCENTattribute] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(287),
    [sym_grammar_attribute] = ACTIONS(277),
    [anon_sym_PERCENTleft] = ACTIONS(277),
  },
  [89] = {
    [sym_modifier] = STATE(133),
    [aux_sym_strict_actual_repeat1] = STATE(134),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(294),
  },
  [90] = {
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_COMMA2] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_QMARK] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(95),
  },
  [91] = {
    [aux_sym_declaration_repeat5] = STATE(91),
    [anon_sym_PERCENTnonassoc] = ACTIONS(272),
    [anon_sym_PERCENTstart] = ACTIONS(272),
    [anon_sym_PERCENTright] = ACTIONS(272),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(272),
    [sym_attribute] = ACTIONS(298),
    [anon_sym_PERCENTparameter] = ACTIONS(272),
    [anon_sym_PERCENTattribute] = ACTIONS(272),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [sym_grammar_attribute] = ACTIONS(272),
    [anon_sym_PERCENTtoken] = ACTIONS(272),
    [anon_sym_PERCENTtype] = ACTIONS(272),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(272),
    [anon_sym_PERCENTleft] = ACTIONS(272),
  },
  [92] = {
    [aux_sym_declaration_repeat5] = STATE(91),
    [anon_sym_PERCENTnonassoc] = ACTIONS(212),
    [anon_sym_PERCENTstart] = ACTIONS(212),
    [anon_sym_PERCENTright] = ACTIONS(212),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(212),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(212),
    [anon_sym_PERCENTparameter] = ACTIONS(212),
    [anon_sym_PERCENTattribute] = ACTIONS(212),
    [sym_attribute] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(212),
    [sym_grammar_attribute] = ACTIONS(212),
    [anon_sym_PERCENTtoken] = ACTIONS(212),
    [anon_sym_PERCENTtype] = ACTIONS(212),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(212),
    [anon_sym_PERCENTleft] = ACTIONS(212),
  },
  [93] = {
    [sym_symbol] = STATE(28),
    [aux_sym_declaration_repeat3] = STATE(93),
    [sym_strict_actual] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(287),
    [sym_qid] = ACTIONS(281),
    [sym_uid] = ACTIONS(281),
    [sym_attribute] = ACTIONS(277),
    [sym_lid] = ACTIONS(284),
  },
  [94] = {
    [aux_sym_declaration_repeat5] = STATE(95),
    [anon_sym_PERCENTnonassoc] = ACTIONS(301),
    [anon_sym_PERCENTstart] = ACTIONS(301),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(301),
    [sym_attribute] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_PERCENTtoken] = ACTIONS(301),
    [sym_uid] = ACTIONS(301),
    [anon_sym_PERCENTtype] = ACTIONS(301),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(301),
    [anon_sym_PERCENTright] = ACTIONS(301),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(301),
    [anon_sym_PERCENTparameter] = ACTIONS(301),
    [anon_sym_PERCENTattribute] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [sym_grammar_attribute] = ACTIONS(301),
    [anon_sym_PERCENTleft] = ACTIONS(301),
  },
  [95] = {
    [aux_sym_declaration_repeat5] = STATE(95),
    [anon_sym_PERCENTnonassoc] = ACTIONS(272),
    [anon_sym_PERCENTstart] = ACTIONS(272),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(272),
    [sym_attribute] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_PERCENTtoken] = ACTIONS(272),
    [sym_uid] = ACTIONS(272),
    [anon_sym_PERCENTtype] = ACTIONS(272),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(272),
    [anon_sym_PERCENTright] = ACTIONS(272),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(272),
    [anon_sym_PERCENTparameter] = ACTIONS(272),
    [anon_sym_PERCENTattribute] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [sym_grammar_attribute] = ACTIONS(272),
    [anon_sym_PERCENTleft] = ACTIONS(272),
  },
  [96] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(306),
    [anon_sym_PERCENTstart] = ACTIONS(306),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_PERCENTtoken] = ACTIONS(306),
    [sym_uid] = ACTIONS(306),
    [anon_sym_PERCENTtype] = ACTIONS(306),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(306),
    [anon_sym_PERCENTright] = ACTIONS(306),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(306),
    [anon_sym_PERCENTparameter] = ACTIONS(306),
    [anon_sym_PERCENTattribute] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_grammar_attribute] = ACTIONS(306),
    [anon_sym_PERCENTleft] = ACTIONS(306),
  },
  [97] = {
    [aux_sym_declaration_repeat1] = STATE(97),
    [sym_terminal_alias_attrs] = STATE(97),
    [anon_sym_PERCENTnonassoc] = ACTIONS(306),
    [anon_sym_PERCENTstart] = ACTIONS(306),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_PERCENTtoken] = ACTIONS(306),
    [sym_uid] = ACTIONS(308),
    [anon_sym_PERCENTtype] = ACTIONS(306),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(306),
    [anon_sym_PERCENTright] = ACTIONS(306),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(306),
    [anon_sym_PERCENTparameter] = ACTIONS(306),
    [anon_sym_PERCENTattribute] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(311),
    [sym_grammar_attribute] = ACTIONS(306),
    [anon_sym_PERCENTleft] = ACTIONS(306),
  },
  [98] = {
    [aux_sym_declaration_repeat1] = STATE(97),
    [sym_terminal_alias_attrs] = STATE(97),
    [anon_sym_PERCENTnonassoc] = ACTIONS(212),
    [anon_sym_PERCENTstart] = ACTIONS(212),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_PERCENTtoken] = ACTIONS(212),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENTtype] = ACTIONS(212),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(212),
    [anon_sym_PERCENTright] = ACTIONS(212),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(212),
    [anon_sym_PERCENTparameter] = ACTIONS(212),
    [anon_sym_PERCENTattribute] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_grammar_attribute] = ACTIONS(212),
    [anon_sym_PERCENTleft] = ACTIONS(212),
  },
  [99] = {
    [sym_symbol] = STATE(28),
    [aux_sym_declaration_repeat3] = STATE(88),
    [sym_strict_actual] = STATE(53),
    [anon_sym_PERCENTnonassoc] = ACTIONS(212),
    [sym_qid] = ACTIONS(43),
    [anon_sym_PERCENTstart] = ACTIONS(212),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_PERCENTtoken] = ACTIONS(212),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTtype] = ACTIONS(212),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(212),
    [sym_lid] = ACTIONS(45),
    [anon_sym_PERCENTright] = ACTIONS(212),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(212),
    [anon_sym_PERCENTparameter] = ACTIONS(212),
    [anon_sym_PERCENTattribute] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(93),
    [sym_grammar_attribute] = ACTIONS(212),
    [anon_sym_PERCENTleft] = ACTIONS(212),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(314),
  },
  [101] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(316),
    [sym_qid] = ACTIONS(318),
    [anon_sym_PERCENTstart] = ACTIONS(316),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_PERCENTtoken] = ACTIONS(316),
    [sym_uid] = ACTIONS(318),
    [anon_sym_PERCENTtype] = ACTIONS(316),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(316),
    [sym_lid] = ACTIONS(316),
    [anon_sym_PERCENTright] = ACTIONS(316),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(316),
    [anon_sym_PERCENTparameter] = ACTIONS(316),
    [anon_sym_PERCENTattribute] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym_grammar_attribute] = ACTIONS(316),
    [anon_sym_PERCENTleft] = ACTIONS(316),
  },
  [102] = {
    [aux_sym_declaration_repeat2] = STATE(102),
    [sym_symbol] = STATE(102),
    [anon_sym_PERCENTnonassoc] = ACTIONS(316),
    [sym_qid] = ACTIONS(320),
    [anon_sym_PERCENTstart] = ACTIONS(316),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_PERCENTtoken] = ACTIONS(316),
    [sym_uid] = ACTIONS(320),
    [anon_sym_PERCENTtype] = ACTIONS(316),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(316),
    [sym_lid] = ACTIONS(323),
    [anon_sym_PERCENTright] = ACTIONS(316),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(316),
    [anon_sym_PERCENTparameter] = ACTIONS(316),
    [anon_sym_PERCENTattribute] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(326),
    [sym_grammar_attribute] = ACTIONS(316),
    [anon_sym_PERCENTleft] = ACTIONS(316),
  },
  [103] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(136),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [104] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(138),
    [aux_sym_old_rule_repeat3] = STATE(137),
    [sym_qid] = ACTIONS(329),
    [anon_sym_PERCENTpublic] = ACTIONS(331),
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_new_rule] = ACTIONS(329),
    [anon_sym_PERCENTinline] = ACTIONS(331),
    [sym_postlude] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(333),
    [sym_uid] = ACTIONS(329),
    [sym_lid] = ACTIONS(329),
  },
  [105] = {
    [aux_sym_old_rule_repeat1] = STATE(140),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(335),
  },
  [106] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(136),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(337),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [107] = {
    [sym_symbol] = STATE(142),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [108] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [109] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_COMMA2] = ACTIONS(339),
    [anon_sym_LTocaml_type_GT] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
  },
  [110] = {
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(143),
    [sym_uid] = ACTIONS(43),
    [sym_qid] = ACTIONS(43),
    [sym_lid] = ACTIONS(45),
  },
  [111] = {
    [sym_precedence] = STATE(144),
    [sym_qid] = ACTIONS(341),
    [anon_sym_PERCENTpublic] = ACTIONS(343),
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_new_rule] = ACTIONS(341),
    [anon_sym_PERCENTinline] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [sym_postlude] = ACTIONS(343),
    [sym_uid] = ACTIONS(341),
    [anon_sym_PERCENTprec] = ACTIONS(244),
    [sym_lid] = ACTIONS(341),
  },
  [112] = {
    [sym_ocaml_type] = STATE(145),
    [sym_action] = STATE(145),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(117),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
  },
  [113] = {
    [sym_symbol] = STATE(147),
    [sym_uid] = ACTIONS(345),
    [sym_qid] = ACTIONS(345),
    [sym_lid] = ACTIONS(347),
  },
  [114] = {
    [sym_qid] = ACTIONS(341),
    [anon_sym_PERCENTpublic] = ACTIONS(343),
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_new_rule] = ACTIONS(341),
    [anon_sym_PERCENTinline] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [sym_postlude] = ACTIONS(343),
    [sym_uid] = ACTIONS(341),
    [sym_lid] = ACTIONS(341),
  },
  [115] = {
    [aux_sym_production_group_repeat1] = STATE(115),
    [sym_actual] = STATE(82),
    [sym_producer] = STATE(115),
    [sym_symbol] = STATE(81),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [sym_qid] = ACTIONS(351),
    [anon_sym_LTocaml_type_GT] = ACTIONS(349),
    [sym_uid] = ACTIONS(351),
    [anon_sym_PERCENTprec] = ACTIONS(349),
    [sym_lid] = ACTIONS(354),
  },
  [116] = {
    [sym_ocaml_type] = STATE(145),
    [sym_action] = STATE(145),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(148),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
  },
  [117] = {
    [aux_sym_production_group_repeat2] = STATE(117),
    [sym_bar] = STATE(83),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(359),
    [anon_sym_LTocaml_type_GT] = ACTIONS(357),
  },
  [118] = {
    [sym_precedence] = STATE(151),
    [sym_ocaml_type] = STATE(152),
    [sym_action] = STATE(152),
    [aux_sym_production_group_repeat1] = STATE(153),
    [aux_sym_production_group_repeat2] = STATE(154),
    [sym_producer] = STATE(153),
    [sym_symbol] = STATE(155),
    [sym_actual] = STATE(156),
    [sym_bar] = STATE(83),
    [sym_lax_actual] = STATE(157),
    [sym_production_group] = STATE(158),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(364),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
    [sym_uid] = ACTIONS(364),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [119] = {
    [aux_sym_declaration_repeat5] = STATE(159),
    [aux_sym_old_rule_repeat3] = STATE(160),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(366),
    [sym_qid] = ACTIONS(368),
    [anon_sym_LTocaml_type_GT] = ACTIONS(366),
    [sym_attribute] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_PERCENTprec] = ACTIONS(366),
    [sym_uid] = ACTIONS(368),
    [sym_lid] = ACTIONS(366),
  },
  [120] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(374),
    [sym_qid] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_LTocaml_type_GT] = ACTIONS(374),
    [sym_attribute] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_PERCENTprec] = ACTIONS(374),
    [sym_uid] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(374),
    [sym_lid] = ACTIONS(374),
  },
  [121] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(366),
    [sym_qid] = ACTIONS(368),
    [anon_sym_LTocaml_type_GT] = ACTIONS(366),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_PERCENTprec] = ACTIONS(366),
    [sym_uid] = ACTIONS(368),
    [sym_lid] = ACTIONS(366),
  },
  [122] = {
    [aux_sym_production_group_repeat1] = STATE(115),
    [sym_precedence] = STATE(162),
    [sym_actual] = STATE(82),
    [sym_producer] = STATE(115),
    [sym_symbol] = STATE(81),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(357),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_uid] = ACTIONS(43),
    [sym_lid] = ACTIONS(184),
  },
  [123] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_LTocaml_type_GT] = ACTIONS(357),
  },
  [124] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(329),
    [anon_sym_PERCENTpublic] = ACTIONS(331),
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_new_rule] = ACTIONS(329),
    [anon_sym_PERCENTinline] = ACTIONS(331),
    [sym_postlude] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(329),
    [sym_lid] = ACTIONS(329),
  },
  [125] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(137),
    [sym_qid] = ACTIONS(329),
    [anon_sym_PERCENTpublic] = ACTIONS(331),
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_new_rule] = ACTIONS(329),
    [anon_sym_PERCENTinline] = ACTIONS(331),
    [sym_postlude] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(333),
    [sym_uid] = ACTIONS(329),
    [sym_lid] = ACTIONS(329),
  },
  [126] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(165),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [127] = {
    [sym_symbol] = STATE(166),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [128] = {
    [anon_sym_COLON] = ACTIONS(382),
  },
  [129] = {
    [aux_sym_old_rule_repeat1] = STATE(168),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(335),
  },
  [130] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(384),
    [sym_qid] = ACTIONS(386),
    [anon_sym_PERCENTstart] = ACTIONS(384),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(384),
    [sym_attribute] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_PERCENTtoken] = ACTIONS(384),
    [sym_uid] = ACTIONS(386),
    [anon_sym_PERCENTtype] = ACTIONS(384),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(384),
    [sym_lid] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_PERCENTright] = ACTIONS(384),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(384),
    [anon_sym_PERCENTparameter] = ACTIONS(384),
    [anon_sym_PERCENTattribute] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(384),
    [sym_grammar_attribute] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_PERCENTleft] = ACTIONS(384),
  },
  [131] = {
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_COMMA2] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
  },
  [132] = {
    [sym_strict_actual] = STATE(169),
    [sym_symbol] = STATE(90),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [133] = {
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_COMMA2] = ACTIONS(192),
    [anon_sym_STAR] = ACTIONS(192),
    [anon_sym_QMARK] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
  },
  [134] = {
    [aux_sym_strict_actual_repeat1] = STATE(171),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(388),
  },
  [135] = {
    [sym_strict_actual] = STATE(172),
    [sym_symbol] = STATE(90),
    [sym_uid] = ACTIONS(31),
    [sym_qid] = ACTIONS(31),
    [sym_lid] = ACTIONS(81),
  },
  [136] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(174),
    [aux_sym_old_rule_repeat3] = STATE(173),
    [sym_qid] = ACTIONS(390),
    [anon_sym_PERCENTpublic] = ACTIONS(392),
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_new_rule] = ACTIONS(390),
    [anon_sym_PERCENTinline] = ACTIONS(392),
    [sym_postlude] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(394),
    [sym_uid] = ACTIONS(390),
    [sym_lid] = ACTIONS(390),
  },
  [137] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(390),
    [anon_sym_PERCENTpublic] = ACTIONS(392),
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_new_rule] = ACTIONS(390),
    [anon_sym_PERCENTinline] = ACTIONS(392),
    [sym_postlude] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(390),
    [sym_lid] = ACTIONS(390),
  },
  [138] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(173),
    [sym_qid] = ACTIONS(390),
    [anon_sym_PERCENTpublic] = ACTIONS(392),
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_new_rule] = ACTIONS(390),
    [anon_sym_PERCENTinline] = ACTIONS(392),
    [sym_postlude] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(394),
    [sym_uid] = ACTIONS(390),
    [sym_lid] = ACTIONS(390),
  },
  [139] = {
    [anon_sym_COLON] = ACTIONS(396),
  },
  [140] = {
    [aux_sym_old_rule_repeat1] = STATE(168),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(398),
  },
  [141] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(177),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [142] = {
    [aux_sym_old_rule_repeat1] = STATE(178),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(398),
  },
  [143] = {
    [aux_sym_declaration_repeat5] = STATE(179),
    [sym_modifier] = STATE(120),
    [aux_sym_old_rule_repeat3] = STATE(180),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(400),
    [sym_qid] = ACTIONS(402),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_LTocaml_type_GT] = ACTIONS(400),
    [sym_attribute] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(406),
    [anon_sym_PERCENTprec] = ACTIONS(400),
    [sym_uid] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(91),
    [sym_lid] = ACTIONS(400),
  },
  [144] = {
    [sym_qid] = ACTIONS(408),
    [anon_sym_PERCENTpublic] = ACTIONS(410),
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym_new_rule] = ACTIONS(408),
    [anon_sym_PERCENTinline] = ACTIONS(410),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(410),
    [sym_postlude] = ACTIONS(410),
    [sym_uid] = ACTIONS(408),
    [sym_lid] = ACTIONS(408),
  },
  [145] = {
    [sym_precedence] = STATE(181),
    [sym_qid] = ACTIONS(408),
    [anon_sym_PERCENTpublic] = ACTIONS(410),
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym_new_rule] = ACTIONS(408),
    [anon_sym_PERCENTinline] = ACTIONS(410),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(410),
    [sym_postlude] = ACTIONS(410),
    [sym_uid] = ACTIONS(408),
    [anon_sym_PERCENTprec] = ACTIONS(244),
    [sym_lid] = ACTIONS(408),
  },
  [146] = {
    [sym_qid] = ACTIONS(89),
    [anon_sym_PERCENTpublic] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_new_rule] = ACTIONS(89),
    [anon_sym_PERCENTinline] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [sym_postlude] = ACTIONS(67),
    [sym_uid] = ACTIONS(89),
    [sym_lid] = ACTIONS(89),
  },
  [147] = {
    [sym_qid] = ACTIONS(412),
    [anon_sym_PERCENTpublic] = ACTIONS(339),
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_new_rule] = ACTIONS(412),
    [anon_sym_PERCENTinline] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [sym_postlude] = ACTIONS(339),
    [sym_uid] = ACTIONS(412),
    [sym_lid] = ACTIONS(412),
  },
  [148] = {
    [sym_ocaml_type] = STATE(182),
    [sym_action] = STATE(182),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(117),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
  },
  [149] = {
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_COMMA2] = ACTIONS(230),
    [anon_sym_PERCENTprec] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
  },
  [150] = {
    [sym_qid] = ACTIONS(89),
    [anon_sym_LTocaml_type_GT] = ACTIONS(67),
    [sym_attribute] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_COMMA2] = ACTIONS(67),
    [sym_uid] = ACTIONS(89),
    [sym_lid] = ACTIONS(67),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_PERCENTprec] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [151] = {
    [sym_ocaml_type] = STATE(183),
    [sym_action] = STATE(183),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(184),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [152] = {
    [sym_precedence] = STATE(185),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_COMMA2] = ACTIONS(242),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(242),
  },
  [153] = {
    [aux_sym_production_group_repeat1] = STATE(115),
    [sym_ocaml_type] = STATE(183),
    [sym_action] = STATE(183),
    [sym_precedence] = STATE(186),
    [sym_producer] = STATE(115),
    [aux_sym_production_group_repeat2] = STATE(184),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [154] = {
    [sym_ocaml_type] = STATE(183),
    [sym_action] = STATE(183),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(117),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [155] = {
    [sym_qid] = ACTIONS(248),
    [anon_sym_LTocaml_type_GT] = ACTIONS(246),
    [sym_attribute] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_COMMA2] = ACTIONS(414),
    [sym_uid] = ACTIONS(248),
    [sym_lid] = ACTIONS(246),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_PERCENTprec] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(414),
  },
  [156] = {
    [aux_sym_declaration_repeat5] = STATE(119),
    [sym_modifier] = STATE(189),
    [aux_sym_old_rule_repeat3] = STATE(121),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(252),
    [sym_qid] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(418),
    [anon_sym_LTocaml_type_GT] = ACTIONS(252),
    [sym_attribute] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_PERCENTprec] = ACTIONS(252),
    [sym_uid] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(418),
    [sym_lid] = ACTIONS(252),
  },
  [157] = {
    [aux_sym_actual_repeat1] = STATE(192),
    [anon_sym_COMMA2] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(422),
  },
  [158] = {
    [aux_sym_lax_actual_repeat1] = STATE(194),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_COMMA2] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
  },
  [159] = {
    [aux_sym_declaration_repeat5] = STATE(159),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(272),
    [sym_qid] = ACTIONS(426),
    [anon_sym_LTocaml_type_GT] = ACTIONS(272),
    [sym_attribute] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_PERCENTprec] = ACTIONS(272),
    [sym_uid] = ACTIONS(426),
    [sym_lid] = ACTIONS(272),
  },
  [160] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(400),
    [sym_qid] = ACTIONS(402),
    [anon_sym_LTocaml_type_GT] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_PERCENTprec] = ACTIONS(400),
    [sym_uid] = ACTIONS(402),
    [sym_lid] = ACTIONS(400),
  },
  [161] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(431),
    [sym_qid] = ACTIONS(433),
    [anon_sym_LTocaml_type_GT] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_PERCENTprec] = ACTIONS(431),
    [sym_uid] = ACTIONS(433),
    [sym_lid] = ACTIONS(431),
  },
  [162] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_LTocaml_type_GT] = ACTIONS(438),
  },
  [163] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(433),
    [anon_sym_PERCENTpublic] = ACTIONS(431),
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_new_rule] = ACTIONS(433),
    [anon_sym_PERCENTinline] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_postlude] = ACTIONS(431),
    [sym_uid] = ACTIONS(433),
    [sym_lid] = ACTIONS(433),
  },
  [164] = {
    [aux_sym_old_rule_repeat2] = STATE(164),
    [sym_bar] = STATE(126),
    [sym_qid] = ACTIONS(443),
    [anon_sym_PERCENTpublic] = ACTIONS(445),
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_new_rule] = ACTIONS(443),
    [anon_sym_PERCENTinline] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(445),
    [sym_postlude] = ACTIONS(445),
    [sym_uid] = ACTIONS(443),
    [sym_lid] = ACTIONS(443),
  },
  [165] = {
    [sym_qid] = ACTIONS(443),
    [anon_sym_PERCENTpublic] = ACTIONS(445),
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_new_rule] = ACTIONS(443),
    [anon_sym_PERCENTinline] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
    [sym_postlude] = ACTIONS(445),
    [sym_uid] = ACTIONS(443),
    [sym_lid] = ACTIONS(443),
  },
  [166] = {
    [anon_sym_COMMA2] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
  },
  [167] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(177),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(452),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [168] = {
    [aux_sym_old_rule_repeat1] = STATE(168),
    [anon_sym_COMMA2] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(450),
  },
  [169] = {
    [sym_modifier] = STATE(133),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_COMMA2] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(457),
  },
  [170] = {
    [anon_sym_PERCENTnonassoc] = ACTIONS(459),
    [sym_qid] = ACTIONS(461),
    [anon_sym_PERCENTstart] = ACTIONS(459),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(459),
    [sym_attribute] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_PERCENTtoken] = ACTIONS(459),
    [sym_uid] = ACTIONS(461),
    [anon_sym_PERCENTtype] = ACTIONS(459),
    [anon_sym_PERCENT_LBRACEocaml_code_PERCENT_RBRACE] = ACTIONS(459),
    [sym_lid] = ACTIONS(459),
    [anon_sym_STAR] = ACTIONS(459),
    [anon_sym_PERCENTright] = ACTIONS(459),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(459),
    [anon_sym_PERCENTparameter] = ACTIONS(459),
    [anon_sym_PERCENTattribute] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(459),
    [sym_grammar_attribute] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(459),
    [anon_sym_PERCENTleft] = ACTIONS(459),
  },
  [171] = {
    [aux_sym_strict_actual_repeat1] = STATE(171),
    [anon_sym_COMMA2] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(457),
  },
  [172] = {
    [sym_modifier] = STATE(133),
    [aux_sym_strict_actual_repeat1] = STATE(197),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(466),
  },
  [173] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(468),
    [anon_sym_PERCENTpublic] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_new_rule] = ACTIONS(468),
    [anon_sym_PERCENTinline] = ACTIONS(470),
    [sym_postlude] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(468),
    [sym_lid] = ACTIONS(468),
  },
  [174] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(198),
    [sym_qid] = ACTIONS(468),
    [anon_sym_PERCENTpublic] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_new_rule] = ACTIONS(468),
    [anon_sym_PERCENTinline] = ACTIONS(470),
    [sym_postlude] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(472),
    [sym_uid] = ACTIONS(468),
    [sym_lid] = ACTIONS(468),
  },
  [175] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(200),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(474),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [176] = {
    [anon_sym_COLON] = ACTIONS(476),
  },
  [177] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(202),
    [aux_sym_old_rule_repeat3] = STATE(198),
    [sym_qid] = ACTIONS(468),
    [anon_sym_PERCENTpublic] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_new_rule] = ACTIONS(468),
    [anon_sym_PERCENTinline] = ACTIONS(470),
    [sym_postlude] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(472),
    [sym_uid] = ACTIONS(468),
    [sym_lid] = ACTIONS(468),
  },
  [178] = {
    [aux_sym_old_rule_repeat1] = STATE(168),
    [anon_sym_COMMA2] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(478),
  },
  [179] = {
    [aux_sym_declaration_repeat5] = STATE(159),
    [aux_sym_old_rule_repeat3] = STATE(204),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(480),
    [sym_qid] = ACTIONS(482),
    [anon_sym_LTocaml_type_GT] = ACTIONS(480),
    [sym_attribute] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(484),
    [anon_sym_PERCENTprec] = ACTIONS(480),
    [sym_uid] = ACTIONS(482),
    [sym_lid] = ACTIONS(480),
  },
  [180] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(480),
    [sym_qid] = ACTIONS(482),
    [anon_sym_LTocaml_type_GT] = ACTIONS(480),
    [anon_sym_PIPE] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_PERCENTprec] = ACTIONS(480),
    [sym_uid] = ACTIONS(482),
    [sym_lid] = ACTIONS(480),
  },
  [181] = {
    [sym_qid] = ACTIONS(486),
    [anon_sym_PERCENTpublic] = ACTIONS(488),
    [ts_builtin_sym_end] = ACTIONS(488),
    [sym_new_rule] = ACTIONS(486),
    [anon_sym_PERCENTinline] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(488),
    [sym_postlude] = ACTIONS(488),
    [sym_uid] = ACTIONS(486),
    [sym_lid] = ACTIONS(486),
  },
  [182] = {
    [sym_precedence] = STATE(205),
    [sym_qid] = ACTIONS(486),
    [anon_sym_PERCENTpublic] = ACTIONS(488),
    [ts_builtin_sym_end] = ACTIONS(488),
    [sym_new_rule] = ACTIONS(486),
    [anon_sym_PERCENTinline] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(488),
    [sym_postlude] = ACTIONS(488),
    [sym_uid] = ACTIONS(486),
    [anon_sym_PERCENTprec] = ACTIONS(244),
    [sym_lid] = ACTIONS(486),
  },
  [183] = {
    [sym_precedence] = STATE(206),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_COMMA2] = ACTIONS(343),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(343),
  },
  [184] = {
    [sym_ocaml_type] = STATE(207),
    [sym_action] = STATE(207),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(117),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [185] = {
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_COMMA2] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
  },
  [186] = {
    [sym_ocaml_type] = STATE(207),
    [sym_action] = STATE(207),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(208),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [187] = {
    [sym_precedence] = STATE(151),
    [sym_ocaml_type] = STATE(152),
    [sym_action] = STATE(152),
    [aux_sym_production_group_repeat1] = STATE(153),
    [aux_sym_production_group_repeat2] = STATE(154),
    [sym_producer] = STATE(153),
    [sym_symbol] = STATE(155),
    [sym_actual] = STATE(156),
    [sym_bar] = STATE(83),
    [sym_lax_actual] = STATE(209),
    [sym_production_group] = STATE(158),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(364),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
    [sym_uid] = ACTIONS(364),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [188] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(188),
    [sym_qid] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_LTocaml_type_GT] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [sym_attribute] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_COMMA2] = ACTIONS(188),
    [sym_uid] = ACTIONS(190),
    [anon_sym_PERCENTprec] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [sym_lid] = ACTIONS(188),
  },
  [189] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(374),
    [sym_qid] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_LTocaml_type_GT] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(490),
    [sym_attribute] = ACTIONS(374),
    [anon_sym_PLUS] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_PERCENTprec] = ACTIONS(374),
    [sym_uid] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_COMMA2] = ACTIONS(490),
    [sym_lid] = ACTIONS(374),
  },
  [190] = {
    [sym_precedence] = STATE(151),
    [sym_ocaml_type] = STATE(152),
    [sym_action] = STATE(152),
    [aux_sym_production_group_repeat1] = STATE(153),
    [aux_sym_production_group_repeat2] = STATE(154),
    [sym_producer] = STATE(153),
    [sym_symbol] = STATE(155),
    [sym_actual] = STATE(156),
    [sym_bar] = STATE(83),
    [sym_lax_actual] = STATE(210),
    [sym_production_group] = STATE(158),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(364),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
    [sym_uid] = ACTIONS(364),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [191] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(492),
    [sym_qid] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_LTocaml_type_GT] = ACTIONS(492),
    [sym_attribute] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_PERCENTprec] = ACTIONS(492),
    [sym_uid] = ACTIONS(494),
    [anon_sym_QMARK] = ACTIONS(492),
    [sym_lid] = ACTIONS(492),
  },
  [192] = {
    [aux_sym_actual_repeat1] = STATE(212),
    [anon_sym_COMMA2] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(496),
  },
  [193] = {
    [sym_precedence] = STATE(151),
    [sym_ocaml_type] = STATE(152),
    [sym_action] = STATE(152),
    [aux_sym_production_group_repeat1] = STATE(153),
    [aux_sym_production_group_repeat2] = STATE(154),
    [sym_producer] = STATE(153),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(213),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [194] = {
    [aux_sym_lax_actual_repeat1] = STATE(214),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_COMMA2] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(490),
  },
  [195] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(200),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [196] = {
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_COMMA2] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
  },
  [197] = {
    [aux_sym_strict_actual_repeat1] = STATE(171),
    [anon_sym_COMMA2] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(498),
  },
  [198] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(500),
    [anon_sym_PERCENTpublic] = ACTIONS(502),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_new_rule] = ACTIONS(500),
    [anon_sym_PERCENTinline] = ACTIONS(502),
    [sym_postlude] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(500),
    [sym_lid] = ACTIONS(500),
  },
  [199] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(216),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [200] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(218),
    [aux_sym_old_rule_repeat3] = STATE(217),
    [sym_qid] = ACTIONS(500),
    [anon_sym_PERCENTpublic] = ACTIONS(502),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_new_rule] = ACTIONS(500),
    [anon_sym_PERCENTinline] = ACTIONS(502),
    [sym_postlude] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_uid] = ACTIONS(500),
    [sym_lid] = ACTIONS(500),
  },
  [201] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(216),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(506),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [202] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(217),
    [sym_qid] = ACTIONS(500),
    [anon_sym_PERCENTpublic] = ACTIONS(502),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_new_rule] = ACTIONS(500),
    [anon_sym_PERCENTinline] = ACTIONS(502),
    [sym_postlude] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_uid] = ACTIONS(500),
    [sym_lid] = ACTIONS(500),
  },
  [203] = {
    [anon_sym_COLON] = ACTIONS(508),
  },
  [204] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(510),
    [sym_qid] = ACTIONS(512),
    [anon_sym_LTocaml_type_GT] = ACTIONS(510),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_PERCENTprec] = ACTIONS(510),
    [sym_uid] = ACTIONS(512),
    [sym_lid] = ACTIONS(510),
  },
  [205] = {
    [sym_qid] = ACTIONS(514),
    [anon_sym_PERCENTpublic] = ACTIONS(516),
    [ts_builtin_sym_end] = ACTIONS(516),
    [sym_new_rule] = ACTIONS(514),
    [anon_sym_PERCENTinline] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_SEMI] = ACTIONS(516),
    [sym_postlude] = ACTIONS(516),
    [sym_uid] = ACTIONS(514),
    [sym_lid] = ACTIONS(514),
  },
  [206] = {
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_COMMA2] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(410),
  },
  [207] = {
    [sym_precedence] = STATE(221),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_COMMA2] = ACTIONS(410),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(410),
  },
  [208] = {
    [sym_ocaml_type] = STATE(222),
    [sym_action] = STATE(222),
    [sym_bar] = STATE(83),
    [aux_sym_production_group_repeat2] = STATE(117),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LTocaml_type_GT] = ACTIONS(27),
  },
  [209] = {
    [aux_sym_actual_repeat1] = STATE(224),
    [anon_sym_COMMA2] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(518),
  },
  [210] = {
    [anon_sym_COMMA2] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(520),
  },
  [211] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(522),
    [sym_qid] = ACTIONS(524),
    [anon_sym_STAR] = ACTIONS(522),
    [anon_sym_LTocaml_type_GT] = ACTIONS(522),
    [sym_attribute] = ACTIONS(522),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_PERCENTprec] = ACTIONS(522),
    [sym_uid] = ACTIONS(524),
    [anon_sym_QMARK] = ACTIONS(522),
    [sym_lid] = ACTIONS(522),
  },
  [212] = {
    [aux_sym_actual_repeat1] = STATE(212),
    [anon_sym_COMMA2] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(520),
  },
  [213] = {
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_COMMA2] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
  },
  [214] = {
    [aux_sym_lax_actual_repeat1] = STATE(214),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_COMMA2] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
  },
  [215] = {
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_COMMA2] = ACTIONS(459),
    [anon_sym_STAR] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
  },
  [216] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(226),
    [aux_sym_old_rule_repeat3] = STATE(225),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(536),
    [ts_builtin_sym_end] = ACTIONS(536),
    [sym_new_rule] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(536),
    [sym_postlude] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(538),
    [sym_uid] = ACTIONS(534),
    [sym_lid] = ACTIONS(534),
  },
  [217] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(536),
    [ts_builtin_sym_end] = ACTIONS(536),
    [sym_new_rule] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(536),
    [sym_postlude] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(534),
    [sym_lid] = ACTIONS(534),
  },
  [218] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(225),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(536),
    [ts_builtin_sym_end] = ACTIONS(536),
    [sym_new_rule] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(536),
    [sym_postlude] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(538),
    [sym_uid] = ACTIONS(534),
    [sym_lid] = ACTIONS(534),
  },
  [219] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(227),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [220] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(227),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(540),
    [sym_qid] = ACTIONS(43),
    [anon_sym_LTocaml_type_GT] = ACTIONS(180),
    [sym_uid] = ACTIONS(43),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [sym_lid] = ACTIONS(184),
  },
  [221] = {
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_COMMA2] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
  },
  [222] = {
    [sym_precedence] = STATE(229),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_COMMA2] = ACTIONS(488),
    [anon_sym_PERCENTprec] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(488),
  },
  [223] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(492),
    [sym_qid] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_LTocaml_type_GT] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym_attribute] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_PERCENTprec] = ACTIONS(492),
    [sym_uid] = ACTIONS(494),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_COMMA2] = ACTIONS(542),
    [sym_lid] = ACTIONS(492),
  },
  [224] = {
    [aux_sym_actual_repeat1] = STATE(212),
    [anon_sym_COMMA2] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(544),
  },
  [225] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(546),
    [anon_sym_PERCENTpublic] = ACTIONS(548),
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_new_rule] = ACTIONS(546),
    [anon_sym_PERCENTinline] = ACTIONS(548),
    [sym_postlude] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(546),
    [sym_lid] = ACTIONS(546),
  },
  [226] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(231),
    [sym_qid] = ACTIONS(546),
    [anon_sym_PERCENTpublic] = ACTIONS(548),
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_new_rule] = ACTIONS(546),
    [anon_sym_PERCENTinline] = ACTIONS(548),
    [sym_postlude] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(550),
    [sym_uid] = ACTIONS(546),
    [sym_lid] = ACTIONS(546),
  },
  [227] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(232),
    [aux_sym_old_rule_repeat3] = STATE(231),
    [sym_qid] = ACTIONS(546),
    [anon_sym_PERCENTpublic] = ACTIONS(548),
    [ts_builtin_sym_end] = ACTIONS(548),
    [sym_new_rule] = ACTIONS(546),
    [anon_sym_PERCENTinline] = ACTIONS(548),
    [sym_postlude] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(550),
    [sym_uid] = ACTIONS(546),
    [sym_lid] = ACTIONS(546),
  },
  [228] = {
    [sym_precedence] = STATE(77),
    [sym_ocaml_type] = STATE(78),
    [sym_action] = STATE(78),
    [aux_sym_production_group_repeat1] = STATE(79),
    [aux_sym_production_group_repeat2] = STATE(80),
    [sym_producer] = STATE(79),
    [sym_symbol] = STATE(81),
    [sym_actual] = STATE(82),
    [sym_bar] = STATE(83),
    [sym_production_group] = STATE(233),
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [sym_qid] = ACTIONS(234),
    [anon_sym_LTocaml_type_GT] = ACTIONS(232),
    [sym_uid] = ACTIONS(234),
    [anon_sym_PERCENTprec] = ACTIONS(232),
    [sym_lid] = ACTIONS(232),
  },
  [229] = {
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_COMMA2] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
  },
  [230] = {
    [anon_sym_LBRACEaction_RBRACE] = ACTIONS(522),
    [sym_qid] = ACTIONS(524),
    [anon_sym_STAR] = ACTIONS(522),
    [anon_sym_LTocaml_type_GT] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(552),
    [sym_attribute] = ACTIONS(522),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_PERCENTprec] = ACTIONS(522),
    [sym_uid] = ACTIONS(524),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COMMA2] = ACTIONS(552),
    [sym_lid] = ACTIONS(522),
  },
  [231] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(554),
    [anon_sym_PERCENTpublic] = ACTIONS(556),
    [ts_builtin_sym_end] = ACTIONS(556),
    [sym_new_rule] = ACTIONS(554),
    [anon_sym_PERCENTinline] = ACTIONS(556),
    [sym_postlude] = ACTIONS(556),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(554),
    [sym_lid] = ACTIONS(554),
  },
  [232] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(554),
    [anon_sym_PERCENTpublic] = ACTIONS(556),
    [ts_builtin_sym_end] = ACTIONS(556),
    [sym_new_rule] = ACTIONS(554),
    [anon_sym_PERCENTinline] = ACTIONS(556),
    [sym_postlude] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(558),
    [sym_uid] = ACTIONS(554),
    [sym_lid] = ACTIONS(554),
  },
  [233] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(235),
    [aux_sym_old_rule_repeat3] = STATE(234),
    [sym_qid] = ACTIONS(554),
    [anon_sym_PERCENTpublic] = ACTIONS(556),
    [ts_builtin_sym_end] = ACTIONS(556),
    [sym_new_rule] = ACTIONS(554),
    [anon_sym_PERCENTinline] = ACTIONS(556),
    [sym_postlude] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(558),
    [sym_uid] = ACTIONS(554),
    [sym_lid] = ACTIONS(554),
  },
  [234] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(560),
    [anon_sym_PERCENTpublic] = ACTIONS(562),
    [ts_builtin_sym_end] = ACTIONS(562),
    [sym_new_rule] = ACTIONS(560),
    [anon_sym_PERCENTinline] = ACTIONS(562),
    [sym_postlude] = ACTIONS(562),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(560),
    [sym_lid] = ACTIONS(560),
  },
  [235] = {
    [sym_bar] = STATE(126),
    [aux_sym_old_rule_repeat2] = STATE(164),
    [aux_sym_old_rule_repeat3] = STATE(236),
    [sym_qid] = ACTIONS(560),
    [anon_sym_PERCENTpublic] = ACTIONS(562),
    [ts_builtin_sym_end] = ACTIONS(562),
    [sym_new_rule] = ACTIONS(560),
    [anon_sym_PERCENTinline] = ACTIONS(562),
    [sym_postlude] = ACTIONS(562),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(564),
    [sym_uid] = ACTIONS(560),
    [sym_lid] = ACTIONS(560),
  },
  [236] = {
    [aux_sym_old_rule_repeat3] = STATE(163),
    [sym_qid] = ACTIONS(566),
    [anon_sym_PERCENTpublic] = ACTIONS(568),
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_new_rule] = ACTIONS(566),
    [anon_sym_PERCENTinline] = ACTIONS(568),
    [sym_postlude] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_uid] = ACTIONS(566),
    [sym_lid] = ACTIONS(566),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_priority_keyword, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_priority_keyword, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = false}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(26),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(31),
  [51] = {.count = 1, .reusable = true}, SHIFT(34),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_header, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_ocaml_type, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(40),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_flags, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(42),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [77] = {.count = 1, .reusable = false}, SHIFT(44),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, SHIFT(19),
  [83] = {.count = 1, .reusable = true}, SHIFT(46),
  [85] = {.count = 1, .reusable = true}, SHIFT(48),
  [87] = {.count = 1, .reusable = true}, SHIFT(47),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(49),
  [93] = {.count = 1, .reusable = true}, SHIFT(50),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(54),
  [101] = {.count = 1, .reusable = true}, SHIFT(55),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(57),
  [107] = {.count = 1, .reusable = true}, SHIFT(58),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_terminal_alias_attrs, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(59),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_ocaml_type, 1),
  [115] = {.count = 1, .reusable = false}, SHIFT(63),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [146] = {.count = 1, .reusable = true}, SHIFT(64),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_flags, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(19),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(44),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(22),
  [170] = {.count = 1, .reusable = true}, SHIFT(69),
  [172] = {.count = 1, .reusable = true}, SHIFT(71),
  [174] = {.count = 1, .reusable = true}, SHIFT(70),
  [176] = {.count = 1, .reusable = true}, SHIFT(72),
  [178] = {.count = 1, .reusable = true}, SHIFT(73),
  [180] = {.count = 1, .reusable = true}, SHIFT(74),
  [182] = {.count = 1, .reusable = true}, SHIFT(75),
  [184] = {.count = 1, .reusable = true}, SHIFT(76),
  [186] = {.count = 1, .reusable = true}, SHIFT(86),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_modifier, 1),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 2),
  [196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [198] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 1),
  [200] = {.count = 1, .reusable = true}, SHIFT(91),
  [202] = {.count = 1, .reusable = true}, SHIFT(92),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [206] = {.count = 1, .reusable = true}, SHIFT(94),
  [208] = {.count = 1, .reusable = true}, SHIFT(95),
  [210] = {.count = 1, .reusable = true}, SHIFT(100),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(40),
  [222] = {.count = 1, .reusable = true}, SHIFT(103),
  [224] = {.count = 1, .reusable = true}, SHIFT(106),
  [226] = {.count = 1, .reusable = true}, SHIFT(107),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_action, 1),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_action, 1),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_bar, 1),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_bar, 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(110),
  [238] = {.count = 1, .reusable = true}, SHIFT(108),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(113),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 1),
  [250] = {.count = 1, .reusable = true}, SHIFT(118),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 1),
  [256] = {.count = 1, .reusable = true}, SHIFT(119),
  [258] = {.count = 1, .reusable = true}, SHIFT(121),
  [260] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [266] = {.count = 1, .reusable = true}, SHIFT(124),
  [268] = {.count = 1, .reusable = true}, SHIFT(127),
  [270] = {.count = 1, .reusable = true}, SHIFT(128),
  [272] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(86),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 2),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(26),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(26),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(50),
  [290] = {.count = 1, .reusable = true}, SHIFT(131),
  [292] = {.count = 1, .reusable = true}, SHIFT(132),
  [294] = {.count = 1, .reusable = true}, SHIFT(130),
  [296] = {.count = 1, .reusable = true}, SHIFT(135),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(91),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(95),
  [306] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(31),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(59),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [316] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [318] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat2, 2),
  [320] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(26),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(26),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(64),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [333] = {.count = 1, .reusable = true}, SHIFT(137),
  [335] = {.count = 1, .reusable = true}, SHIFT(139),
  [337] = {.count = 1, .reusable = true}, SHIFT(141),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [345] = {.count = 1, .reusable = false}, SHIFT(146),
  [347] = {.count = 1, .reusable = true}, SHIFT(146),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [351] = {.count = 2, .reusable = false}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(26),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(76),
  [357] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(108),
  [362] = {.count = 1, .reusable = true}, SHIFT(149),
  [364] = {.count = 1, .reusable = false}, SHIFT(150),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 2),
  [370] = {.count = 1, .reusable = true}, SHIFT(159),
  [372] = {.count = 1, .reusable = true}, SHIFT(160),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 2),
  [378] = {.count = 1, .reusable = true}, SHIFT(161),
  [380] = {.count = 1, .reusable = true}, SHIFT(163),
  [382] = {.count = 1, .reusable = true}, SHIFT(167),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 4),
  [388] = {.count = 1, .reusable = true}, SHIFT(170),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [394] = {.count = 1, .reusable = true}, SHIFT(173),
  [396] = {.count = 1, .reusable = true}, SHIFT(175),
  [398] = {.count = 1, .reusable = true}, SHIFT(176),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 3),
  [404] = {.count = 1, .reusable = true}, SHIFT(179),
  [406] = {.count = 1, .reusable = true}, SHIFT(180),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [416] = {.count = 1, .reusable = true}, SHIFT(187),
  [418] = {.count = 1, .reusable = true}, SHIFT(188),
  [420] = {.count = 1, .reusable = true}, SHIFT(190),
  [422] = {.count = 1, .reusable = true}, SHIFT(191),
  [424] = {.count = 1, .reusable = true}, SHIFT(193),
  [426] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat5, 2),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(159),
  [431] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [433] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(161),
  [438] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(163),
  [443] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(108),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(195),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(127),
  [457] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_strict_actual, 5),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(132),
  [466] = {.count = 1, .reusable = true}, SHIFT(196),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [472] = {.count = 1, .reusable = true}, SHIFT(198),
  [474] = {.count = 1, .reusable = true}, SHIFT(199),
  [476] = {.count = 1, .reusable = true}, SHIFT(201),
  [478] = {.count = 1, .reusable = true}, SHIFT(203),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 4),
  [484] = {.count = 1, .reusable = true}, SHIFT(204),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 4),
  [496] = {.count = 1, .reusable = true}, SHIFT(211),
  [498] = {.count = 1, .reusable = true}, SHIFT(215),
  [500] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [504] = {.count = 1, .reusable = true}, SHIFT(217),
  [506] = {.count = 1, .reusable = true}, SHIFT(219),
  [508] = {.count = 1, .reusable = true}, SHIFT(220),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [512] = {.count = 1, .reusable = false}, REDUCE(sym_producer, 5),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [518] = {.count = 1, .reusable = true}, SHIFT(223),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_actual, 5),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(190),
  [529] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2), SHIFT_REPEAT(193),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [538] = {.count = 1, .reusable = true}, SHIFT(225),
  [540] = {.count = 1, .reusable = true}, SHIFT(228),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [544] = {.count = 1, .reusable = true}, SHIFT(230),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [550] = {.count = 1, .reusable = true}, SHIFT(231),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [558] = {.count = 1, .reusable = true}, SHIFT(234),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [564] = {.count = 1, .reusable = true}, SHIFT(236),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
};

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
  };
  return &language;
}
