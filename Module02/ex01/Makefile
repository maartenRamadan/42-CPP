# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mramadan <mramadan@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/25 16:39:10 by mramadan      #+#    #+#                  #
#    Updated: 2021/01/21 11:13:39 by Marty         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=		fixed
CC		=		clang++
FLAGS	=		-Wall -Werror -Wextra -std=c++98 -pedantic
OBJS	=		main.o Fixed.o
INC		=		Fixed.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
