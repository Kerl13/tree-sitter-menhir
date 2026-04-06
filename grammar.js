// Reference: https://gitlab.inria.fr/fpottier/menhir/blob/master/src/lexer.mll
const lowercase = '[a-zß-öø-ÿ_]';
const uppercase = '[A-ZÀ-ÖØ-Þ]';
const identchar = '[a-zA-Z_À-ÖØ-öø-ÿ0-9]';

module.exports = grammar({
  name: 'menhir',

  extras: $ => [
    /\s/,
    $.line_comment,
    $.comment,
    $.ocaml_comment,
  ],

  inline: $ => [$.rule, $.continuation],

  externals: $ => [
    $.ocaml_comment, // OCaml-style comments: (* ... *)
    $._ocaml_content, // OCaml code block content (external scanner)
    $._ocaml_type_content, // OCaml type expression content (external scanner)
  ],

  rules: {
    source_file: $ => seq(
      repeat($.declaration),
      '%%',
      repeat($.rule),
      optional(seq(
        '%%',
        optional($.postlude),
      )),
    ),

    // Bars are a little annoying, see comment in
    // https://gitlab.inria.fr/fpottier/menhir/blob/master/src/lexer.mll

    _high_prec_bar: $ => prec(20, '|'),
    _low_prec_bar: $ => prec(10, '|'),

    // Indentifiers

    lid: $ => RegExp(lowercase + identchar + '*'),
    uid: $ => RegExp(uppercase + identchar + '*'),
    // Quoted identifier - allows escape sequences like \" inside
    qid: $ => /"([\x20-\x21\x23-\x5b\x5d-\x7e]|\\.)*"/,
    symbol: $ => choice($.lid, $.uid, $.qid),

    // Declarations

    declaration: $ => choice(
      $.header,

      seq('%parameter', $.type),

      seq('%token', optional($.type), clist($.terminal_alias_attrs)),

      seq($.priority_keyword, clist($.symbol)),

      seq('%type', $.type, clist($.strict_actual)),

      seq('%start', optional($.type), clist($.non_terminal)),

      seq('%attribute', clist($.strict_actual), repeat1($.attribute)),

      $.grammar_attribute,

      seq('%on_error_reduce', clist($.strict_actual)),

      ';',
    ),

    terminal_alias_attrs: $ => seq(
      $.uid, optional($.qid), repeat($.attribute),
    ),

    priority_keyword: $ => choice(
      '%left', '%right', '%nonassoc',
    ),

    non_terminal: $ => $.lid,

    // Production rules

    rule: $ => choice(
      $.old_rule,
      $.new_rule,
    ),

    // Production rules -- old syntax

    old_rule: $ => seq(
      optional($.flags),
      $.symbol,
      repeat($.attribute),
      plist($.symbol),
      ':',
      optional($._low_prec_bar),
      separated_nonempty_list($._high_prec_bar, $.production_group),
      repeat(';'),
    ),

    flags: $ => choice(
      '%public',
      '%inline',
      seq('%public', '%inline'),
      seq('%inline', '%public'),
    ),

    production_group: $ => seq(
      separated_nonempty_list(
        $._high_prec_bar,
        seq(repeat($.producer), optional($.precedence)),
      ),
      choice($.action, $.type),
      optional($.precedence),
    ),

    precedence: $ => seq(
      '%prec', $.symbol,
    ),

    producer: $ => seq(
      optional(seq($.lid, '=')), // XXX. do I need to expand in two rules here?
      $.actual,
      repeat($.attribute),
      repeat(';'), // XXX. there is realy a SEMI* in the official parser… What the heck
    ),

    strict_actual: $ =>
      generic_actual($, $.strict_actual, $.strict_actual),

    actual: $ =>
      generic_actual($, $.lax_actual, $.actual),

    lax_actual: $ => choice(
      generic_actual($, $.lax_actual, $.actual),
      separated_nonempty_list($._high_prec_bar, $.production_group),
    ),

    modifier: $ => choice(
      '?', '*', '+',
    ),

    // Production rules -- new sytax

    new_rule: $ => seq(
      optional('%public'),
      'let',
      $.lid,
      repeat($.attribute),
      plist($.symbol),
      $.equality_symbol,
      $.expression,
    ),

    equality_symbol: $ => choice('==', ':='),

    expression: $ => seq(
      optional('|'),
      separated_nonempty_list('|', $.seq_expression),
    ),

    seq_expression: $ => choice(
      seq($.symbol_expression, $.continuation),

      seq($.pattern, '=', $.symbol_expression, $.continuation),

      $.symbol_expression,

      $.action_expression,
    ),

    continuation: $ => seq(';', $.seq_expression),

    symbol_expression: $ => choice(
      seq($.symbol, repeat($.attribute)),

      seq(
        alias($.symbol, $.funcall),
        '(', separated_nonempty_list(',', $.expression), ')',
        repeat($.attribute),
      ),

      seq($.symbol_expression, $.modifier, repeat($.attribute)),
    ),

    action_expression: $ => choice(
      $.menhir_action,

      seq($.precedence, $.menhir_action),

      seq($.menhir_action, $.precedence),
    ),

    menhir_action: $ => choice(
      $.action,
      $.type,
    ),

    pattern: $ => choice(
      $.lid,
      '_',
      '~',
      // '(' [separated_list(',', pattern)] ')'
      seq('(', ')'),
      seq('(', separated_nonempty_list(',', $.pattern), ')'),
    ),

    // Comments

    line_comment: $ => /\/\/.*/,

    comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    )),

    // OCaml

    header: $ => seq(
      '%{',
      optional($.ocaml),
      '%}',
    ),

    action: $ => seq(
      '{',
      optional($.ocaml),
      '}',
    ),

    attribute: $ => seq(
      '[@',
      optional($.ocaml),
      ']',
    ),

    grammar_attribute: $ => seq(
      '%[@',
      optional($.ocaml),
      ']',
    ),

    type: $ => seq(
      '<',
      optional($.ocaml_type),
      '>',
    ),

    postlude: $ => $.ocaml,

    // OCaml code injection - external scanner tokenizes the content
    // which will be parsed by tree-sitter-ocaml grammar via injection
    ocaml: $ => $._ocaml_content,

    // OCaml type injection - external scanner tokenizes the content
    // which will be parsed by tree-sitter-ocaml/grammars/type via injection
    ocaml_type: $ => $._ocaml_type_content,
  },
});

/**
 * @param {any} sep
 * @param {any} rule
 */
function separated_nonempty_list(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * @param {any} rule
 */
function clist(rule) {
  return separated_nonempty_list(optional(','), rule);
}

/**
 * @param {any} rule
 */
function plist(rule) {
  return optional(seq('(', separated_nonempty_list(',', rule), ')'));
}

/**
 * @param {any} $
 * @param {any} rule_a
 * @param {any} rule_b
 */
function generic_actual($, rule_a, rule_b) {
  return choice(
    seq($.symbol),
    seq(
      alias($.symbol, $.funcall),
      '(', separated_nonempty_list(',', rule_a), ')',
    ),
    seq(rule_b, $.modifier),
  );
}
