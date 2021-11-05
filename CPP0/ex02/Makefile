# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 10:56:39 by ablondel          #+#    #+#              #
#    Updated: 2021/11/05 19:30:35 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = Accounts.cpp tests.cpp
 
NAME = globalBankstersUnited

$(NAME):		
	$(CC) $(CFLAGS) -IAccounts.hpp $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY: all clean fclean re
