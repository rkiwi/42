# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/13 15:21:09 by rkiwi             #+#    #+#              #
#    Updated: 2020/02/13 15:21:10 by rkiwi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file

SRC = srcs/*.c

INCL = includes/

FILES_O = *.o

CF = -Wall -Wextra -Werror

all: $(NAME) clean

$(NAME):
	@gcc -o $(NAME) $(CF) $(SRC) -I $(INCL)

clean:
	@/bin/rm -f $(FILES_O)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
