# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 13:26:27 by rkiwi             #+#    #+#              #
#    Updated: 2020/02/10 14:01:52 by rkiwi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/

INCL = includes/

FILES_C = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

FILES_O = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

CC = gcc

CF = -Wall -Wextra -Werror -c -I

all: $(NAME) clean

$(NAME):
	gcc $(CF) $(INCL) $(FILES_C)
	ar rc $(NAME) $(FILES_O)

clean:
	/bin/rm -f $(FILES_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
