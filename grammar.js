function escapeRegex(string) {
  return string.replace(/[/\-\\^$*+?.()|[\]{}]/g, '\\$&');
}

function literal(keyword) {
  keyword = escapeRegex(keyword);
  return new RegExp(keyword, 'i');
};

const builtin_oprs = [
  // Arithmetic operators
  "=", "+", "-", "/", "*", "*/", ">", "<",
  "MOD", "/MOD", "*/MOD", "FM/MOD", "SM/REM",
  "1+", "1-", "2*", "2/",
  "M*", "UM*", "UM/MOD",
  "ABS", "NEGATE", "MIN", "MAX",
  // Logical operators
  "AND", "OR", "XOR", "INVERT",
  "LSHIFT", "RSHIFT",
  // Comparison operators
  "<>", "0<", "0=", "0>", "0<>",
  "U<", "U>",
  // Stack manipulation
  "DUP", "DROP", "SWAP", "OVER", "ROT", "NIP", "TUCK", "PICK", "ROLL",
  "2DUP", "2DROP", "2SWAP", "2OVER",
  ">R", "R>", "R@",
  "2>R", "2R>", "2R@",
  "?DUP"
];

const control_flow = ["IF", "THEN", "ELSE", "BEGIN", "UNTIL", "WHILE", "REPEAT",
  "AGAIN", "DO", "LOOP", "+LOOP", "?DO", "UNLOOP", "LEAVE", "EXIT", "RECURSE",
  "CASE", "OF", "ENDOF", "ENDCASE"];

const io_words = [
  // Output
  ".", "EMIT", "TYPE", "SPACE", "SPACES", "CR", ".\"", ".S", ".R", "U.", "U.R",
  // Input
  "KEY", "ACCEPT", "WORD",
  // String parsing
  "PARSE", "PARSE-NAME",
  // Formatting
  ".(\"",
];

const builtin_core = ["include", "!", "#", "#>", "#S", "'", "+!",
  ",", "2!", "2@",
  "<#", ">BODY", ">IN", ">NUMBER", "@",
  "ABORT", "ABORT\"", "ALIGN", "ALIGNED", "ALLOT", "BASE",
  "BL", "C!", "C,", "C@", "CELL+", "CELLS", "CHAR", "CHAR+", "CHARS",
  "CONSTANT", "COUNT", "CREATE", "DECIMAL", "DEPTH", "DOES>",
  "ENVIRONMENT?", "EVALUATE", "EXECUTE", "FILL",
  "FIND", "HERE", "HOLD", "I", "IMMEDIATE", "J",
  "MOVE", "POSTPONE", "QUIT",
  "S\"", "S>D", "SIGN", "SOURCE", "STATE",
  "VARIABLE",
  "[", "[']", "[CHAR]",
  ":NONAME", "ACTION-OF", "BUFFER:",
  "C\"", "COMPILE,", "DEFER", "DEFER!", "DEFER@",
  "ERASE", "FALSE", "HEX", "HOLDS", "IS", "MARKER", "PAD",
  "REFILL", "RESTORE-INPUT", "S\\\"", "SAVE-INPUT",
  "SOURCE-ID", "TO", "TRUE", "UNUSED", "VALUE", "WITHIN", "[COMPILE]" ];

module.exports = grammar({
  name: 'forth',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.word_definition,
      $._tokens,
    ),

    _tokens: $ => choice(
      $.comment,
      $.string,
      $.number,
      $.builtin,
      $.word,
    ),

    string: $ => choice(
      /[sScC]" [^"]*"/,  // s" S" c" C" followed by space and content
      /\." [^"]*"/,       // ." followed by space and content
    ),

    number: $ => choice(
      $.character_literal,
      $.hex_number,
      $.binary_number,
      $.octal_number,
      $.float_number,
      $.double_cell_number,
      $.decimal_number,
    ),

    character_literal: $ => /'\w'/,

    hex_number: $ => /-?(0[xX][0-9a-fA-F]+|\$[0-9a-fA-F]+)/,

    binary_number: $ => /-?%[01]+/,

    octal_number: $ => /-?&\d+/,

    float_number: $ => /-?\d+\.\d+([eE][+-]?\d+)?/,

    double_cell_number: $ => /-?\d+\./,

    decimal_number: $ => /-?\d+/,

    builtin: $ => choice(
      $.control_flow,
      $.io,
      $.operator,
      $.core,
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

    control_flow: $ => choice(...control_flow.map(x => literal(x))),

    io: $ => choice(...io_words.map(x => literal(x))),

    core: $ => choice(...builtin_core.map(x => literal(x))),

    operator: $ => choice(...builtin_oprs.map(x => literal(x))),

    word: $ => /\S+/,
  }
});