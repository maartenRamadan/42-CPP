# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mramadan <mramadan@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/25 16:39:10 by mramadan      #+#    #+#                  #
#    Updated: 2021/02/01 11:24:10 by Marty         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp ScaleConv.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
