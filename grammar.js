// Reference: https://gitlab.inria.fr/fpottier/menhir/blob/master/src/lexer.mll
const lowercase = "[a-zß-öø-ÿ_]"
const uppercase = "[A-ZÀ-ÖØ-Þ]"
const identchar = "[a-zA-Z_À-ÖØ-öø-ÿ0-9]"

module.exports = grammar({
  name: 'menhir',

  extras: $ => [
    /\s/,
    $.line_comment,
    $.comment,
    $.ocaml_comment
  ],

  inline: $ => [$.rule],

  externals: $ => [
    // OCaml stuff
    $.header,             // %{ ... %}
    $.ocaml_type,         // < ... >
    $.action,             // { ... }
    $.attribute,          // [@ ... ]
    $.grammar_attribute,  // %[@ ... ]
    $.postlude,           // %% → eof
    // Comments
    $.line_comment,       // // ...
    $.comment,            // /* ... */
    $.ocaml_comment       // (* ... *)
  ],

  rules: {
    source_file: $ => seq(
      repeat($.declaration),
      '%%',
      repeat($.rule),
      optional($.postlude)
    ),

    // Hackish?

    bar: $ => prec(20, '|'),

    // Indentifiers

    lid: $ => RegExp(lowercase + identchar + '*'),
    uid: $ => RegExp(uppercase + identchar + '*'),
    qid: $ => /"[ -!\]-~]+"/,
    symbol: $ => choice($.lid, $.uid, $.qid),

    // Declarations

    declaration: $ => choice(
      $.header,

      seq('%parameter', $.ocaml_type),

      seq('%token', optional($.ocaml_type), clist($.terminal_alias_attrs)),

      seq($.priority_keyword, clist($.symbol)),

      seq('%type', $.ocaml_type, clist($.strict_actual)),

      seq('%start', optional($.ocaml_type), clist($.non_terminal)),

      seq('%attribute', clist($.strict_actual), repeat1($.attribute)),

      $.grammar_attribute,

      seq('%on_error_reduce', clist($.strict_actual)),

      ';'
    ),

    terminal_alias_attrs: $ => seq(
      $.uid, optional($.qid), repeat($.attribute)
    ),

    priority_keyword: $ => choice(
      '%left', '%right', '%nonassoc'
    ),

    non_terminal: $ => $.lid,

    // Production rules

    rule: $ => choice(
      $.old_rule,
      $.new_rule
    ),

    // Production rules -- old syntax

    old_rule: $ => seq(
      optional($.flags),
      $.symbol,
      repeat($.attribute),
      plist($.symbol),
      ':',
      prec(10, optional('|')),
      separated_nonempty_list($.bar, $.production_group),
      repeat(';')
    ),

    flags: $ => choice(
      '%public',
      '%inline',
      seq('%public', '%inline'),
      seq('%inline', '%public')
    ),

    production_group: $ => seq(
      separated_nonempty_list(
        $.bar,
        seq(repeat($.producer), optional($.precedence))
      ),
      choice($.action, $.ocaml_type),
      optional($.precedence)
    ),

    precedence: $ => seq(
      '%prec', $.symbol
    ),

    producer: $ => seq(
        optional(seq($.lid, '=')),  // XXX. do I need to expand in two rules here?
        $.actual,
        repeat($.attribute),
        repeat(';')  // XXX. there is realy a SEMI* in the official parser… What the heck
      ),

    strict_actual: $ =>
      generic_actual($, $.strict_actual, $.strict_actual),

    actual: $ =>
      generic_actual($, $.lax_actual, $.actual),

    lax_actual: $ => choice(
      generic_actual($, $.lax_actual, $.actual),
      separated_nonempty_list('|', $.production_group)
    ),

    modifier: $ => choice(
      '?', '*', '+'
    ),

    // Production rules -- new sytax

    new_rule: $ => "new_rule", // TODO
  }
})

function separated_nonempty_list(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function clist(rule) {
  return separated_nonempty_list(optional(','), rule)
}

function plist(rule) {
  return optional(seq('(', separated_nonempty_list(', ', rule), ')'))
}

function generic_actual($, rule_a, rule_b) {
  return choice(
    seq($.symbol, plist(rule_a)),
    seq(rule_b, $.modifier),
  )
}
