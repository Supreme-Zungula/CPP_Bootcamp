SOURCES = src/*.cpp
HEADERS = includes/*.hpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror  #-I $(HEADERS)
NAME = ex00

all : $(NAME)

$(NAME) : $(SOURCES)
	$(COMPILER) $(FLAGS) $(SOURCES)  -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean al