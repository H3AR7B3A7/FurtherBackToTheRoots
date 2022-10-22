# CS50: C

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

- Install clang

  > sudo apt install clang

- Use

  > make hello

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
