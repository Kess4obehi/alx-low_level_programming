#!/bin/bash
find ~ \( -name "0-memset.c" -o \
          -name "0-isupper.c" -o \
          -name "0-strcat.c" -o \
          -name "1-isdigit.c" -o \
          -name "1-memcpy.c" -o \
          -name "1-strncat.c" -o \
          -name "100-atoi.c" -o \
          -name "2-strchr.c" -o \
          -name "2-strlen.c" -o \
          -name "2-strncpy.c" -o \
          -name "3-islower.c" -o \
          -name "3-puts.c" -o \
          -name "3-strcmp.c" -o \
          -name "3-strspn.c" -o \
          -name "4-isalpha.c" -o \
          -name "4-strpbrk.c" -o \
          -name "5-strstr.c" -o \
          -name "6-abs.c" -o \
          -name "9-strcpy.c" \) -exec cp {} . \;

