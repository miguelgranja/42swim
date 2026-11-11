# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 16:40:14 by alaziz            #+#    #+#              #
#    Updated: 2025/04/09 16:40:51 by alaziz           ###   LAUSANNE.ch        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# This script compiles the source files in object files
# and groups them in a libft.a static library
# This library can be used in other projects in C
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
