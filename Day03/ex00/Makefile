SOURCES = src/*.cpp
HEADERS = includes/*.hpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror #-I $(HEADERS)
NAME = FragTrap

all : $(NAME)

$(NAME) : $(SOURCES)
	$(COMPILER) $(SOURCES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(HEADERS).gch

re: fclean all