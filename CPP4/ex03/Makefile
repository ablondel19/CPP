# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 23:40:12 by ablondel          #+#    #+#              #
#    Updated: 2022/01/27 13:24:28 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS =	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address
CXX =		clang++ $(CFLAGS)

SRC = 	main.cpp \
		AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		MateriaSource.cpp \

OBJ =	$(SRC:.cpp=.o)
 
NAME = Materia

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
