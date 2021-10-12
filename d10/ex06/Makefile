# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 13:26:27 by rkiwi             #+#    #+#              #
#    Updated: 2020/02/11 17:11:51 by rkiwi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = src/*.c

INCL = includes/

FILES_O = *.o

FILES_H = *.h

CC = gcc

CF = -Wall -Wextra -Werror

all: $(NAME) clean

$(NAME):
	@gcc -o $(NAME) $(CF) $(SRC) -I $(INCL)

clean:
	@/bin/rm -f $(FILES_O)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
