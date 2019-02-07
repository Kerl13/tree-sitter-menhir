#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 248
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 6
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
  anon_sym_COMMA2 = 18,
  anon_sym_RPAREN = 19,
  anon_sym_COLON = 20,
  anon_sym_PERCENTpublic = 21,
  anon_sym_PERCENTinline = 22,
  anon_sym_PERCENTprec = 23,
  anon_sym_EQ = 24,
  anon_sym_QMARK = 25,
  anon_sym_STAR = 26,
  anon_sym_PLUS = 27,
  sym_new_rule = 28,
  sym_header = 29,
  sym_ocaml_type = 30,
  sym_action = 31,
  sym_attribute = 32,
  sym_grammar_attribute = 33,
  sym_postlude = 34,
  sym_source_file = 35,
  sym_bar = 36,
  sym_symbol = 37,
  sym_declaration = 38,
  sym_terminal_alias_attrs = 39,
  sym_priority_keyword = 40,
  sym_non_terminal = 41,
  sym_old_rule = 42,
  sym_flags = 43,
  sym_production_group = 44,
  sym_precedence = 45,
  sym_producer = 46,
  sym_strict_actual = 47,
  sym_actual = 48,
  sym_lax_actual = 49,
  sym_modifier = 50,
  sym__postlude = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_source_file_repeat2 = 53,
  aux_sym_declaration_repeat1 = 54,
  aux_sym_declaration_repeat2 = 55,
  aux_sym_declaration_repeat3 = 56,
  aux_sym_declaration_repeat4 = 57,
  aux_sym_declaration_repeat5 = 58,
  aux_sym_old_rule_repeat1 = 59,
  aux_sym_old_rule_repeat2 = 60,
  aux_sym_old_rule_repeat3 = 61,
  aux_sym_production_group_repeat1 = 62,
  aux_sym_production_group_repeat2 = 63,
  aux_sym_strict_actual_repeat1 = 64,
  aux_sym_actual_repeat1 = 65,
  aux_sym_lax_actual_repeat1 = 66,
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
  [sym_header] = "header",
  [sym_ocaml_type] = "ocaml_type",
  [sym_action] = "action",
  [sym_attribute] = "attribute",
  [sym_grammar_attribute] = "grammar_attribute",
  [sym_postlude] = "postlude",
  [sym_source_file] = "source_file",
  [sym_bar] = "bar",
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
  [sym__postlude] = "_postlude",
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_attribute] = {
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
  [sym__postlude] = {
    .visible = false,
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
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == 'n')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == ' ' ||
          lookahead == '!' ||
          (']' <= lookahead && lookahead <= '~'))
        ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '%')
        ADVANCE(18);
      if (lookahead == 'a')
        ADVANCE(19);
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_uid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"')
        ADVANCE(29);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          (']' <= lookahead && lookahead <= '~'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'o')
        ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'n')
        ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(35);
      if (lookahead == 'r')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'i')
        ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o')
        ADVANCE(40);
      if (lookahead == 'y')
        ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'w')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_qid);
      END_STATE();
    case 30:
      if (lookahead == 't')
        ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'f')
        ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'n')
        ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == '_')
        ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'r')
        ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'b')
        ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'g')
        ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'k')
        ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'p')
        ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == '_')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'c')
        ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'l')
        ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'h')
        ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'r')
        ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'r')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'i')
        ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENTleft);
      END_STATE();
    case 59:
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'm')
        ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENTprec);
      END_STATE();
    case 63:
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENTtype);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'u')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 69:
      if (lookahead == 'b')
        ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 's')
        ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'c')
        ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENTright);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENTstart);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PERCENTtoken);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'l')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 79:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENTinline);
      END_STATE();
    case 81:
      if (lookahead == 'o')
        ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENTpublic);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_lid);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'c')
        ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'r')
        ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_new_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENTnonassoc);
      END_STATE();
    case 93:
      if (lookahead == '_')
        ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'r')
        ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENTattribute);
      END_STATE();
    case 96:
      if (lookahead == 'r')
        ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PERCENTparameter);
      END_STATE();
    case 98:
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'd')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'u')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'e')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENTon_error_reduce);
      END_STATE();
    case 104:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == '%')
        ADVANCE(18);
      if (lookahead == 'a')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(106);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(108);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == 'n')
        ADVANCE(13);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 108:
      if (lookahead == '%')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'p')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'r')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      END_STATE();
    case 110:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 111:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(112);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 112:
      if (lookahead == 'i')
        ADVANCE(20);
      if (lookahead == 'p')
        ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      END_STATE();
    case 114:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(115);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(116);
      if (lookahead == ';')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 222))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (223 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255))
        ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == 'p')
        ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == ' ')
        ADVANCE(118);
      END_STATE();
    case 117:
      if (lookahead == 'r')
        ADVANCE(36);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 104, .external_lex_state = 2},
  [2] = {.lex_state = 104, .external_lex_state = 2},
  [3] = {.lex_state = 104, .external_lex_state = 3},
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 107},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104, .external_lex_state = 3},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 104, .external_lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 104},
  [14] = {.lex_state = 104},
  [15] = {.lex_state = 104, .external_lex_state = 2},
  [16] = {.lex_state = 104, .external_lex_state = 2},
  [17] = {.lex_state = 110, .external_lex_state = 4},
  [18] = {.lex_state = 111},
  [19] = {.lex_state = 0, .external_lex_state = 5},
  [20] = {.lex_state = 111},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 113, .external_lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 104, .external_lex_state = 2},
  [26] = {.lex_state = 104, .external_lex_state = 4},
  [27] = {.lex_state = 104, .external_lex_state = 4},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 104, .external_lex_state = 6},
  [30] = {.lex_state = 104, .external_lex_state = 2},
  [31] = {.lex_state = 104, .external_lex_state = 2},
  [32] = {.lex_state = 104, .external_lex_state = 2},
  [33] = {.lex_state = 104, .external_lex_state = 2},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 107},
  [36] = {.lex_state = 104, .external_lex_state = 2},
  [37] = {.lex_state = 104, .external_lex_state = 2},
  [38] = {.lex_state = 104, .external_lex_state = 2},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 104, .external_lex_state = 2},
  [41] = {.lex_state = 104},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 113, .external_lex_state = 4},
  [46] = {.lex_state = 111, .external_lex_state = 7},
  [47] = {.lex_state = 104},
  [48] = {.lex_state = 113, .external_lex_state = 4},
  [49] = {.lex_state = 104},
  [50] = {.lex_state = 104, .external_lex_state = 4},
  [51] = {.lex_state = 104},
  [52] = {.lex_state = 104, .external_lex_state = 4},
  [53] = {.lex_state = 104, .external_lex_state = 4},
  [54] = {.lex_state = 104, .external_lex_state = 6},
  [55] = {.lex_state = 104, .external_lex_state = 4},
  [56] = {.lex_state = 104, .external_lex_state = 2},
  [57] = {.lex_state = 104, .external_lex_state = 6},
  [58] = {.lex_state = 104, .external_lex_state = 6},
  [59] = {.lex_state = 104},
  [60] = {.lex_state = 104, .external_lex_state = 2},
  [61] = {.lex_state = 104},
  [62] = {.lex_state = 104, .external_lex_state = 2},
  [63] = {.lex_state = 104},
  [64] = {.lex_state = 104, .external_lex_state = 2},
  [65] = {.lex_state = 104, .external_lex_state = 2},
  [66] = {.lex_state = 104, .external_lex_state = 2},
  [67] = {.lex_state = 104, .external_lex_state = 2},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 104},
  [70] = {.lex_state = 104, .external_lex_state = 2},
  [71] = {.lex_state = 104, .external_lex_state = 2},
  [72] = {.lex_state = 104, .external_lex_state = 2},
  [73] = {.lex_state = 104, .external_lex_state = 2},
  [74] = {.lex_state = 111, .external_lex_state = 7},
  [75] = {.lex_state = 104},
  [76] = {.lex_state = 113, .external_lex_state = 4},
  [77] = {.lex_state = 114, .external_lex_state = 8},
  [78] = {.lex_state = 111, .external_lex_state = 7},
  [79] = {.lex_state = 107},
  [80] = {.lex_state = 104},
  [81] = {.lex_state = 114, .external_lex_state = 8},
  [82] = {.lex_state = 114, .external_lex_state = 8},
  [83] = {.lex_state = 107},
  [84] = {.lex_state = 107, .external_lex_state = 7},
  [85] = {.lex_state = 111, .external_lex_state = 7},
  [86] = {.lex_state = 114, .external_lex_state = 8},
  [87] = {.lex_state = 111, .external_lex_state = 7},
  [88] = {.lex_state = 107, .external_lex_state = 7},
  [89] = {.lex_state = 114},
  [90] = {.lex_state = 114},
  [91] = {.lex_state = 113, .external_lex_state = 4},
  [92] = {.lex_state = 114},
  [93] = {.lex_state = 114},
  [94] = {.lex_state = 104, .external_lex_state = 4},
  [95] = {.lex_state = 104, .external_lex_state = 4},
  [96] = {.lex_state = 104, .external_lex_state = 6},
  [97] = {.lex_state = 104, .external_lex_state = 6},
  [98] = {.lex_state = 104, .external_lex_state = 2},
  [99] = {.lex_state = 104, .external_lex_state = 6},
  [100] = {.lex_state = 104, .external_lex_state = 6},
  [101] = {.lex_state = 104, .external_lex_state = 2},
  [102] = {.lex_state = 104, .external_lex_state = 2},
  [103] = {.lex_state = 114},
  [104] = {.lex_state = 104, .external_lex_state = 2},
  [105] = {.lex_state = 104, .external_lex_state = 2},
  [106] = {.lex_state = 104, .external_lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 104, .external_lex_state = 2},
  [109] = {.lex_state = 104, .external_lex_state = 2},
  [110] = {.lex_state = 111, .external_lex_state = 7},
  [111] = {.lex_state = 107},
  [112] = {.lex_state = 114},
  [113] = {.lex_state = 111, .external_lex_state = 7},
  [114] = {.lex_state = 104},
  [115] = {.lex_state = 111, .external_lex_state = 7},
  [116] = {.lex_state = 104},
  [117] = {.lex_state = 107},
  [118] = {.lex_state = 107, .external_lex_state = 7},
  [119] = {.lex_state = 107, .external_lex_state = 7},
  [120] = {.lex_state = 104},
  [121] = {.lex_state = 114, .external_lex_state = 8},
  [122] = {.lex_state = 111, .external_lex_state = 7},
  [123] = {.lex_state = 111, .external_lex_state = 8},
  [124] = {.lex_state = 114, .external_lex_state = 8},
  [125] = {.lex_state = 107},
  [126] = {.lex_state = 107},
  [127] = {.lex_state = 111, .external_lex_state = 7},
  [128] = {.lex_state = 107},
  [129] = {.lex_state = 107, .external_lex_state = 7},
  [130] = {.lex_state = 107, .external_lex_state = 7},
  [131] = {.lex_state = 111, .external_lex_state = 7},
  [132] = {.lex_state = 111, .external_lex_state = 7},
  [133] = {.lex_state = 107, .external_lex_state = 7},
  [134] = {.lex_state = 111, .external_lex_state = 7},
  [135] = {.lex_state = 107, .external_lex_state = 7},
  [136] = {.lex_state = 104},
  [137] = {.lex_state = 113},
  [138] = {.lex_state = 114},
  [139] = {.lex_state = 104},
  [140] = {.lex_state = 114},
  [141] = {.lex_state = 104},
  [142] = {.lex_state = 104, .external_lex_state = 4},
  [143] = {.lex_state = 114},
  [144] = {.lex_state = 114},
  [145] = {.lex_state = 104, .external_lex_state = 2},
  [146] = {.lex_state = 114},
  [147] = {.lex_state = 107},
  [148] = {.lex_state = 107},
  [149] = {.lex_state = 107},
  [150] = {.lex_state = 113},
  [151] = {.lex_state = 114},
  [152] = {.lex_state = 111, .external_lex_state = 7},
  [153] = {.lex_state = 114},
  [154] = {.lex_state = 107},
  [155] = {.lex_state = 107},
  [156] = {.lex_state = 114, .external_lex_state = 8},
  [157] = {.lex_state = 111, .external_lex_state = 7},
  [158] = {.lex_state = 111, .external_lex_state = 7},
  [159] = {.lex_state = 111, .external_lex_state = 8},
  [160] = {.lex_state = 107},
  [161] = {.lex_state = 107},
  [162] = {.lex_state = 107},
  [163] = {.lex_state = 107},
  [164] = {.lex_state = 107},
  [165] = {.lex_state = 107, .external_lex_state = 7},
  [166] = {.lex_state = 114},
  [167] = {.lex_state = 114, .external_lex_state = 8},
  [168] = {.lex_state = 114},
  [169] = {.lex_state = 114},
  [170] = {.lex_state = 107, .external_lex_state = 7},
  [171] = {.lex_state = 111, .external_lex_state = 7},
  [172] = {.lex_state = 114, .external_lex_state = 8},
  [173] = {.lex_state = 107, .external_lex_state = 7},
  [174] = {.lex_state = 107, .external_lex_state = 7},
  [175] = {.lex_state = 114},
  [176] = {.lex_state = 111, .external_lex_state = 7},
  [177] = {.lex_state = 114},
  [178] = {.lex_state = 114},
  [179] = {.lex_state = 114},
  [180] = {.lex_state = 104, .external_lex_state = 4},
  [181] = {.lex_state = 114},
  [182] = {.lex_state = 104, .external_lex_state = 2},
  [183] = {.lex_state = 107},
  [184] = {.lex_state = 107},
  [185] = {.lex_state = 111, .external_lex_state = 7},
  [186] = {.lex_state = 113},
  [187] = {.lex_state = 107},
  [188] = {.lex_state = 114},
  [189] = {.lex_state = 111, .external_lex_state = 7},
  [190] = {.lex_state = 111, .external_lex_state = 8},
  [191] = {.lex_state = 107},
  [192] = {.lex_state = 107},
  [193] = {.lex_state = 104},
  [194] = {.lex_state = 114},
  [195] = {.lex_state = 114, .external_lex_state = 8},
  [196] = {.lex_state = 111, .external_lex_state = 7},
  [197] = {.lex_state = 114},
  [198] = {.lex_state = 111, .external_lex_state = 7},
  [199] = {.lex_state = 114, .external_lex_state = 8},
  [200] = {.lex_state = 114},
  [201] = {.lex_state = 114},
  [202] = {.lex_state = 107, .external_lex_state = 7},
  [203] = {.lex_state = 107, .external_lex_state = 7},
  [204] = {.lex_state = 111, .external_lex_state = 7},
  [205] = {.lex_state = 111, .external_lex_state = 7},
  [206] = {.lex_state = 114},
  [207] = {.lex_state = 114},
  [208] = {.lex_state = 107},
  [209] = {.lex_state = 111, .external_lex_state = 7},
  [210] = {.lex_state = 107},
  [211] = {.lex_state = 111, .external_lex_state = 7},
  [212] = {.lex_state = 107},
  [213] = {.lex_state = 113},
  [214] = {.lex_state = 111, .external_lex_state = 7},
  [215] = {.lex_state = 107},
  [216] = {.lex_state = 114},
  [217] = {.lex_state = 114},
  [218] = {.lex_state = 114},
  [219] = {.lex_state = 114},
  [220] = {.lex_state = 114, .external_lex_state = 8},
  [221] = {.lex_state = 114},
  [222] = {.lex_state = 114},
  [223] = {.lex_state = 114},
  [224] = {.lex_state = 107, .external_lex_state = 7},
  [225] = {.lex_state = 114},
  [226] = {.lex_state = 114},
  [227] = {.lex_state = 107},
  [228] = {.lex_state = 107},
  [229] = {.lex_state = 107},
  [230] = {.lex_state = 111, .external_lex_state = 7},
  [231] = {.lex_state = 111, .external_lex_state = 7},
  [232] = {.lex_state = 114},
  [233] = {.lex_state = 114},
  [234] = {.lex_state = 114, .external_lex_state = 8},
  [235] = {.lex_state = 114},
  [236] = {.lex_state = 107},
  [237] = {.lex_state = 107},
  [238] = {.lex_state = 107},
  [239] = {.lex_state = 111, .external_lex_state = 7},
  [240] = {.lex_state = 114},
  [241] = {.lex_state = 114, .external_lex_state = 8},
  [242] = {.lex_state = 107},
  [243] = {.lex_state = 107},
  [244] = {.lex_state = 107},
  [245] = {.lex_state = 107},
  [246] = {.lex_state = 107},
  [247] = {.lex_state = 107},
};

enum {
  ts_external_token_header = 0,
  ts_external_token_ocaml_type = 1,
  ts_external_token_action = 2,
  ts_external_token_attribute = 3,
  ts_external_token_grammar_attribute = 4,
  ts_external_token_postlude = 5,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_header] = sym_header,
  [ts_external_token_ocaml_type] = sym_ocaml_type,
  [ts_external_token_action] = sym_action,
  [ts_external_token_attribute] = sym_attribute,
  [ts_external_token_grammar_attribute] = sym_grammar_attribute,
  [ts_external_token_postlude] = sym_postlude,
};

static bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_header] = true,
    [ts_external_token_postlude] = true,
    [ts_external_token_action] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_attribute] = true,
  },
  [2] = {
    [ts_external_token_header] = true,
    [ts_external_token_grammar_attribute] = true,
  },
  [3] = {
    [ts_external_token_ocaml_type] = true,
  },
  [4] = {
    [ts_external_token_attribute] = true,
  },
  [5] = {
    [ts_external_token_postlude] = true,
  },
  [6] = {
    [ts_external_token_header] = true,
    [ts_external_token_grammar_attribute] = true,
    [ts_external_token_attribute] = true,
  },
  [7] = {
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_action] = true,
  },
  [8] = {
    [ts_external_token_ocaml_type] = true,
    [ts_external_token_action] = true,
    [ts_external_token_attribute] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PERCENTpublic] = ACTIONS(1),
    [sym_header] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(1),
    [anon_sym_PERCENTtype] = ACTIONS(1),
    [anon_sym_PERCENTleft] = ACTIONS(1),
    [sym_lid] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_qid] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PERCENTinline] = ACTIONS(1),
    [sym_ocaml_type] = ACTIONS(1),
    [sym_grammar_attribute] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(1),
    [anon_sym_PERCENTright] = ACTIONS(1),
    [sym_uid] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENTparameter] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_postlude] = ACTIONS(1),
    [anon_sym_PERCENTprec] = ACTIONS(1),
    [sym_action] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENTattribute] = ACTIONS(1),
    [anon_sym_PERCENTnonassoc] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PERCENTtoken] = ACTIONS(1),
    [sym_new_rule] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_declaration] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_source_file] = STATE(12),
    [sym_priority_keyword] = STATE(13),
    [sym_header] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(9),
    [sym_grammar_attribute] = ACTIONS(3),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [anon_sym_PERCENTattribute] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_PERCENTnonassoc] = ACTIONS(7),
    [anon_sym_PERCENTtoken] = ACTIONS(15),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(17),
    [anon_sym_PERCENTtype] = ACTIONS(19),
    [anon_sym_PERCENTleft] = ACTIONS(7),
  },
  [2] = {
    [sym_header] = ACTIONS(21),
    [anon_sym_PERCENTstart] = ACTIONS(21),
    [anon_sym_PERCENTright] = ACTIONS(21),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(21),
    [anon_sym_PERCENTparameter] = ACTIONS(21),
    [anon_sym_PERCENTattribute] = ACTIONS(21),
    [anon_sym_PERCENTnonassoc] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_grammar_attribute] = ACTIONS(21),
    [anon_sym_PERCENTtoken] = ACTIONS(21),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(21),
    [anon_sym_PERCENTtype] = ACTIONS(21),
    [anon_sym_PERCENTleft] = ACTIONS(21),
  },
  [3] = {
    [sym_non_terminal] = STATE(16),
    [sym_ocaml_type] = ACTIONS(23),
    [sym_lid] = ACTIONS(25),
  },
  [4] = {
    [sym_qid] = ACTIONS(27),
    [sym_lid] = ACTIONS(27),
    [sym_uid] = ACTIONS(27),
  },
  [5] = {
    [aux_sym_source_file_repeat2] = STATE(21),
    [sym_flags] = STATE(22),
    [sym_symbol] = STATE(23),
    [sym__postlude] = STATE(24),
    [sym_old_rule] = STATE(21),
    [sym_qid] = ACTIONS(29),
    [anon_sym_PERCENTpublic] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_uid] = ACTIONS(29),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(35),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_new_rule] = ACTIONS(39),
    [sym_lid] = ACTIONS(41),
  },
  [6] = {
    [sym_ocaml_type] = ACTIONS(43),
  },
  [7] = {
    [sym_symbol] = STATE(26),
    [sym_strict_actual] = STATE(27),
    [sym_qid] = ACTIONS(29),
    [sym_lid] = ACTIONS(29),
    [sym_uid] = ACTIONS(29),
  },
  [8] = {
    [sym_terminal_alias_attrs] = STATE(30),
    [sym_ocaml_type] = ACTIONS(45),
    [sym_uid] = ACTIONS(47),
  },
  [9] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(33),
    [sym_qid] = ACTIONS(49),
    [sym_lid] = ACTIONS(49),
    [sym_uid] = ACTIONS(49),
  },
  [10] = {
    [sym_ocaml_type] = ACTIONS(51),
  },
  [11] = {
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_declaration] = STATE(36),
    [sym_priority_keyword] = STATE(13),
    [sym_header] = ACTIONS(3),
    [anon_sym_PERCENTstart] = ACTIONS(5),
    [anon_sym_PERCENTright] = ACTIONS(7),
    [sym_grammar_attribute] = ACTIONS(3),
    [anon_sym_PERCENTparameter] = ACTIONS(11),
    [anon_sym_PERCENTattribute] = ACTIONS(13),
    [anon_sym_PERCENTnonassoc] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(53),
    [anon_sym_PERCENTtoken] = ACTIONS(15),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(17),
    [anon_sym_PERCENTtype] = ACTIONS(19),
    [anon_sym_PERCENTleft] = ACTIONS(7),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(55),
  },
  [13] = {
    [sym_symbol] = STATE(37),
    [sym_qid] = ACTIONS(49),
    [sym_lid] = ACTIONS(49),
    [sym_uid] = ACTIONS(49),
  },
  [14] = {
    [sym_non_terminal] = STATE(38),
    [sym_lid] = ACTIONS(25),
  },
  [15] = {
    [sym_header] = ACTIONS(57),
    [anon_sym_PERCENTstart] = ACTIONS(57),
    [anon_sym_PERCENTright] = ACTIONS(57),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(57),
    [anon_sym_PERCENTparameter] = ACTIONS(57),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(57),
    [anon_sym_PERCENTtype] = ACTIONS(57),
    [anon_sym_PERCENTleft] = ACTIONS(57),
    [sym_lid] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_grammar_attribute] = ACTIONS(57),
    [anon_sym_PERCENTattribute] = ACTIONS(57),
    [anon_sym_PERCENTnonassoc] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_PERCENTtoken] = ACTIONS(57),
  },
  [16] = {
    [sym_non_terminal] = STATE(40),
    [aux_sym_declaration_repeat4] = STATE(40),
    [sym_header] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
  },
  [17] = {
    [sym_qid] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_uid] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [sym_lid] = ACTIONS(63),
    [sym_attribute] = ACTIONS(63),
  },
  [18] = {
    [sym_qid] = ACTIONS(65),
    [sym_uid] = ACTIONS(65),
    [anon_sym_PERCENTinline] = ACTIONS(67),
    [sym_lid] = ACTIONS(65),
  },
  [19] = {
    [sym_postlude] = ACTIONS(69),
  },
  [20] = {
    [sym_qid] = ACTIONS(65),
    [anon_sym_PERCENTpublic] = ACTIONS(67),
    [sym_uid] = ACTIONS(65),
    [sym_lid] = ACTIONS(65),
  },
  [21] = {
    [aux_sym_source_file_repeat2] = STATE(43),
    [sym_flags] = STATE(22),
    [sym_symbol] = STATE(23),
    [sym__postlude] = STATE(44),
    [sym_old_rule] = STATE(43),
    [sym_qid] = ACTIONS(29),
    [anon_sym_PERCENTpublic] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_uid] = ACTIONS(29),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(35),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_new_rule] = ACTIONS(73),
    [sym_lid] = ACTIONS(41),
  },
  [22] = {
    [sym_symbol] = STATE(45),
    [sym_qid] = ACTIONS(29),
    [sym_lid] = ACTIONS(29),
    [sym_uid] = ACTIONS(29),
  },
  [23] = {
    [aux_sym_declaration_repeat5] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_attribute] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [25] = {
    [sym_header] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
  },
  [26] = {
    [sym_qid] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [sym_attribute] = ACTIONS(81),
    [sym_uid] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [sym_lid] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
  },
  [27] = {
    [aux_sym_declaration_repeat3] = STATE(52),
    [sym_strict_actual] = STATE(55),
    [sym_symbol] = STATE(26),
    [sym_modifier] = STATE(53),
    [aux_sym_declaration_repeat5] = STATE(54),
    [sym_qid] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_uid] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [sym_lid] = ACTIONS(29),
    [sym_attribute] = ACTIONS(89),
  },
  [28] = {
    [sym_terminal_alias_attrs] = STATE(56),
    [sym_uid] = ACTIONS(47),
  },
  [29] = {
    [aux_sym_declaration_repeat5] = STATE(58),
    [sym_header] = ACTIONS(91),
    [anon_sym_PERCENTstart] = ACTIONS(91),
    [anon_sym_PERCENTright] = ACTIONS(91),
    [sym_uid] = ACTIONS(91),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(91),
    [anon_sym_PERCENTparameter] = ACTIONS(91),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(91),
    [anon_sym_PERCENTtype] = ACTIONS(91),
    [anon_sym_PERCENTleft] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [sym_qid] = ACTIONS(93),
    [sym_grammar_attribute] = ACTIONS(91),
    [anon_sym_PERCENTattribute] = ACTIONS(91),
    [anon_sym_PERCENTnonassoc] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_PERCENTtoken] = ACTIONS(91),
    [sym_attribute] = ACTIONS(95),
  },
  [30] = {
    [sym_terminal_alias_attrs] = STATE(60),
    [aux_sym_declaration_repeat1] = STATE(60),
    [sym_header] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
  },
  [31] = {
    [sym_header] = ACTIONS(63),
    [anon_sym_PERCENTstart] = ACTIONS(63),
    [anon_sym_PERCENTright] = ACTIONS(63),
    [sym_uid] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_PERCENTparameter] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(63),
    [anon_sym_PERCENTtype] = ACTIONS(63),
    [anon_sym_PERCENTleft] = ACTIONS(63),
    [sym_lid] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [sym_qid] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_grammar_attribute] = ACTIONS(63),
    [anon_sym_PERCENTattribute] = ACTIONS(63),
    [anon_sym_PERCENTnonassoc] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PERCENTtoken] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
  },
  [32] = {
    [sym_header] = ACTIONS(81),
    [anon_sym_PERCENTstart] = ACTIONS(81),
    [anon_sym_PERCENTright] = ACTIONS(81),
    [sym_uid] = ACTIONS(81),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(81),
    [anon_sym_PERCENTparameter] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(81),
    [anon_sym_PERCENTtype] = ACTIONS(81),
    [anon_sym_PERCENTleft] = ACTIONS(81),
    [sym_lid] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_qid] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [sym_grammar_attribute] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_PERCENTattribute] = ACTIONS(81),
    [anon_sym_PERCENTnonassoc] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_PERCENTtoken] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
  },
  [33] = {
    [aux_sym_declaration_repeat3] = STATE(64),
    [sym_symbol] = STATE(32),
    [sym_modifier] = STATE(65),
    [sym_strict_actual] = STATE(66),
    [sym_header] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
    [sym_lid] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(101),
  },
  [34] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(67),
    [sym_qid] = ACTIONS(49),
    [sym_lid] = ACTIONS(49),
    [sym_uid] = ACTIONS(49),
  },
  [35] = {
    [aux_sym_source_file_repeat2] = STATE(68),
    [sym_flags] = STATE(22),
    [sym_symbol] = STATE(23),
    [sym__postlude] = STATE(44),
    [sym_old_rule] = STATE(68),
    [sym_qid] = ACTIONS(29),
    [anon_sym_PERCENTpublic] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_uid] = ACTIONS(29),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(35),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_new_rule] = ACTIONS(105),
    [sym_lid] = ACTIONS(41),
  },
  [36] = {
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_declaration] = STATE(36),
    [sym_priority_keyword] = STATE(13),
    [sym_header] = ACTIONS(107),
    [anon_sym_PERCENTstart] = ACTIONS(110),
    [anon_sym_PERCENTright] = ACTIONS(113),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(116),
    [anon_sym_PERCENTparameter] = ACTIONS(118),
    [anon_sym_PERCENTattribute] = ACTIONS(121),
    [anon_sym_PERCENTnonassoc] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(107),
    [sym_grammar_attribute] = ACTIONS(107),
    [anon_sym_PERCENTtoken] = ACTIONS(124),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(127),
    [anon_sym_PERCENTtype] = ACTIONS(130),
    [anon_sym_PERCENTleft] = ACTIONS(113),
  },
  [37] = {
    [sym_symbol] = STATE(70),
    [aux_sym_declaration_repeat2] = STATE(70),
    [sym_header] = ACTIONS(59),
    [anon_sym_PERCENTstart] = ACTIONS(59),
    [anon_sym_PERCENTright] = ACTIONS(59),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [anon_sym_PERCENTparameter] = ACTIONS(59),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(59),
    [anon_sym_PERCENTtype] = ACTIONS(59),
    [anon_sym_PERCENTleft] = ACTIONS(59),
    [sym_lid] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(133),
    [sym_qid] = ACTIONS(49),
    [sym_grammar_attribute] = ACTIONS(59),
    [anon_sym_PERCENTattribute] = ACTIONS(59),
    [anon_sym_PERCENTnonassoc] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_PERCENTtoken] = ACTIONS(59),
  },
  [38] = {
    [sym_non_terminal] = STATE(71),
    [aux_sym_declaration_repeat4] = STATE(71),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
  },
  [39] = {
    [sym_non_terminal] = STATE(72),
    [sym_lid] = ACTIONS(25),
  },
  [40] = {
    [sym_non_terminal] = STATE(73),
    [aux_sym_declaration_repeat4] = STATE(73),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
  },
  [41] = {
    [sym_qid] = ACTIONS(137),
    [sym_lid] = ACTIONS(137),
    [sym_uid] = ACTIONS(137),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(139),
  },
  [43] = {
    [aux_sym_source_file_repeat2] = STATE(43),
    [sym_flags] = STATE(22),
    [sym_symbol] = STATE(23),
    [sym_old_rule] = STATE(43),
    [sym_qid] = ACTIONS(141),
    [anon_sym_PERCENTpublic] = ACTIONS(144),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_uid] = ACTIONS(141),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(147),
    [anon_sym_PERCENTinline] = ACTIONS(149),
    [sym_new_rule] = ACTIONS(152),
    [sym_lid] = ACTIONS(155),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(158),
  },
  [45] = {
    [aux_sym_declaration_repeat5] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(160),
    [sym_attribute] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(164),
  },
  [46] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(83),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(168),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [47] = {
    [sym_symbol] = STATE(90),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [48] = {
    [aux_sym_declaration_repeat5] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(160),
    [sym_attribute] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(164),
  },
  [49] = {
    [sym_symbol] = STATE(92),
    [sym_strict_actual] = STATE(93),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [50] = {
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [sym_attribute] = ACTIONS(180),
    [sym_uid] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
  },
  [51] = {
    [sym_symbol] = STATE(26),
    [sym_strict_actual] = STATE(94),
    [sym_qid] = ACTIONS(29),
    [sym_lid] = ACTIONS(29),
    [sym_uid] = ACTIONS(29),
  },
  [52] = {
    [aux_sym_declaration_repeat3] = STATE(95),
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat5] = STATE(96),
    [sym_strict_actual] = STATE(55),
    [sym_qid] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(87),
    [sym_uid] = ACTIONS(29),
    [sym_lid] = ACTIONS(29),
    [sym_attribute] = ACTIONS(182),
  },
  [53] = {
    [sym_qid] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [sym_attribute] = ACTIONS(184),
    [sym_uid] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(184),
    [sym_lid] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [54] = {
    [aux_sym_declaration_repeat5] = STATE(97),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [sym_attribute] = ACTIONS(186),
  },
  [55] = {
    [sym_modifier] = STATE(53),
    [sym_qid] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(188),
    [sym_uid] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [sym_lid] = ACTIONS(188),
    [sym_attribute] = ACTIONS(188),
  },
  [56] = {
    [sym_terminal_alias_attrs] = STATE(98),
    [aux_sym_declaration_repeat1] = STATE(98),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
  },
  [57] = {
    [aux_sym_declaration_repeat5] = STATE(99),
    [sym_header] = ACTIONS(190),
    [anon_sym_PERCENTstart] = ACTIONS(190),
    [anon_sym_PERCENTright] = ACTIONS(190),
    [sym_uid] = ACTIONS(190),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(190),
    [anon_sym_PERCENTparameter] = ACTIONS(190),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(190),
    [anon_sym_PERCENTtype] = ACTIONS(190),
    [anon_sym_PERCENTleft] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_grammar_attribute] = ACTIONS(190),
    [anon_sym_PERCENTattribute] = ACTIONS(190),
    [anon_sym_PERCENTnonassoc] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_PERCENTtoken] = ACTIONS(190),
    [sym_attribute] = ACTIONS(192),
  },
  [58] = {
    [aux_sym_declaration_repeat5] = STATE(100),
    [sym_header] = ACTIONS(190),
    [anon_sym_PERCENTstart] = ACTIONS(190),
    [anon_sym_PERCENTright] = ACTIONS(190),
    [sym_uid] = ACTIONS(190),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(190),
    [anon_sym_PERCENTparameter] = ACTIONS(190),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(190),
    [anon_sym_PERCENTtype] = ACTIONS(190),
    [anon_sym_PERCENTleft] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [sym_grammar_attribute] = ACTIONS(190),
    [anon_sym_PERCENTattribute] = ACTIONS(190),
    [anon_sym_PERCENTnonassoc] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_PERCENTtoken] = ACTIONS(190),
    [sym_attribute] = ACTIONS(194),
  },
  [59] = {
    [sym_terminal_alias_attrs] = STATE(101),
    [sym_uid] = ACTIONS(47),
  },
  [60] = {
    [sym_terminal_alias_attrs] = STATE(102),
    [aux_sym_declaration_repeat1] = STATE(102),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
  },
  [61] = {
    [sym_symbol] = STATE(92),
    [sym_strict_actual] = STATE(103),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [62] = {
    [sym_header] = ACTIONS(180),
    [anon_sym_PERCENTstart] = ACTIONS(180),
    [anon_sym_PERCENTright] = ACTIONS(180),
    [sym_uid] = ACTIONS(180),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(180),
    [anon_sym_PERCENTparameter] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(180),
    [anon_sym_PERCENTtype] = ACTIONS(180),
    [anon_sym_PERCENTleft] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [sym_grammar_attribute] = ACTIONS(180),
    [anon_sym_PERCENTattribute] = ACTIONS(180),
    [anon_sym_PERCENTnonassoc] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_PERCENTtoken] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
  },
  [63] = {
    [sym_symbol] = STATE(32),
    [sym_strict_actual] = STATE(104),
    [sym_qid] = ACTIONS(49),
    [sym_lid] = ACTIONS(49),
    [sym_uid] = ACTIONS(49),
  },
  [64] = {
    [sym_symbol] = STATE(32),
    [aux_sym_declaration_repeat3] = STATE(105),
    [sym_strict_actual] = STATE(66),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [sym_lid] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(49),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
  },
  [65] = {
    [sym_header] = ACTIONS(184),
    [anon_sym_PERCENTstart] = ACTIONS(184),
    [anon_sym_PERCENTright] = ACTIONS(184),
    [sym_uid] = ACTIONS(184),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(184),
    [anon_sym_PERCENTparameter] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(184),
    [anon_sym_PERCENTtype] = ACTIONS(184),
    [anon_sym_PERCENTleft] = ACTIONS(184),
    [sym_lid] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [sym_qid] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [sym_grammar_attribute] = ACTIONS(184),
    [anon_sym_PERCENTattribute] = ACTIONS(184),
    [anon_sym_PERCENTnonassoc] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_PERCENTtoken] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(184),
  },
  [66] = {
    [sym_modifier] = STATE(65),
    [sym_header] = ACTIONS(188),
    [anon_sym_PERCENTstart] = ACTIONS(188),
    [anon_sym_PERCENTright] = ACTIONS(188),
    [sym_uid] = ACTIONS(188),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(188),
    [anon_sym_PERCENTparameter] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(188),
    [anon_sym_PERCENTtype] = ACTIONS(188),
    [anon_sym_PERCENTleft] = ACTIONS(188),
    [sym_lid] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [sym_qid] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_grammar_attribute] = ACTIONS(188),
    [anon_sym_PERCENTattribute] = ACTIONS(188),
    [anon_sym_PERCENTnonassoc] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_PERCENTtoken] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(101),
  },
  [67] = {
    [aux_sym_declaration_repeat3] = STATE(106),
    [sym_symbol] = STATE(32),
    [sym_modifier] = STATE(65),
    [sym_strict_actual] = STATE(66),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [sym_lid] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
    [anon_sym_QMARK] = ACTIONS(101),
  },
  [68] = {
    [aux_sym_source_file_repeat2] = STATE(43),
    [sym_flags] = STATE(22),
    [sym_symbol] = STATE(23),
    [sym__postlude] = STATE(107),
    [sym_old_rule] = STATE(43),
    [sym_qid] = ACTIONS(29),
    [anon_sym_PERCENTpublic] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_uid] = ACTIONS(29),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(35),
    [anon_sym_PERCENTinline] = ACTIONS(37),
    [sym_new_rule] = ACTIONS(73),
    [sym_lid] = ACTIONS(41),
  },
  [69] = {
    [sym_symbol] = STATE(108),
    [sym_qid] = ACTIONS(49),
    [sym_lid] = ACTIONS(49),
    [sym_uid] = ACTIONS(49),
  },
  [70] = {
    [sym_symbol] = STATE(109),
    [aux_sym_declaration_repeat2] = STATE(109),
    [sym_header] = ACTIONS(135),
    [anon_sym_PERCENTstart] = ACTIONS(135),
    [anon_sym_PERCENTright] = ACTIONS(135),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(135),
    [anon_sym_PERCENTparameter] = ACTIONS(135),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(135),
    [anon_sym_PERCENTtype] = ACTIONS(135),
    [anon_sym_PERCENTleft] = ACTIONS(135),
    [sym_lid] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(133),
    [sym_qid] = ACTIONS(49),
    [sym_grammar_attribute] = ACTIONS(135),
    [anon_sym_PERCENTattribute] = ACTIONS(135),
    [anon_sym_PERCENTnonassoc] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_PERCENTtoken] = ACTIONS(135),
  },
  [71] = {
    [sym_non_terminal] = STATE(73),
    [aux_sym_declaration_repeat4] = STATE(73),
    [sym_header] = ACTIONS(196),
    [anon_sym_PERCENTstart] = ACTIONS(196),
    [anon_sym_PERCENTright] = ACTIONS(196),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [anon_sym_PERCENTparameter] = ACTIONS(196),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(196),
    [anon_sym_PERCENTtype] = ACTIONS(196),
    [anon_sym_PERCENTleft] = ACTIONS(196),
    [sym_lid] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_grammar_attribute] = ACTIONS(196),
    [anon_sym_PERCENTattribute] = ACTIONS(196),
    [anon_sym_PERCENTnonassoc] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_PERCENTtoken] = ACTIONS(196),
  },
  [72] = {
    [sym_header] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(198),
    [anon_sym_PERCENTright] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(198),
    [anon_sym_PERCENTparameter] = ACTIONS(198),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(198),
    [anon_sym_PERCENTleft] = ACTIONS(198),
    [sym_lid] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(198),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
  },
  [73] = {
    [sym_non_terminal] = STATE(73),
    [aux_sym_declaration_repeat4] = STATE(73),
    [sym_header] = ACTIONS(198),
    [anon_sym_PERCENTstart] = ACTIONS(198),
    [anon_sym_PERCENTright] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(198),
    [anon_sym_PERCENTparameter] = ACTIONS(198),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(198),
    [anon_sym_PERCENTtype] = ACTIONS(198),
    [anon_sym_PERCENTleft] = ACTIONS(198),
    [sym_lid] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(203),
    [sym_grammar_attribute] = ACTIONS(198),
    [anon_sym_PERCENTattribute] = ACTIONS(198),
    [anon_sym_PERCENTnonassoc] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_PERCENTtoken] = ACTIONS(198),
  },
  [74] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(111),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(206),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [75] = {
    [sym_symbol] = STATE(112),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [76] = {
    [aux_sym_declaration_repeat5] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(208),
    [sym_attribute] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(210),
  },
  [77] = {
    [sym_uid] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_COMMA2] = ACTIONS(63),
    [anon_sym_PERCENTprec] = ACTIONS(63),
    [sym_action] = ACTIONS(63),
    [sym_lid] = ACTIONS(63),
    [sym_qid] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_ocaml_type] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_attribute] = ACTIONS(63),
  },
  [78] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(111),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [79] = {
    [sym_precedence] = STATE(117),
    [sym_qid] = ACTIONS(214),
    [anon_sym_PERCENTpublic] = ACTIONS(214),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_uid] = ACTIONS(214),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(214),
    [anon_sym_PERCENTinline] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(216),
    [sym_new_rule] = ACTIONS(218),
    [sym_lid] = ACTIONS(218),
  },
  [80] = {
    [sym_symbol] = STATE(119),
    [sym_qid] = ACTIONS(220),
    [sym_lid] = ACTIONS(220),
    [sym_uid] = ACTIONS(220),
  },
  [81] = {
    [sym_attribute] = ACTIONS(63),
    [sym_uid] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_COMMA2] = ACTIONS(63),
    [anon_sym_PERCENTprec] = ACTIONS(63),
    [sym_action] = ACTIONS(63),
    [sym_lid] = ACTIONS(63),
    [sym_qid] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_ocaml_type] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(222),
  },
  [82] = {
    [aux_sym_old_rule_repeat3] = STATE(122),
    [aux_sym_declaration_repeat5] = STATE(123),
    [sym_modifier] = STATE(124),
    [sym_qid] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(226),
    [sym_uid] = ACTIONS(224),
    [sym_ocaml_type] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_PERCENTprec] = ACTIONS(224),
    [sym_action] = ACTIONS(224),
    [anon_sym_QMARK] = ACTIONS(226),
    [sym_lid] = ACTIONS(224),
    [sym_attribute] = ACTIONS(230),
  },
  [83] = {
    [aux_sym_old_rule_repeat2] = STATE(125),
    [aux_sym_old_rule_repeat3] = STATE(126),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(232),
    [anon_sym_PERCENTpublic] = ACTIONS(232),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_uid] = ACTIONS(232),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(232),
    [anon_sym_PERCENTinline] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(238),
    [sym_lid] = ACTIONS(238),
  },
  [84] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(129),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(240),
    [sym_action] = ACTIONS(240),
  },
  [85] = {
    [sym_actual] = STATE(82),
    [sym_precedence] = STATE(130),
    [sym_producer] = STATE(131),
    [aux_sym_production_group_repeat1] = STATE(131),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(129),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_uid] = ACTIONS(166),
    [sym_action] = ACTIONS(240),
    [sym_ocaml_type] = ACTIONS(240),
    [sym_lid] = ACTIONS(174),
  },
  [86] = {
    [sym_qid] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(242),
    [sym_uid] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(244),
    [sym_ocaml_type] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_PERCENTprec] = ACTIONS(242),
    [sym_action] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [sym_lid] = ACTIONS(242),
    [sym_attribute] = ACTIONS(242),
  },
  [87] = {
    [sym_actual] = STATE(82),
    [sym_precedence] = STATE(133),
    [sym_producer] = STATE(134),
    [aux_sym_production_group_repeat1] = STATE(134),
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(246),
    [sym_action] = ACTIONS(246),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_uid] = ACTIONS(166),
    [sym_ocaml_type] = ACTIONS(246),
    [sym_lid] = ACTIONS(174),
  },
  [88] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(240),
    [sym_action] = ACTIONS(240),
  },
  [89] = {
    [anon_sym_COMMA2] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
  },
  [90] = {
    [aux_sym_old_rule_repeat1] = STATE(138),
    [anon_sym_COMMA2] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(250),
  },
  [91] = {
    [aux_sym_declaration_repeat5] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(252),
    [sym_attribute] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(252),
  },
  [92] = {
    [anon_sym_COMMA2] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
  },
  [93] = {
    [aux_sym_strict_actual_repeat1] = STATE(143),
    [sym_modifier] = STATE(144),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_COMMA2] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(263),
  },
  [94] = {
    [sym_modifier] = STATE(53),
    [sym_qid] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(265),
    [sym_uid] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [sym_lid] = ACTIONS(265),
    [sym_attribute] = ACTIONS(265),
  },
  [95] = {
    [sym_symbol] = STATE(26),
    [aux_sym_declaration_repeat3] = STATE(95),
    [sym_strict_actual] = STATE(55),
    [sym_qid] = ACTIONS(267),
    [sym_attribute] = ACTIONS(265),
    [sym_uid] = ACTIONS(267),
    [sym_lid] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(270),
  },
  [96] = {
    [aux_sym_declaration_repeat5] = STATE(97),
    [sym_header] = ACTIONS(196),
    [anon_sym_PERCENTstart] = ACTIONS(196),
    [anon_sym_PERCENTright] = ACTIONS(196),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [anon_sym_PERCENTparameter] = ACTIONS(196),
    [anon_sym_PERCENTattribute] = ACTIONS(196),
    [anon_sym_PERCENTnonassoc] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [sym_grammar_attribute] = ACTIONS(196),
    [anon_sym_PERCENTtoken] = ACTIONS(196),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(196),
    [anon_sym_PERCENTtype] = ACTIONS(196),
    [anon_sym_PERCENTleft] = ACTIONS(196),
    [sym_attribute] = ACTIONS(186),
  },
  [97] = {
    [aux_sym_declaration_repeat5] = STATE(97),
    [sym_header] = ACTIONS(252),
    [anon_sym_PERCENTstart] = ACTIONS(252),
    [anon_sym_PERCENTright] = ACTIONS(252),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(252),
    [anon_sym_PERCENTparameter] = ACTIONS(252),
    [anon_sym_PERCENTattribute] = ACTIONS(252),
    [anon_sym_PERCENTnonassoc] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [sym_grammar_attribute] = ACTIONS(252),
    [anon_sym_PERCENTtoken] = ACTIONS(252),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(252),
    [anon_sym_PERCENTtype] = ACTIONS(252),
    [anon_sym_PERCENTleft] = ACTIONS(252),
    [sym_attribute] = ACTIONS(273),
  },
  [98] = {
    [sym_terminal_alias_attrs] = STATE(102),
    [aux_sym_declaration_repeat1] = STATE(102),
    [sym_header] = ACTIONS(196),
    [anon_sym_PERCENTstart] = ACTIONS(196),
    [anon_sym_PERCENTright] = ACTIONS(196),
    [sym_uid] = ACTIONS(47),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [anon_sym_PERCENTparameter] = ACTIONS(196),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(196),
    [anon_sym_PERCENTtype] = ACTIONS(196),
    [anon_sym_PERCENTleft] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_grammar_attribute] = ACTIONS(196),
    [anon_sym_PERCENTattribute] = ACTIONS(196),
    [anon_sym_PERCENTnonassoc] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_PERCENTtoken] = ACTIONS(196),
  },
  [99] = {
    [aux_sym_declaration_repeat5] = STATE(100),
    [sym_header] = ACTIONS(276),
    [anon_sym_PERCENTstart] = ACTIONS(276),
    [anon_sym_PERCENTright] = ACTIONS(276),
    [sym_uid] = ACTIONS(276),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(276),
    [anon_sym_PERCENTparameter] = ACTIONS(276),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(276),
    [anon_sym_PERCENTtype] = ACTIONS(276),
    [anon_sym_PERCENTleft] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
    [sym_grammar_attribute] = ACTIONS(276),
    [anon_sym_PERCENTattribute] = ACTIONS(276),
    [anon_sym_PERCENTnonassoc] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_PERCENTtoken] = ACTIONS(276),
    [sym_attribute] = ACTIONS(194),
  },
  [100] = {
    [aux_sym_declaration_repeat5] = STATE(100),
    [sym_header] = ACTIONS(252),
    [anon_sym_PERCENTstart] = ACTIONS(252),
    [anon_sym_PERCENTright] = ACTIONS(252),
    [sym_uid] = ACTIONS(252),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(252),
    [anon_sym_PERCENTparameter] = ACTIONS(252),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(252),
    [anon_sym_PERCENTtype] = ACTIONS(252),
    [anon_sym_PERCENTleft] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_grammar_attribute] = ACTIONS(252),
    [anon_sym_PERCENTattribute] = ACTIONS(252),
    [anon_sym_PERCENTnonassoc] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_PERCENTtoken] = ACTIONS(252),
    [sym_attribute] = ACTIONS(278),
  },
  [101] = {
    [sym_header] = ACTIONS(281),
    [anon_sym_PERCENTstart] = ACTIONS(281),
    [anon_sym_PERCENTright] = ACTIONS(281),
    [sym_uid] = ACTIONS(281),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(281),
    [anon_sym_PERCENTparameter] = ACTIONS(281),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(281),
    [anon_sym_PERCENTtype] = ACTIONS(281),
    [anon_sym_PERCENTleft] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [sym_grammar_attribute] = ACTIONS(281),
    [anon_sym_PERCENTattribute] = ACTIONS(281),
    [anon_sym_PERCENTnonassoc] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_PERCENTtoken] = ACTIONS(281),
  },
  [102] = {
    [sym_terminal_alias_attrs] = STATE(102),
    [aux_sym_declaration_repeat1] = STATE(102),
    [sym_header] = ACTIONS(281),
    [anon_sym_PERCENTstart] = ACTIONS(281),
    [anon_sym_PERCENTright] = ACTIONS(281),
    [sym_uid] = ACTIONS(283),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(281),
    [anon_sym_PERCENTparameter] = ACTIONS(281),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(281),
    [anon_sym_PERCENTtype] = ACTIONS(281),
    [anon_sym_PERCENTleft] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_grammar_attribute] = ACTIONS(281),
    [anon_sym_PERCENTattribute] = ACTIONS(281),
    [anon_sym_PERCENTnonassoc] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_PERCENTtoken] = ACTIONS(281),
  },
  [103] = {
    [aux_sym_strict_actual_repeat1] = STATE(146),
    [sym_modifier] = STATE(144),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_COMMA2] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(289),
  },
  [104] = {
    [sym_modifier] = STATE(65),
    [sym_header] = ACTIONS(265),
    [anon_sym_PERCENTstart] = ACTIONS(265),
    [anon_sym_PERCENTright] = ACTIONS(265),
    [sym_uid] = ACTIONS(265),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(265),
    [anon_sym_PERCENTparameter] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(265),
    [anon_sym_PERCENTtype] = ACTIONS(265),
    [anon_sym_PERCENTleft] = ACTIONS(265),
    [sym_lid] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [sym_qid] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_grammar_attribute] = ACTIONS(265),
    [anon_sym_PERCENTattribute] = ACTIONS(265),
    [anon_sym_PERCENTnonassoc] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_PERCENTtoken] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(101),
  },
  [105] = {
    [sym_symbol] = STATE(32),
    [aux_sym_declaration_repeat3] = STATE(105),
    [sym_strict_actual] = STATE(66),
    [sym_header] = ACTIONS(265),
    [anon_sym_PERCENTstart] = ACTIONS(265),
    [anon_sym_PERCENTright] = ACTIONS(265),
    [sym_uid] = ACTIONS(291),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(265),
    [anon_sym_PERCENTparameter] = ACTIONS(265),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(265),
    [anon_sym_PERCENTtype] = ACTIONS(265),
    [anon_sym_PERCENTleft] = ACTIONS(265),
    [sym_lid] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(294),
    [sym_qid] = ACTIONS(291),
    [sym_grammar_attribute] = ACTIONS(265),
    [anon_sym_PERCENTattribute] = ACTIONS(265),
    [anon_sym_PERCENTnonassoc] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_PERCENTtoken] = ACTIONS(265),
  },
  [106] = {
    [sym_symbol] = STATE(32),
    [aux_sym_declaration_repeat3] = STATE(105),
    [sym_strict_actual] = STATE(66),
    [sym_header] = ACTIONS(196),
    [anon_sym_PERCENTstart] = ACTIONS(196),
    [anon_sym_PERCENTright] = ACTIONS(196),
    [sym_uid] = ACTIONS(49),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [anon_sym_PERCENTparameter] = ACTIONS(196),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(196),
    [anon_sym_PERCENTtype] = ACTIONS(196),
    [anon_sym_PERCENTleft] = ACTIONS(196),
    [sym_lid] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(103),
    [sym_qid] = ACTIONS(49),
    [sym_grammar_attribute] = ACTIONS(196),
    [anon_sym_PERCENTattribute] = ACTIONS(196),
    [anon_sym_PERCENTnonassoc] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_PERCENTtoken] = ACTIONS(196),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(297),
  },
  [108] = {
    [sym_header] = ACTIONS(299),
    [anon_sym_PERCENTstart] = ACTIONS(299),
    [anon_sym_PERCENTright] = ACTIONS(299),
    [sym_uid] = ACTIONS(299),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(299),
    [anon_sym_PERCENTparameter] = ACTIONS(299),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(299),
    [anon_sym_PERCENTtype] = ACTIONS(299),
    [anon_sym_PERCENTleft] = ACTIONS(299),
    [sym_lid] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [sym_qid] = ACTIONS(299),
    [sym_grammar_attribute] = ACTIONS(299),
    [anon_sym_PERCENTattribute] = ACTIONS(299),
    [anon_sym_PERCENTnonassoc] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_PERCENTtoken] = ACTIONS(299),
  },
  [109] = {
    [sym_symbol] = STATE(109),
    [aux_sym_declaration_repeat2] = STATE(109),
    [sym_header] = ACTIONS(299),
    [anon_sym_PERCENTstart] = ACTIONS(299),
    [anon_sym_PERCENTright] = ACTIONS(299),
    [sym_uid] = ACTIONS(301),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(299),
    [anon_sym_PERCENTparameter] = ACTIONS(299),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(299),
    [anon_sym_PERCENTtype] = ACTIONS(299),
    [anon_sym_PERCENTleft] = ACTIONS(299),
    [sym_lid] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_qid] = ACTIONS(301),
    [sym_grammar_attribute] = ACTIONS(299),
    [anon_sym_PERCENTattribute] = ACTIONS(299),
    [anon_sym_PERCENTnonassoc] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_PERCENTtoken] = ACTIONS(299),
  },
  [110] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(147),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [111] = {
    [aux_sym_old_rule_repeat2] = STATE(148),
    [aux_sym_old_rule_repeat3] = STATE(149),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(307),
    [anon_sym_PERCENTpublic] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_uid] = ACTIONS(307),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(307),
    [anon_sym_PERCENTinline] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(311),
    [sym_lid] = ACTIONS(311),
  },
  [112] = {
    [aux_sym_old_rule_repeat1] = STATE(151),
    [anon_sym_COMMA2] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(313),
  },
  [113] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(147),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(315),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [114] = {
    [sym_symbol] = STATE(153),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [115] = {
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [116] = {
    [sym_symbol] = STATE(155),
    [sym_qid] = ACTIONS(317),
    [sym_lid] = ACTIONS(317),
    [sym_uid] = ACTIONS(317),
  },
  [117] = {
    [sym_qid] = ACTIONS(319),
    [anon_sym_PERCENTpublic] = ACTIONS(319),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_uid] = ACTIONS(319),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(319),
    [anon_sym_PERCENTinline] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [sym_new_rule] = ACTIONS(321),
    [sym_lid] = ACTIONS(321),
  },
  [118] = {
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_ocaml_type] = ACTIONS(63),
    [sym_action] = ACTIONS(63),
  },
  [119] = {
    [anon_sym_PIPE] = ACTIONS(323),
    [sym_ocaml_type] = ACTIONS(323),
    [sym_action] = ACTIONS(323),
  },
  [120] = {
    [sym_symbol] = STATE(86),
    [sym_actual] = STATE(156),
    [sym_qid] = ACTIONS(166),
    [sym_lid] = ACTIONS(166),
    [sym_uid] = ACTIONS(166),
  },
  [121] = {
    [sym_qid] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_uid] = ACTIONS(180),
    [sym_ocaml_type] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_PERCENTprec] = ACTIONS(180),
    [sym_action] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_COMMA2] = ACTIONS(180),
    [sym_lid] = ACTIONS(180),
    [sym_attribute] = ACTIONS(180),
  },
  [122] = {
    [aux_sym_old_rule_repeat3] = STATE(157),
    [sym_qid] = ACTIONS(325),
    [sym_uid] = ACTIONS(325),
    [sym_ocaml_type] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PERCENTprec] = ACTIONS(325),
    [sym_action] = ACTIONS(325),
    [sym_lid] = ACTIONS(325),
  },
  [123] = {
    [aux_sym_old_rule_repeat3] = STATE(158),
    [aux_sym_declaration_repeat5] = STATE(159),
    [sym_qid] = ACTIONS(325),
    [sym_uid] = ACTIONS(325),
    [sym_ocaml_type] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PERCENTprec] = ACTIONS(325),
    [sym_action] = ACTIONS(325),
    [sym_lid] = ACTIONS(325),
    [sym_attribute] = ACTIONS(331),
  },
  [124] = {
    [sym_qid] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [sym_uid] = ACTIONS(333),
    [sym_ocaml_type] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_PERCENTprec] = ACTIONS(333),
    [sym_action] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [sym_lid] = ACTIONS(333),
    [sym_attribute] = ACTIONS(333),
  },
  [125] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(149),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(307),
    [anon_sym_PERCENTpublic] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_uid] = ACTIONS(307),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(307),
    [anon_sym_PERCENTinline] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(311),
    [sym_lid] = ACTIONS(311),
  },
  [126] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(307),
    [anon_sym_PERCENTpublic] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_uid] = ACTIONS(307),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(307),
    [anon_sym_PERCENTinline] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(311),
    [sym_lid] = ACTIONS(311),
  },
  [127] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(162),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [128] = {
    [sym_precedence] = STATE(163),
    [sym_qid] = ACTIONS(319),
    [anon_sym_PERCENTpublic] = ACTIONS(319),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_uid] = ACTIONS(319),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(319),
    [anon_sym_PERCENTinline] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PERCENTprec] = ACTIONS(216),
    [sym_new_rule] = ACTIONS(321),
    [sym_lid] = ACTIONS(321),
  },
  [129] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(337),
    [sym_action] = ACTIONS(337),
  },
  [130] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(165),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(337),
    [sym_action] = ACTIONS(337),
  },
  [131] = {
    [sym_actual] = STATE(82),
    [sym_producer] = STATE(131),
    [aux_sym_production_group_repeat1] = STATE(131),
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_PERCENTprec] = ACTIONS(342),
    [sym_uid] = ACTIONS(339),
    [sym_action] = ACTIONS(342),
    [sym_ocaml_type] = ACTIONS(342),
    [sym_lid] = ACTIONS(344),
  },
  [132] = {
    [sym_actual] = STATE(167),
    [sym_production_group] = STATE(168),
    [sym_lax_actual] = STATE(169),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [sym_producer] = STATE(171),
    [sym_symbol] = STATE(172),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(173),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_action] = ACTIONS(347),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(347),
    [sym_lid] = ACTIONS(174),
  },
  [133] = {
    [anon_sym_PIPE] = ACTIONS(349),
    [sym_ocaml_type] = ACTIONS(349),
    [sym_action] = ACTIONS(349),
  },
  [134] = {
    [sym_actual] = STATE(82),
    [sym_precedence] = STATE(174),
    [sym_producer] = STATE(131),
    [aux_sym_production_group_repeat1] = STATE(131),
    [sym_symbol] = STATE(86),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(349),
    [sym_action] = ACTIONS(349),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_uid] = ACTIONS(166),
    [sym_ocaml_type] = ACTIONS(349),
    [sym_lid] = ACTIONS(174),
  },
  [135] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(351),
    [sym_ocaml_type] = ACTIONS(349),
    [sym_action] = ACTIONS(349),
  },
  [136] = {
    [sym_symbol] = STATE(175),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [137] = {
    [anon_sym_COLON] = ACTIONS(354),
  },
  [138] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [anon_sym_COMMA2] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(313),
  },
  [139] = {
    [sym_symbol] = STATE(92),
    [sym_strict_actual] = STATE(178),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [140] = {
    [anon_sym_COMMA2] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
  },
  [141] = {
    [sym_symbol] = STATE(92),
    [sym_strict_actual] = STATE(179),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [142] = {
    [sym_qid] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [sym_attribute] = ACTIONS(356),
    [sym_uid] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
    [sym_lid] = ACTIONS(356),
    [anon_sym_COMMA] = ACTIONS(356),
  },
  [143] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [anon_sym_COMMA2] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(358),
  },
  [144] = {
    [anon_sym_COMMA2] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
  },
  [145] = {
    [sym_header] = ACTIONS(356),
    [anon_sym_PERCENTstart] = ACTIONS(356),
    [anon_sym_PERCENTright] = ACTIONS(356),
    [sym_uid] = ACTIONS(356),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(356),
    [anon_sym_PERCENTparameter] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(356),
    [anon_sym_PERCENTtype] = ACTIONS(356),
    [anon_sym_PERCENTleft] = ACTIONS(356),
    [sym_lid] = ACTIONS(356),
    [anon_sym_COMMA] = ACTIONS(356),
    [sym_qid] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [sym_grammar_attribute] = ACTIONS(356),
    [anon_sym_PERCENTattribute] = ACTIONS(356),
    [anon_sym_PERCENTnonassoc] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_PERCENTtoken] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
  },
  [146] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [anon_sym_COMMA2] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(360),
  },
  [147] = {
    [aux_sym_old_rule_repeat2] = STATE(183),
    [aux_sym_old_rule_repeat3] = STATE(184),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(362),
    [anon_sym_PERCENTpublic] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_uid] = ACTIONS(362),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(362),
    [anon_sym_PERCENTinline] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(366),
    [sym_lid] = ACTIONS(366),
  },
  [148] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(184),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(362),
    [anon_sym_PERCENTpublic] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_uid] = ACTIONS(362),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(362),
    [anon_sym_PERCENTinline] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(366),
    [sym_lid] = ACTIONS(366),
  },
  [149] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(362),
    [anon_sym_PERCENTpublic] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(362),
    [sym_uid] = ACTIONS(362),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(362),
    [anon_sym_PERCENTinline] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(366),
    [sym_lid] = ACTIONS(366),
  },
  [150] = {
    [anon_sym_COLON] = ACTIONS(368),
  },
  [151] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [anon_sym_COMMA2] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(370),
  },
  [152] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(187),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [153] = {
    [aux_sym_old_rule_repeat1] = STATE(188),
    [anon_sym_COMMA2] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(370),
  },
  [154] = {
    [sym_qid] = ACTIONS(63),
    [anon_sym_PERCENTpublic] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_uid] = ACTIONS(63),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(63),
    [anon_sym_PERCENTinline] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_new_rule] = ACTIONS(372),
    [sym_lid] = ACTIONS(372),
  },
  [155] = {
    [sym_qid] = ACTIONS(323),
    [anon_sym_PERCENTpublic] = ACTIONS(323),
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym_uid] = ACTIONS(323),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(323),
    [anon_sym_PERCENTinline] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [sym_new_rule] = ACTIONS(374),
    [sym_lid] = ACTIONS(374),
  },
  [156] = {
    [aux_sym_old_rule_repeat3] = STATE(189),
    [aux_sym_declaration_repeat5] = STATE(190),
    [sym_modifier] = STATE(124),
    [sym_qid] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(226),
    [sym_uid] = ACTIONS(376),
    [sym_ocaml_type] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_PERCENTprec] = ACTIONS(376),
    [sym_action] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(226),
    [sym_lid] = ACTIONS(376),
    [sym_attribute] = ACTIONS(380),
  },
  [157] = {
    [aux_sym_old_rule_repeat3] = STATE(157),
    [sym_qid] = ACTIONS(382),
    [sym_uid] = ACTIONS(382),
    [sym_ocaml_type] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_PERCENTprec] = ACTIONS(382),
    [sym_action] = ACTIONS(382),
    [sym_lid] = ACTIONS(382),
  },
  [158] = {
    [aux_sym_old_rule_repeat3] = STATE(157),
    [sym_qid] = ACTIONS(376),
    [sym_uid] = ACTIONS(376),
    [sym_ocaml_type] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_PERCENTprec] = ACTIONS(376),
    [sym_action] = ACTIONS(376),
    [sym_lid] = ACTIONS(376),
  },
  [159] = {
    [aux_sym_declaration_repeat5] = STATE(159),
    [sym_qid] = ACTIONS(252),
    [sym_uid] = ACTIONS(252),
    [sym_ocaml_type] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_PERCENTprec] = ACTIONS(252),
    [sym_action] = ACTIONS(252),
    [sym_lid] = ACTIONS(252),
    [sym_attribute] = ACTIONS(387),
  },
  [160] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(390),
    [anon_sym_PERCENTpublic] = ACTIONS(390),
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_uid] = ACTIONS(390),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(390),
    [anon_sym_PERCENTinline] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(392),
    [sym_new_rule] = ACTIONS(395),
    [sym_lid] = ACTIONS(395),
  },
  [161] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(382),
    [anon_sym_PERCENTpublic] = ACTIONS(382),
    [ts_builtin_sym_end] = ACTIONS(382),
    [sym_uid] = ACTIONS(382),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(382),
    [anon_sym_PERCENTinline] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(397),
    [sym_new_rule] = ACTIONS(400),
    [sym_lid] = ACTIONS(400),
  },
  [162] = {
    [sym_qid] = ACTIONS(390),
    [anon_sym_PERCENTpublic] = ACTIONS(390),
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_uid] = ACTIONS(390),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(390),
    [anon_sym_PERCENTinline] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [sym_new_rule] = ACTIONS(395),
    [sym_lid] = ACTIONS(395),
  },
  [163] = {
    [sym_qid] = ACTIONS(402),
    [anon_sym_PERCENTpublic] = ACTIONS(402),
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym_uid] = ACTIONS(402),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(402),
    [anon_sym_PERCENTinline] = ACTIONS(402),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_PIPE] = ACTIONS(402),
    [sym_new_rule] = ACTIONS(404),
    [sym_lid] = ACTIONS(404),
  },
  [164] = {
    [sym_precedence] = STATE(191),
    [sym_qid] = ACTIONS(402),
    [anon_sym_PERCENTpublic] = ACTIONS(402),
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym_uid] = ACTIONS(402),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(402),
    [anon_sym_PERCENTinline] = ACTIONS(402),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_PERCENTprec] = ACTIONS(216),
    [sym_new_rule] = ACTIONS(404),
    [sym_lid] = ACTIONS(404),
  },
  [165] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(406),
    [sym_action] = ACTIONS(406),
  },
  [166] = {
    [sym_precedence] = STATE(194),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_COMMA2] = ACTIONS(214),
    [anon_sym_PERCENTprec] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(214),
  },
  [167] = {
    [aux_sym_old_rule_repeat3] = STATE(122),
    [aux_sym_declaration_repeat5] = STATE(123),
    [sym_modifier] = STATE(195),
    [sym_qid] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(226),
    [sym_uid] = ACTIONS(224),
    [sym_ocaml_type] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_PERCENTprec] = ACTIONS(224),
    [sym_action] = ACTIONS(224),
    [anon_sym_QMARK] = ACTIONS(226),
    [sym_lid] = ACTIONS(224),
    [sym_attribute] = ACTIONS(230),
  },
  [168] = {
    [aux_sym_lax_actual_repeat1] = STATE(197),
    [anon_sym_COMMA2] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_PIPE] = ACTIONS(412),
  },
  [169] = {
    [aux_sym_actual_repeat1] = STATE(200),
    [anon_sym_COMMA2] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(416),
  },
  [170] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(202),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(418),
    [sym_action] = ACTIONS(418),
  },
  [171] = {
    [sym_actual] = STATE(82),
    [sym_precedence] = STATE(203),
    [sym_producer] = STATE(131),
    [aux_sym_production_group_repeat1] = STATE(131),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(202),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_uid] = ACTIONS(166),
    [sym_action] = ACTIONS(418),
    [sym_ocaml_type] = ACTIONS(418),
    [sym_lid] = ACTIONS(174),
  },
  [172] = {
    [sym_uid] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_COMMA2] = ACTIONS(410),
    [anon_sym_PERCENTprec] = ACTIONS(242),
    [sym_action] = ACTIONS(242),
    [sym_lid] = ACTIONS(242),
    [sym_qid] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(420),
    [sym_ocaml_type] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(410),
    [sym_attribute] = ACTIONS(242),
  },
  [173] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(418),
    [sym_action] = ACTIONS(418),
  },
  [174] = {
    [anon_sym_PIPE] = ACTIONS(422),
    [sym_ocaml_type] = ACTIONS(422),
    [sym_action] = ACTIONS(422),
  },
  [175] = {
    [anon_sym_COMMA2] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
  },
  [176] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(187),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(426),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [177] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [anon_sym_COMMA2] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(424),
  },
  [178] = {
    [aux_sym_strict_actual_repeat1] = STATE(207),
    [sym_modifier] = STATE(144),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_COMMA2] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(431),
  },
  [179] = {
    [sym_modifier] = STATE(144),
    [anon_sym_COMMA2] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(259),
    [anon_sym_QMARK] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_PLUS] = ACTIONS(259),
  },
  [180] = {
    [sym_qid] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [sym_attribute] = ACTIONS(435),
    [sym_uid] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(435),
    [sym_lid] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
  },
  [181] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [anon_sym_COMMA2] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(433),
  },
  [182] = {
    [sym_header] = ACTIONS(435),
    [anon_sym_PERCENTstart] = ACTIONS(435),
    [anon_sym_PERCENTright] = ACTIONS(435),
    [sym_uid] = ACTIONS(435),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(435),
    [anon_sym_PERCENTparameter] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_PERCENTon_error_reduce] = ACTIONS(435),
    [anon_sym_PERCENTtype] = ACTIONS(435),
    [anon_sym_PERCENTleft] = ACTIONS(435),
    [sym_lid] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [sym_qid] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [sym_grammar_attribute] = ACTIONS(435),
    [anon_sym_PERCENTattribute] = ACTIONS(435),
    [anon_sym_PERCENTnonassoc] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_PERCENTtoken] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(435),
  },
  [183] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(208),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(440),
    [anon_sym_PERCENTpublic] = ACTIONS(440),
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_uid] = ACTIONS(440),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(440),
    [anon_sym_PERCENTinline] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(444),
    [sym_lid] = ACTIONS(444),
  },
  [184] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(440),
    [anon_sym_PERCENTpublic] = ACTIONS(440),
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_uid] = ACTIONS(440),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(440),
    [anon_sym_PERCENTinline] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(444),
    [sym_lid] = ACTIONS(444),
  },
  [185] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(210),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(446),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [186] = {
    [anon_sym_COLON] = ACTIONS(448),
  },
  [187] = {
    [aux_sym_old_rule_repeat2] = STATE(212),
    [aux_sym_old_rule_repeat3] = STATE(208),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(440),
    [anon_sym_PERCENTpublic] = ACTIONS(440),
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_uid] = ACTIONS(440),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(440),
    [anon_sym_PERCENTinline] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(444),
    [sym_lid] = ACTIONS(444),
  },
  [188] = {
    [aux_sym_old_rule_repeat1] = STATE(177),
    [anon_sym_COMMA2] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(450),
  },
  [189] = {
    [aux_sym_old_rule_repeat3] = STATE(157),
    [sym_qid] = ACTIONS(452),
    [sym_uid] = ACTIONS(452),
    [sym_ocaml_type] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_PERCENTprec] = ACTIONS(452),
    [sym_action] = ACTIONS(452),
    [sym_lid] = ACTIONS(452),
  },
  [190] = {
    [aux_sym_old_rule_repeat3] = STATE(214),
    [aux_sym_declaration_repeat5] = STATE(159),
    [sym_qid] = ACTIONS(452),
    [sym_uid] = ACTIONS(452),
    [sym_ocaml_type] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_PERCENTprec] = ACTIONS(452),
    [sym_action] = ACTIONS(452),
    [sym_lid] = ACTIONS(452),
    [sym_attribute] = ACTIONS(331),
  },
  [191] = {
    [sym_qid] = ACTIONS(456),
    [anon_sym_PERCENTpublic] = ACTIONS(456),
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_uid] = ACTIONS(456),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(456),
    [anon_sym_PERCENTinline] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(456),
    [sym_new_rule] = ACTIONS(458),
    [sym_lid] = ACTIONS(458),
  },
  [192] = {
    [sym_precedence] = STATE(215),
    [sym_qid] = ACTIONS(456),
    [anon_sym_PERCENTpublic] = ACTIONS(456),
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_uid] = ACTIONS(456),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(456),
    [anon_sym_PERCENTinline] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_PERCENTprec] = ACTIONS(216),
    [sym_new_rule] = ACTIONS(458),
    [sym_lid] = ACTIONS(458),
  },
  [193] = {
    [sym_symbol] = STATE(216),
    [sym_qid] = ACTIONS(176),
    [sym_lid] = ACTIONS(176),
    [sym_uid] = ACTIONS(176),
  },
  [194] = {
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_COMMA2] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [195] = {
    [sym_qid] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(460),
    [sym_uid] = ACTIONS(333),
    [sym_ocaml_type] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_PERCENTprec] = ACTIONS(333),
    [sym_action] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_COMMA2] = ACTIONS(460),
    [sym_lid] = ACTIONS(333),
    [sym_attribute] = ACTIONS(333),
  },
  [196] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(217),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [sym_producer] = STATE(171),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(173),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_action] = ACTIONS(347),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(347),
    [sym_lid] = ACTIONS(174),
  },
  [197] = {
    [aux_sym_lax_actual_repeat1] = STATE(218),
    [anon_sym_COMMA2] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_PIPE] = ACTIONS(412),
  },
  [198] = {
    [sym_actual] = STATE(167),
    [sym_production_group] = STATE(168),
    [sym_lax_actual] = STATE(219),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [sym_producer] = STATE(171),
    [sym_symbol] = STATE(172),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(173),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_action] = ACTIONS(347),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(347),
    [sym_lid] = ACTIONS(174),
  },
  [199] = {
    [sym_qid] = ACTIONS(462),
    [anon_sym_STAR] = ACTIONS(462),
    [sym_uid] = ACTIONS(462),
    [sym_ocaml_type] = ACTIONS(462),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_PERCENTprec] = ACTIONS(462),
    [sym_action] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [sym_lid] = ACTIONS(462),
    [sym_attribute] = ACTIONS(462),
  },
  [200] = {
    [aux_sym_actual_repeat1] = STATE(221),
    [anon_sym_COMMA2] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(464),
  },
  [201] = {
    [sym_precedence] = STATE(222),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_COMMA2] = ACTIONS(319),
    [anon_sym_PERCENTprec] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(319),
  },
  [202] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(466),
    [sym_action] = ACTIONS(466),
  },
  [203] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(224),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(466),
    [sym_action] = ACTIONS(466),
  },
  [204] = {
    [sym_actual] = STATE(167),
    [sym_production_group] = STATE(168),
    [sym_lax_actual] = STATE(225),
    [sym_precedence] = STATE(170),
    [aux_sym_production_group_repeat1] = STATE(171),
    [sym_producer] = STATE(171),
    [sym_symbol] = STATE(172),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(173),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_action] = ACTIONS(347),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(347),
    [sym_lid] = ACTIONS(174),
  },
  [205] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(210),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [206] = {
    [anon_sym_COMMA2] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
  },
  [207] = {
    [aux_sym_strict_actual_repeat1] = STATE(181),
    [anon_sym_COMMA2] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(468),
  },
  [208] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(470),
    [anon_sym_PERCENTpublic] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_uid] = ACTIONS(470),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(470),
    [anon_sym_PERCENTinline] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(472),
    [sym_lid] = ACTIONS(472),
  },
  [209] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(227),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [210] = {
    [aux_sym_old_rule_repeat2] = STATE(228),
    [aux_sym_old_rule_repeat3] = STATE(229),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(470),
    [anon_sym_PERCENTpublic] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_uid] = ACTIONS(470),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(470),
    [anon_sym_PERCENTinline] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(472),
    [sym_lid] = ACTIONS(472),
  },
  [211] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(227),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(476),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [212] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(229),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(470),
    [anon_sym_PERCENTpublic] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_uid] = ACTIONS(470),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(470),
    [anon_sym_PERCENTinline] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(472),
    [sym_lid] = ACTIONS(472),
  },
  [213] = {
    [anon_sym_COLON] = ACTIONS(478),
  },
  [214] = {
    [aux_sym_old_rule_repeat3] = STATE(157),
    [sym_qid] = ACTIONS(480),
    [sym_uid] = ACTIONS(480),
    [sym_ocaml_type] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(480),
    [anon_sym_PERCENTprec] = ACTIONS(480),
    [sym_action] = ACTIONS(480),
    [sym_lid] = ACTIONS(480),
  },
  [215] = {
    [sym_qid] = ACTIONS(482),
    [anon_sym_PERCENTpublic] = ACTIONS(482),
    [ts_builtin_sym_end] = ACTIONS(482),
    [sym_uid] = ACTIONS(482),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(482),
    [anon_sym_PERCENTinline] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_PIPE] = ACTIONS(482),
    [sym_new_rule] = ACTIONS(484),
    [sym_lid] = ACTIONS(484),
  },
  [216] = {
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_COMMA2] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
  },
  [217] = {
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_COMMA2] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(486),
  },
  [218] = {
    [aux_sym_lax_actual_repeat1] = STATE(218),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_COMMA2] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(486),
  },
  [219] = {
    [anon_sym_COMMA2] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
  },
  [220] = {
    [sym_qid] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(493),
    [sym_uid] = ACTIONS(493),
    [sym_ocaml_type] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PERCENTprec] = ACTIONS(493),
    [sym_action] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [sym_lid] = ACTIONS(493),
    [sym_attribute] = ACTIONS(493),
  },
  [221] = {
    [aux_sym_actual_repeat1] = STATE(221),
    [anon_sym_COMMA2] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(491),
  },
  [222] = {
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_COMMA2] = ACTIONS(402),
    [anon_sym_RPAREN] = ACTIONS(402),
  },
  [223] = {
    [sym_precedence] = STATE(232),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_COMMA2] = ACTIONS(402),
    [anon_sym_PERCENTprec] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(402),
  },
  [224] = {
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(135),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_ocaml_type] = ACTIONS(498),
    [sym_action] = ACTIONS(498),
  },
  [225] = {
    [aux_sym_actual_repeat1] = STATE(235),
    [anon_sym_COMMA2] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(500),
  },
  [226] = {
    [anon_sym_COMMA2] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_QMARK] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
  },
  [227] = {
    [aux_sym_old_rule_repeat2] = STATE(236),
    [aux_sym_old_rule_repeat3] = STATE(237),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(502),
    [anon_sym_PERCENTpublic] = ACTIONS(502),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_uid] = ACTIONS(502),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(502),
    [anon_sym_PERCENTinline] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(506),
    [sym_lid] = ACTIONS(506),
  },
  [228] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(237),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(502),
    [anon_sym_PERCENTpublic] = ACTIONS(502),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_uid] = ACTIONS(502),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(502),
    [anon_sym_PERCENTinline] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(506),
    [sym_lid] = ACTIONS(506),
  },
  [229] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(502),
    [anon_sym_PERCENTpublic] = ACTIONS(502),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_uid] = ACTIONS(502),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(502),
    [anon_sym_PERCENTinline] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(506),
    [sym_lid] = ACTIONS(506),
  },
  [230] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(238),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [231] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(238),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(508),
    [sym_action] = ACTIONS(170),
    [sym_uid] = ACTIONS(166),
    [anon_sym_PERCENTprec] = ACTIONS(172),
    [sym_ocaml_type] = ACTIONS(170),
    [sym_lid] = ACTIONS(174),
  },
  [232] = {
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_COMMA2] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
  },
  [233] = {
    [sym_precedence] = STATE(240),
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_COMMA2] = ACTIONS(456),
    [anon_sym_PERCENTprec] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(456),
  },
  [234] = {
    [sym_qid] = ACTIONS(462),
    [anon_sym_STAR] = ACTIONS(462),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_uid] = ACTIONS(462),
    [sym_ocaml_type] = ACTIONS(462),
    [anon_sym_PLUS] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_PERCENTprec] = ACTIONS(462),
    [sym_action] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_COMMA2] = ACTIONS(510),
    [sym_lid] = ACTIONS(462),
    [sym_attribute] = ACTIONS(462),
  },
  [235] = {
    [aux_sym_actual_repeat1] = STATE(221),
    [anon_sym_COMMA2] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(512),
  },
  [236] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(242),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(514),
    [anon_sym_PERCENTpublic] = ACTIONS(514),
    [ts_builtin_sym_end] = ACTIONS(514),
    [sym_uid] = ACTIONS(514),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(514),
    [anon_sym_PERCENTinline] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(518),
    [sym_lid] = ACTIONS(518),
  },
  [237] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(514),
    [anon_sym_PERCENTpublic] = ACTIONS(514),
    [ts_builtin_sym_end] = ACTIONS(514),
    [sym_uid] = ACTIONS(514),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(514),
    [anon_sym_PERCENTinline] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(518),
    [sym_lid] = ACTIONS(518),
  },
  [238] = {
    [aux_sym_old_rule_repeat2] = STATE(243),
    [aux_sym_old_rule_repeat3] = STATE(242),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(514),
    [anon_sym_PERCENTpublic] = ACTIONS(514),
    [ts_builtin_sym_end] = ACTIONS(514),
    [sym_uid] = ACTIONS(514),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(514),
    [anon_sym_PERCENTinline] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(518),
    [sym_lid] = ACTIONS(518),
  },
  [239] = {
    [sym_actual] = STATE(82),
    [sym_production_group] = STATE(244),
    [sym_precedence] = STATE(84),
    [aux_sym_production_group_repeat1] = STATE(85),
    [sym_producer] = STATE(85),
    [sym_symbol] = STATE(86),
    [sym_bar] = STATE(87),
    [aux_sym_production_group_repeat2] = STATE(88),
    [sym_qid] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PERCENTprec] = ACTIONS(212),
    [sym_uid] = ACTIONS(212),
    [sym_action] = ACTIONS(212),
    [sym_ocaml_type] = ACTIONS(212),
    [sym_lid] = ACTIONS(212),
  },
  [240] = {
    [anon_sym_PIPE] = ACTIONS(482),
    [anon_sym_COMMA2] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
  },
  [241] = {
    [sym_qid] = ACTIONS(493),
    [anon_sym_STAR] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym_uid] = ACTIONS(493),
    [sym_ocaml_type] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PERCENTprec] = ACTIONS(493),
    [sym_action] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_COMMA2] = ACTIONS(520),
    [sym_lid] = ACTIONS(493),
    [sym_attribute] = ACTIONS(493),
  },
  [242] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(522),
    [anon_sym_PERCENTpublic] = ACTIONS(522),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_uid] = ACTIONS(522),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(522),
    [anon_sym_PERCENTinline] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(524),
    [sym_lid] = ACTIONS(524),
  },
  [243] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(245),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(522),
    [anon_sym_PERCENTpublic] = ACTIONS(522),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_uid] = ACTIONS(522),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(522),
    [anon_sym_PERCENTinline] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(524),
    [sym_lid] = ACTIONS(524),
  },
  [244] = {
    [aux_sym_old_rule_repeat2] = STATE(246),
    [aux_sym_old_rule_repeat3] = STATE(245),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(522),
    [anon_sym_PERCENTpublic] = ACTIONS(522),
    [ts_builtin_sym_end] = ACTIONS(522),
    [sym_uid] = ACTIONS(522),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(522),
    [anon_sym_PERCENTinline] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(524),
    [sym_lid] = ACTIONS(524),
  },
  [245] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(528),
    [anon_sym_PERCENTpublic] = ACTIONS(528),
    [ts_builtin_sym_end] = ACTIONS(528),
    [sym_uid] = ACTIONS(528),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(528),
    [anon_sym_PERCENTinline] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(530),
    [sym_lid] = ACTIONS(530),
  },
  [246] = {
    [aux_sym_old_rule_repeat2] = STATE(160),
    [aux_sym_old_rule_repeat3] = STATE(247),
    [sym_bar] = STATE(127),
    [sym_qid] = ACTIONS(528),
    [anon_sym_PERCENTpublic] = ACTIONS(528),
    [ts_builtin_sym_end] = ACTIONS(528),
    [sym_uid] = ACTIONS(528),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(528),
    [anon_sym_PERCENTinline] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_PIPE] = ACTIONS(236),
    [sym_new_rule] = ACTIONS(530),
    [sym_lid] = ACTIONS(530),
  },
  [247] = {
    [aux_sym_old_rule_repeat3] = STATE(161),
    [sym_qid] = ACTIONS(534),
    [anon_sym_PERCENTpublic] = ACTIONS(534),
    [ts_builtin_sym_end] = ACTIONS(534),
    [sym_uid] = ACTIONS(534),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(534),
    [anon_sym_PERCENTinline] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_new_rule] = ACTIONS(536),
    [sym_lid] = ACTIONS(536),
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
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_priority_keyword, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = true}, SHIFT(28),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = true}, SHIFT(31),
  [51] = {.count = 1, .reusable = true}, SHIFT(34),
  [53] = {.count = 1, .reusable = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_non_terminal, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(39),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_symbol, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(41),
  [69] = {.count = 1, .reusable = true}, SHIFT(42),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [73] = {.count = 1, .reusable = false}, SHIFT(43),
  [75] = {.count = 1, .reusable = true}, SHIFT(47),
  [77] = {.count = 1, .reusable = true}, SHIFT(48),
  [79] = {.count = 1, .reusable = true}, SHIFT(46),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(49),
  [85] = {.count = 1, .reusable = true}, SHIFT(50),
  [87] = {.count = 1, .reusable = true}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(54),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(57),
  [95] = {.count = 1, .reusable = true}, SHIFT(58),
  [97] = {.count = 1, .reusable = true}, SHIFT(59),
  [99] = {.count = 1, .reusable = true}, SHIFT(61),
  [101] = {.count = 1, .reusable = true}, SHIFT(62),
  [103] = {.count = 1, .reusable = true}, SHIFT(63),
  [105] = {.count = 1, .reusable = false}, SHIFT(68),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [133] = {.count = 1, .reusable = true}, SHIFT(69),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_flags, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__postlude, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(18),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(20),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(43),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(17),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [160] = {.count = 1, .reusable = true}, SHIFT(75),
  [162] = {.count = 1, .reusable = true}, SHIFT(76),
  [164] = {.count = 1, .reusable = true}, SHIFT(74),
  [166] = {.count = 1, .reusable = true}, SHIFT(77),
  [168] = {.count = 1, .reusable = true}, SHIFT(78),
  [170] = {.count = 1, .reusable = true}, SHIFT(79),
  [172] = {.count = 1, .reusable = true}, SHIFT(80),
  [174] = {.count = 1, .reusable = true}, SHIFT(81),
  [176] = {.count = 1, .reusable = true}, SHIFT(89),
  [178] = {.count = 1, .reusable = true}, SHIFT(91),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_modifier, 1),
  [182] = {.count = 1, .reusable = true}, SHIFT(96),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 2),
  [186] = {.count = 1, .reusable = true}, SHIFT(97),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 2),
  [192] = {.count = 1, .reusable = true}, SHIFT(99),
  [194] = {.count = 1, .reusable = true}, SHIFT(100),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4),
  [198] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat4, 2), SHIFT_REPEAT(39),
  [206] = {.count = 1, .reusable = true}, SHIFT(110),
  [208] = {.count = 1, .reusable = true}, SHIFT(114),
  [210] = {.count = 1, .reusable = true}, SHIFT(113),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_bar, 1),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 1),
  [216] = {.count = 1, .reusable = true}, SHIFT(116),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 1),
  [220] = {.count = 1, .reusable = true}, SHIFT(118),
  [222] = {.count = 1, .reusable = true}, SHIFT(120),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 1),
  [226] = {.count = 1, .reusable = true}, SHIFT(121),
  [228] = {.count = 1, .reusable = true}, SHIFT(122),
  [230] = {.count = 1, .reusable = true}, SHIFT(123),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 3),
  [234] = {.count = 1, .reusable = true}, SHIFT(126),
  [236] = {.count = 1, .reusable = true}, SHIFT(115),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 3),
  [240] = {.count = 1, .reusable = true}, SHIFT(128),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(132),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 1),
  [248] = {.count = 1, .reusable = true}, SHIFT(136),
  [250] = {.count = 1, .reusable = true}, SHIFT(137),
  [252] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(91),
  [257] = {.count = 1, .reusable = true}, SHIFT(139),
  [259] = {.count = 1, .reusable = true}, SHIFT(140),
  [261] = {.count = 1, .reusable = true}, SHIFT(141),
  [263] = {.count = 1, .reusable = true}, SHIFT(142),
  [265] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(17),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(51),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(97),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_terminal_alias_attrs, 3),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(100),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(29),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(59),
  [289] = {.count = 1, .reusable = true}, SHIFT(145),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(31),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat3, 2), SHIFT_REPEAT(63),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(31),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat2, 2), SHIFT_REPEAT(69),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 4),
  [309] = {.count = 1, .reusable = true}, SHIFT(149),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 4),
  [313] = {.count = 1, .reusable = true}, SHIFT(150),
  [315] = {.count = 1, .reusable = true}, SHIFT(152),
  [317] = {.count = 1, .reusable = true}, SHIFT(154),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_precedence, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 2),
  [327] = {.count = 1, .reusable = true}, SHIFT(157),
  [329] = {.count = 1, .reusable = true}, SHIFT(158),
  [331] = {.count = 1, .reusable = true}, SHIFT(159),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 2),
  [335] = {.count = 1, .reusable = true}, SHIFT(161),
  [337] = {.count = 1, .reusable = true}, SHIFT(164),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(77),
  [342] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat1, 2), SHIFT_REPEAT(81),
  [347] = {.count = 1, .reusable = true}, SHIFT(166),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 2), SHIFT_REPEAT(115),
  [354] = {.count = 1, .reusable = true}, SHIFT(176),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 4),
  [358] = {.count = 1, .reusable = true}, SHIFT(180),
  [360] = {.count = 1, .reusable = true}, SHIFT(182),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 5),
  [364] = {.count = 1, .reusable = true}, SHIFT(184),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 5),
  [368] = {.count = 1, .reusable = true}, SHIFT(185),
  [370] = {.count = 1, .reusable = true}, SHIFT(186),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_symbol, 1),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_precedence, 2),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 3),
  [378] = {.count = 1, .reusable = true}, SHIFT(189),
  [380] = {.count = 1, .reusable = true}, SHIFT(190),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [384] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(157),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat5, 2), SHIFT_REPEAT(159),
  [390] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat2, 2), SHIFT_REPEAT(115),
  [395] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat2, 2),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat3, 2), SHIFT_REPEAT(161),
  [400] = {.count = 1, .reusable = false}, REDUCE(aux_sym_old_rule_repeat3, 2),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 3),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 3),
  [406] = {.count = 1, .reusable = true}, SHIFT(192),
  [408] = {.count = 1, .reusable = true}, SHIFT(193),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 1),
  [412] = {.count = 1, .reusable = true}, SHIFT(196),
  [414] = {.count = 1, .reusable = true}, SHIFT(198),
  [416] = {.count = 1, .reusable = true}, SHIFT(199),
  [418] = {.count = 1, .reusable = true}, SHIFT(201),
  [420] = {.count = 1, .reusable = true}, SHIFT(204),
  [422] = {.count = 1, .reusable = true}, REDUCE(aux_sym_production_group_repeat2, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2),
  [426] = {.count = 1, .reusable = true}, SHIFT(205),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_old_rule_repeat1, 2), SHIFT_REPEAT(136),
  [431] = {.count = 1, .reusable = true}, SHIFT(206),
  [433] = {.count = 1, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_strict_actual, 5),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_strict_actual_repeat1, 2), SHIFT_REPEAT(141),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 6),
  [442] = {.count = 1, .reusable = true}, SHIFT(208),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 6),
  [446] = {.count = 1, .reusable = true}, SHIFT(209),
  [448] = {.count = 1, .reusable = true}, SHIFT(211),
  [450] = {.count = 1, .reusable = true}, SHIFT(213),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 4),
  [454] = {.count = 1, .reusable = true}, SHIFT(214),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 4),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 4),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 2),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 4),
  [464] = {.count = 1, .reusable = true}, SHIFT(220),
  [466] = {.count = 1, .reusable = true}, SHIFT(223),
  [468] = {.count = 1, .reusable = true}, SHIFT(226),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 7),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 7),
  [474] = {.count = 1, .reusable = true}, SHIFT(229),
  [476] = {.count = 1, .reusable = true}, SHIFT(230),
  [478] = {.count = 1, .reusable = true}, SHIFT(231),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_producer, 5),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_production_group, 5),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_production_group, 5),
  [486] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lax_actual_repeat1, 2), SHIFT_REPEAT(196),
  [491] = {.count = 1, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_actual, 5),
  [495] = {.count = 2, .reusable = true}, REDUCE(aux_sym_actual_repeat1, 2), SHIFT_REPEAT(198),
  [498] = {.count = 1, .reusable = true}, SHIFT(233),
  [500] = {.count = 1, .reusable = true}, SHIFT(234),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 8),
  [504] = {.count = 1, .reusable = true}, SHIFT(237),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 8),
  [508] = {.count = 1, .reusable = true}, SHIFT(239),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 4),
  [512] = {.count = 1, .reusable = true}, SHIFT(241),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 9),
  [516] = {.count = 1, .reusable = true}, SHIFT(242),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 9),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_lax_actual, 5),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 10),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 10),
  [526] = {.count = 1, .reusable = true}, SHIFT(245),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 11),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 11),
  [532] = {.count = 1, .reusable = true}, SHIFT(247),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_old_rule, 12),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_old_rule, 12),
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
