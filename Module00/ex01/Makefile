# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mramadan <mramadan@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/25 16:39:10 by mramadan      #+#    #+#                  #
#    Updated: 2021/01/19 12:53:38 by Marty         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp phonebook.cpp

INCL = Phonebook.class.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic


all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
