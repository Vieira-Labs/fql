# FQL
> A programming language for file query, written in C++.

--- 

### What is the FQL language
 
FQL is a programming language under development, designed for file query and written in C++. The goal is to offer a eficient, fast and powerful query.  
 
**Status:** very early version. lexer and parser works, but the interpreter are not done yet.
 
### Usage documentation
 
> The language is just getting started, so this section will grow along with the project.
 
**Current syntax**
 > it does not contains a parser and interpreter yet, so the usage is not possible

 
**Running**
 
```bash
./bin/fql 
```

 
 
### Project tree
 
<!-- Confirm with `tree -I 'build|bin'` and update if there are more files. -->
 
```
.
├── bin - where fql executable will be placed
│
├── build - objects
│  
├── commits - number of commit, usable for showing version
├── include
│   ├── cli11.hpp - command parsing library
│   ├── lexer
│   │   └── lexer.h
│   └── parser
│       └── parser.h
├── internal - internal stuff, nothing interesting for non vieira labs members.
├── makefile
├── README.md
└── src
    ├── entrypoint.cpp - entry point. reads the commands and calls the parse function.
    ├── lexer
    │   └── lexer.cpp
    └── parser
        └── parser.cpp


```
 
### Building
 
**Requirements**
 
- `g++` with C++20 support
- `make`
**Steps**
 
```bash
git clone https://github.com/Vieira-Labs/newton.git
cd fql
mkdir -p bin
make
./bin/fql
```
 
`make` compiles every file in `src/` into `build/` and produces the executable at `bin/fql`. To remove generated files:
 
```bash
make clean
```
 
### Credits
 
- [Davyson] ([@davysonzzs](https://github.com/davysonzzs)) - [Readme]
- [Victorrvs28] ([Victorrvs28](https://github.com/Victorrvs28)) - [lexer]
- Organization: [Vieira-Labs](https://github.com/Vieira-Labs)
- [CLI11](https://github.com/CLIUtils/CLI11), the command line library used in the project.
- [Nightmare.cfg] ([@Ryuzaki-Nightmare ](https://github.com/Ryuzaki-Nightmare)) - [makefile]
