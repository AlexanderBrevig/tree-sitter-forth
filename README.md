# tree-sitter-forth

[![build](https://github.com/AlexanderBrevig/tree-sitter-forth/actions/workflows/ci.yml/badge.svg)](https://github.com/AlexanderBrevig/tree-sitter-forth/actions/workflows/ci.yml)

[Forth](https://forth-standard.org/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) - a fast, incremental parser for syntax highlighting and code analysis.

## Features

- **Complete number support**: Decimal, hex (`0xFF`, `$FF`), binary (`%1010`), octal (`&77`), character literals (`'c'`), floats (`3.14`, `1.5e-10`), and double-cell numbers (`123.`)
- **Semantic categorization**: Control flow, operators, I/O, and core words are distinct AST nodes for better syntax highlighting
- **Case-insensitive**: All Forth keywords are case-insensitive as per standard
- **Comment types**: Line comments (`\`), block comments, and stack effect comments (`( n -- result )`) parsed separately
- **String types**: `s"`, `S"`, `c"`, `C"`, and `."` with proper tokenization
- **Bindings**: Node.js and Rust support

## Installation

```bash
npm install tree-sitter-forth
```

## Usage

```bash
# Generate parser
npm run build

# Run tests
npm test

# Parse a file
npm run parse -- file.fs
```

## Grammar Structure

The grammar categorizes Forth words into semantic groups:

- **Control Flow**: `IF/THEN/ELSE`, `BEGIN/UNTIL`, `DO/LOOP`, `CASE/OF`, etc.
- **Operators**: Stack manipulation (`DUP`, `SWAP`, `ROT`), arithmetic (`+`, `-`, `MOD`), logic (`AND`, `OR`)
- **I/O**: Input/output words (`.`, `EMIT`, `KEY`, `ACCEPT`)
- **Core**: Defining words, memory operations, compilation words

## License

MIT
