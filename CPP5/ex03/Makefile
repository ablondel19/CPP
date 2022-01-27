# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 16:38:12 by ablondel          #+#    #+#              #
#    Updated: 2022/01/27 17:49:24 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS =	-Wall -Wextra -Werror -std=c++98
CXX =		clang++ $(CFLAGS)

SRC = 	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp \

OBJ =	$(SRC:.cpp=.o)
 
NAME = Form

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
