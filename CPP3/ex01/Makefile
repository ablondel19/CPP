# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 16:32:32 by ablondel          #+#    #+#              #
#    Updated: 2022/01/19 15:12:35 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS =	-Wall -Wextra -Werror
CXX =		clang++ $(CFLAGS)

SRC = 	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \

OBJ =	$(SRC:.cpp=.o)
 
NAME = ScavTrap

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re