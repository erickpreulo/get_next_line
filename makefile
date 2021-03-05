# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes <egomes@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 10:48:39 by egomes            #+#    #+#              #
#    Updated: 2021/03/04 23:13:29 by egomes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = nextline.a

CC	= gcc

CGFLAGS = -Wall -Wextra -Werror

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo ".a criado"

clean: 
	@rm -f $(OBJ)
	@echo "Objetos removidos!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removido!"

re: fclean all
