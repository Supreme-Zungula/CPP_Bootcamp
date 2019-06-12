SOURCES = src/Bureaucrat.cpp src/Form.cpp src/main.cpp
HEADERS = includes/Bureaucrat.hpp includes/Form.hpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-I $(HEADERS)
NAME = form

all : $(NAME)

$(NAME) : $(SOURCES)
	$(COMPILER) $(FLAGS) $(SOURCES)  -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all