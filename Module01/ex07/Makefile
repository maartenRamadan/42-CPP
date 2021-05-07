NAME = replace

SRCS = replace.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

all: $(NAME)

$(NAME):
	clang++ $(SRCS) $(FLAGS) -o $(NAME)

clean:
	rm -f *.replaced

fclean: clean
	rm -f $(NAME)

re: fclean all
