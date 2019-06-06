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

SOURCES = ex01.cpp
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror #-I $(HEADERS)
NAME = ex01

all : $(NAME)

$(NAME) : $(SOURCES)
	$(COMPILER) $(SOURCES) $(FLAGS) -o $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean
	rm -f a.out

re: fclean all