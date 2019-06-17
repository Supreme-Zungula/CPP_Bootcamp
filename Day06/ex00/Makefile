NAME = convert

SRC =  main.cpp

OBJ = main.o

all:
	clang++ -Wall -Wextra -Werror -c $(SRC)
	clang++ -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re