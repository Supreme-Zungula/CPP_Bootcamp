
    
SOURCES = Maths.cpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-I $(HEADERS)
NAME = templates

all : $(NAME)

$(NAME) : $(SOURCES)
	$(COMPILER) $(SOURCES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all