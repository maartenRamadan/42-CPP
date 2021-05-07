# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mramadan <mramadan@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/25 16:39:10 by mramadan      #+#    #+#                  #
#    Updated: 2021/01/06 10:12:25 by Marty         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = iter.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all:
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
