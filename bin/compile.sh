#!/usr/bin/sh
echo "Compiling..." &&
clear &&
cc -Wall -Wextra -Werror -DTEST -o output */*.c &&
./output &&
rm output &&
norminette
