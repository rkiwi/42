# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/05 11:32:30 by rkiwi             #+#    #+#              #
#    Updated: 2020/02/05 12:16:15 by rkiwi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c  ft_strcmp.c  ft_strlen.c  ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o  ft_strcmp.o ft_strlen.o  ft_swap.o
