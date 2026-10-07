# C++ vuln demo

Labeled C/C++ fixtures for cognium-dev validation.

The engine type union includes `cpp`, but the CLI currently reports
`No supported files found` for these extensions (no `.c`/`.cpp` entry in the
language map, and no tree-sitter grammar in `packages/cli/wasm`). Pins stay
FN until that lands.

Layout matches the other `*-vuln-demo` repos: `flow/tier1` quartets and
`cwe699/` probes (including CWE-120, which is specific to this language).
