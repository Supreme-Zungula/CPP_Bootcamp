# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzungula <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 15:06:11 by yzungula          #+#    #+#              #
#    Updated: 2019/06/03 15:06:24 by yzungula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = src/*
HEADERS = includes/*
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -I $(HEADERS)
NAME = phonebook

all:
	$(COMPILER) $(FLAGS)  $(SOURCES) -o $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean
	rm -f phonebook.class.hpp.gch
	rm -f person.class.hpp.gch
	rm -f date.class.hpp.gch

re: fclean all