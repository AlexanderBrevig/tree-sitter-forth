{
  description = "Forth grammar for tree-sitter";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs =
    { self, nixpkgs }:
    let
      systems = [
        "x86_64-linux"
        "aarch64-linux"
        "x86_64-darwin"
        "aarch64-darwin"
      ];
      forAllSystems = f: nixpkgs.lib.genAttrs systems (system: f nixpkgs.legacyPackages.${system});
    in
    {
      devShells = forAllSystems (pkgs: {
        default = pkgs.mkShell {
          packages = [
            pkgs.tree-sitter
            pkgs.nodejs
            pkgs.gcc
            pkgs.cargo
            pkgs.rustc
            pkgs.rust-analyzer
            pkgs.rustfmt
            pkgs.clippy
          ];

          shellHook = ''
            echo "tree-sitter-forth dev shell"
            echo "  tree-sitter generate --abi 15   # build the parser"
            echo "  tree-sitter test                # run grammar tests"
            echo "  cargo test                      # test the Rust binding"
          '';
        };
      });

      formatter = forAllSystems (pkgs: pkgs.nixfmt-rfc-style);
    };
}
