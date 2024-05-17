#!/bin/bash
gcc -Wall -Wextra Werror -pedantic -c -fPIC *.o
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
