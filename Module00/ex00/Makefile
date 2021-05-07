# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mramadan <mramadan@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/25 16:39:10 by mramadan      #+#    #+#                  #
#    Updated: 2021/01/18 16:34:19 by Marty         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)
$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
