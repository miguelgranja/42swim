#!/usr/bin/sh
echo "Compiling..." &&
clear &&
cc -Wall -Wextra -Werror -DTEST -o output */*.c &&
echo "Output:"
./output &&
rm output &&
norminette
