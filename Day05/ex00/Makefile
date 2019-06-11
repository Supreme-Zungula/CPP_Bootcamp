SOURCES = 	src/Bureaucrat.cpp \
			src/main.cpp

HEADERS = includes/Bureaucrat.hpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror #-I $(HEADERS)
NAME = bureaucrat

all : $(NAME)

$(NAME) : $(SOURCES)
	$(COMPILER) $(SOURCES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all