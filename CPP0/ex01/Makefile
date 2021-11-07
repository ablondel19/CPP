# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 10:56:39 by ablondel          #+#    #+#              #
#    Updated: 2021/11/06 18:11:02 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		clang++

CFLAGS =	-Wall -Wextra -Werror

SRC = 		phonebook.cpp

OBJ =		$(SRC:.cpp=.o)
 
NAME =		Phonebook

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
