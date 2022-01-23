# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/23 19:06:36 by ablondel          #+#    #+#              #
#    Updated: 2022/01/23 19:15:40 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS =	-Wall -Wextra -Werror -std=c++98
CXX =		clang++ $(CFLAGS)

SRC = 	main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp \

OBJ =	$(SRC:.cpp=.o)
 
NAME = Identify

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
