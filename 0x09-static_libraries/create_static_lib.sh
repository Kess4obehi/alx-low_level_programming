#!bin/bash
gcc -c -wall -werror -wextra -pedantic -std=gnu89 *.c
ar -rcs liball.a *.o
