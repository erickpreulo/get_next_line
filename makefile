# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 10:48:39 by egomes            #+#    #+#              #
#    Updated: 2021/03/05 15:54:49 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = nextline.a

CC	= gcc

CFLAGS = -Wall -Wextra -Werror

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
		@echo ".a criado"
all:		$(NAME)

clean: 
	@rm -f $(OBJ) teste.o ./a.out
	@echo "Objetos removidos!"

test:	$(NAME)
		@$(CC) $(CFLAGS) teste.c $(NAME)
		@./a.out teste.txt

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removido!"

re: fclean all
