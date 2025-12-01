function escapeRegex(string) {
  return string.replace(/[/\-\\^$*+?.()|[\]{}]/g, '\\$&');
}

function literal(keyword) {
  keyword = escapeRegex(keyword);
  return new RegExp(keyword, 'i');
};

const builtin_oprs = ["=", "+", "-", "/", "*", "*/", ">", "<"];

const builtin_core = ["include", "!", "#", "#>", "#S", "'", "*/MOD", "+!", "+LOOP",
  ",", ".", ".\"", "/MOD", "0<", "0=", "1+", "1-", "2!", "2*", "2/", "2@", "2DROP",
  "2DUP", "2OVER", "2SWAP", "<#", ">BODY", ">IN", ">NUMBER", ">R", "?DUP", "@",
  "ABORT", "ABORT\"", "ABS", "ACCEPT", "ALIGN", "ALIGNED", "ALLOT", "AND", "BASE",
  "BEGIN", "BL", "C!", "C,", "C@", "CELL+", "CELLS", "CHAR", "CHAR+", "CHARS",
  "CONSTANT", "COUNT", "CR", "CREATE", "DECIMAL", "DEPTH", "DO", "DOES>", "DROP",
  "DUP", "ELSE", "EMIT", "ENVIRONMENT?", "EVALUATE", "EXECUTE", "EXIT", "FILL",
  "FIND", "FM/MOD", "HERE", "HOLD", "I", "IF", "IMMEDIATE", "INVERT", "J", "KEY",
  "LEAVE", "LOOP", "LSHIFT", "M*", "MAX", "MIN", "MOD", "MOVE", "NEGATE", "OR",
  "OVER", "POSTPONE", "QUIT", "R>", "R@", "RECURSE", "REPEAT", "ROT", "RSHIFT",
  "S\"", "S>D", "SIGN", "SM/REM", "SOURCE", "SPACE", "SPACES", "STATE", "SWAP",
  "THEN", "TYPE", "U.", "U<", "UM*", "UM/MOD", "UNLOOP", "UNTIL", "VARIABLE",
  "WHILE", "WORD", "XOR", "[", "[']", "[CHAR]", ".(\"", ".R", ".S", "0<>", "0>",
  "2>R", "2R>", "2R@", ":NONAME", "<>", "?DO", "ACTION-OF", "AGAIN", "BUFFER:",
  "C\"", "CASE", "COMPILE,", "DEFER", "DEFER!", "DEFER@", "ENDCASE", "ENDOF",
  "ERASE", "FALSE", "HEX", "HOLDS", "IS", "MARKER", "NIP", "OF", "PAD", "PARSE",
  "PARSE-NAME", "PICK", "REFILL", "RESTORE-INPUT", "ROLL", "S\\\"", "SAVE-INPUT",
  "SOURCE-ID", "TO", "TRUE", "TUCK", "U.R", "U>", "UNUSED", "VALUE", "WITHIN", "[COMPILE]" ];

module.exports = grammar({
  name: 'forth',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.word_definition,
      $._tokens,
    ),

    _tokens: $ => choice(
      $.string,
      $.number,
      $.builtin,
      $.word,
      $.comment
    ),

    string: $ => choice(
      /[sScC]" [^"]*"/,  // s" S" c" C" followed by space and content
      /\." [^"]*"/,       // ." followed by space and content
    ),

    number: $ => /('\w')|(0[xX][0-9a-fA-F]+)|(\$[0-9a-fA-F]+)|(%[01]+)|(&\d+)|\d+/,

    builtin: $ => choice(
      $.core,
      $.operator,
    ),

    start_definition: $ => ":",
    end_definition: $ => ";",
    word_definition: $ => seq(
      $.start_definition,
      $.word,
      repeat1($._tokens),
      $.end_definition
    ),

    comment: $ => choice(
      $.line_comment,
      $.stack_effect,
      $.block_comment,
    ),

    line_comment: $ => /\\[^\n]*/,

    stack_effect: $ => /\( [^)]*--[^)]*\)/,

    block_comment: $ => /\( [^)]*\)/,

    core: $ => choice(...builtin_core.map(x => literal(x))),

    operator: _ => choice(...builtin_oprs),

    word: $ => /\S+/,
  }
});