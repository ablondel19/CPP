# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 21:09:44 by ablondel          #+#    #+#              #
#    Updated: 2021/11/05 19:18:20 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
 
NAME = megaphone

$(NAME):		
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(NAME)
	
fclean:		clean

re:			fclean all

.PHONY: all clean fclean re
