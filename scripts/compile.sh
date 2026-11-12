#!/usr/bin/sh
echo "Compiling..." &&
clear &&
cc -Wall -Wextra -Werror -DTEST -o output */*.c &&
printf "Output:" && ./output && echo &&
rm output &&
norminette
