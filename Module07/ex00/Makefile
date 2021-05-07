# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mramadan <mramadan@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/25 16:39:10 by mramadan      #+#    #+#                  #
#    Updated: 2021/01/06 09:33:14 by Marty         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC = whatever.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all:
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
