# CS50 (part 1)

## Intro

[Scratch](https://scratch.mit.edu/)

## Install Make

### Linux

> sudo apt install make

### Windows

> choco install make

## Create EXE

> make hello

## Run EXE

> ./hello

## Install Library

### Linux

To install the cs50 library on linux or mac check out the [docs](https://cs50.readthedocs.io/libraries/cs50/c/).

- Add repository to sources

  > curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash

- Install the library

  > sudo apt install libcs50

- Add variables to `.bashrc` or `.zshrc`

  ```bash
  export CC="clang"
  export CFLAGS="-fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow"
  export LDLIBS="-lcrypt -lcs50 -lm"
  ```

  > source ~/.bashrc

  or

  > source ~/.zshrc

- Install clang (the compiler)

  > sudo apt install clang

- Use

  > make hello

  or

  > clang -o hello hello.c -lcs50

### Windows

For Windows however we will need to:

- Install [MinGW](https://www.mingw-w64.org/downloads/#mingw-builds) and extract the mingw64 folder
- Add a path to the bin folder in `mingw` to our environment variables
- Download [libcs50](https://github.com/cs50/libcs50/releases)
- Add the cs50.c & cs50.h files to our project folder
- Include the cs50.h with quotes instead of angle brackets
- compile using gcc, including the cs50.c file
- Use

  > gcc -o hello hello.c cs50.c

## Compilation

- Preprocessing
  Replacing the preprocessing directives with the prototypes in the header files.
- Compiling
  Compile the code to assembly
- Assemble
  Assemble the code to binary
- Linking
  Combining all different files (ex: name.c, cs50.c, and the files that make stdio)

## Debugging

- Add the C/C++ plugins to VLC
- Run the debugger using the play button, generating the `tasks.json`
- Edit the tasks.json to include links to the used libraries
- Run the debugger again

_Or just talk it through with a rubber duck._

## Types

- bool (1 byte)
- char (1 byte)
- int (4 bytes)
- float (4 bytes)
- long (8 bytes)
- double (8 bytes)
- string (? bytes)
- ...

## Complexity

- O(n²)
- O(n log n)
- O(n)
- O(log n)
- O(1)

_The best case scenario is similarly described by Ω. If O and Ω are the same, we can use θ._

## Valgrind Memory Check

- Install

  > sudo apt install valgrind

- Use

  > valgrind ./programname
