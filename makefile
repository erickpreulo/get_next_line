# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 10:48:39 by egomes            #+#    #+#              #
#    Updated: 2021/03/13 01:09:41 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = nextline.a

CC	= gcc

CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=100000

AR		= ar rc

RANLIB	= ranlib

HEADERS = get_next_line.h

SRC = get_next_line.c get_next_line_utils.c

.c.o:
			$(CC) $(CFLAGS) $(HEADERS) -c $< -o $(<:.c=.o)

OBJ = $(SRC:.c=.o)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRC)
		@$(AR) $(NAME) $(OBJ)
		@$(RANLIB) $(NAME)
all:		$(NAME)

clean: 
	@rm -f $(OBJ) teste.o ./a.out

test:	re
		@$(CC) $(CFLAGS) teste.c $(NAME) -fsanitize=address -g
		@./a.out teste.txt texte2.txt

fclean: clean
	@rm -f $(NAME)

re: fclean all
