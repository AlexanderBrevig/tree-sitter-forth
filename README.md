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

This grammar is not yet published to the npm registry, so install it from source.

### Prerequisites

- The [`tree-sitter` CLI](https://github.com/tree-sitter/tree-sitter) — to generate and test the parser
- [Node.js](https://nodejs.org/) and a C toolchain — only if you want to build the native Node.js binding

### Build from source

```bash
git clone https://github.com/AlexanderBrevig/tree-sitter-forth.git
cd tree-sitter-forth
tree-sitter generate --abi 15   # generate the parser from grammar.js
tree-sitter test                # optional: run the test suite
```

The `package.json` `build` script (`tree-sitter generate && node-gyp build`) additionally
builds the native Node.js binding. Use it only if you need that binding:

```bash
npm install      # fetches the `nan` dependency
npm run build
```

### Nix / NixOS

The `tree-sitter-cli` npm package ships a prebuilt, dynamically-linked binary that
NixOS cannot run, so don't rely on `npm install` to provide the CLI. This repo includes
a flake with a dev shell that provides the `tree-sitter` CLI, Node.js, a C toolchain, and
a Rust toolchain:

```bash
nix develop
tree-sitter generate --abi 15
tree-sitter test
cargo test            # exercises the Rust binding
```

Without cloning, you can also pull just the tools ad hoc:

```bash
nix shell nixpkgs#tree-sitter nixpkgs#nodejs nixpkgs#gcc
```

### Use as a dependency

Until the package is on npm, depend on it directly from git:

```bash
npm install AlexanderBrevig/tree-sitter-forth
```

## Usage

```bash
# Generate the parser from grammar.js
tree-sitter generate --abi 15

# Run tests
tree-sitter test

# Parse a file
tree-sitter parse file.fs
```

### Rust

The crate exposes the grammar as a `LanguageFn` for use with the [`tree-sitter`](https://crates.io/crates/tree-sitter) crate:

```rust
let code = "1 2 + .";
let mut parser = tree_sitter::Parser::new();
parser
    .set_language(&tree_sitter_forth::LANGUAGE.into())
    .expect("Error loading Forth parser");
let tree = parser.parse(code, None).unwrap();
```

## Grammar Structure

The grammar categorizes Forth words into semantic groups:

- **Control Flow**: `IF/THEN/ELSE`, `BEGIN/UNTIL`, `DO/LOOP`, `CASE/OF`, etc.
- **Operators**: Stack manipulation (`DUP`, `SWAP`, `ROT`), arithmetic (`+`, `-`, `MOD`), logic (`AND`, `OR`)
- **I/O**: Input/output words (`.`, `EMIT`, `KEY`, `ACCEPT`)
- **Core**: Defining words, memory operations, compilation words

## License

MIT
