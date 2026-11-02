# Newton
> A programming language for mathematicians, written in C++.

---

### What is the Newton language
 
Newton is a programming language under development, designed for mathematicians and written in C++. The goal is to offer a syntax close to mathematical notation, with better performance than math libraries in Python.
 
**Status:** very early version. A basic lexer exists; the parser and the interpreter are under development.
 
### Usage documentation
 
> The language is just getting started, so this section will grow along with the project.
 
**Current syntax**
 
Variable declaration:
 
```
var variavel := 10
```
 
**Running**
 
```bash
./bin/newton -f file
```
 
> For now the `-f` / `--file` option exists on the command line but does not read the file yet. The executable processes a hardcoded snippet of code and prints the tokens recognized by the lexer.
 
**Tokens recognized by the lexer**
 
The lexer prints one line per token, in the format `[TYPE], lexeme`.
 
| Token               | Lexeme            | Description                        |
|---------------------|-------------------|------------------------------------|
| `[TOKEN_VAR]`       | `var`             | Declaration keyword                |
| `[TOKEN_VAR_NAME]`  | variable name     | Identifier after `var`             |
| `[TOKEN_ATTRIBUTION]` | `:=`            | Assignment operator                |
 
Coming soon: numeric literals, math operators, functions, vectors and matrices.
 
### Project tree
 
<!-- Confirm with `tree -I 'build|bin'` and update if there are more files. -->
 
```
newton/
├── include/
│   ├── cli11.hpp          # CLI11 library (command line)
│   └── lexer/
│       └── lexer.h        # lexer declaration
├── src/
│   ├── entrypoint.cpp     # entry point (main) and CLI options
│   └── lexer/
│       └── lexer.cpp      # lexer: turns source code into tokens
├── .gitignore
├── makefile
└── README.md
```
 
### Building
 
**Requirements**
 
- `g++` with C++20 support
- `make`
**Steps**
 
```bash
git clone https://github.com/Vieira-Labs/newton.git
cd newton
mkdir -p bin
make
./bin/newton
```
 
`make` compiles every file in `src/` into `build/` and produces the executable at `bin/newton`. To remove generated files:
 
```bash
make clean
```
 
### Credits
 
- [Davyson] ([@davysonzzs](https://github.com/davysonzzs)) - [Readme]
- [Victorrvs28] ([Victorrvs28](https://github.com/Victorrvs28)) - [lexer]
- Organization: [Vieira-Labs](https://github.com/Vieira-Labs)
- [CLI11](https://github.com/CLIUtils/CLI11), the command line library used in the project.