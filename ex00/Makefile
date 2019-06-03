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

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror
SOURCES = megaphone.cpp
NAME = megaphone
all:
	$(COMPILER) $(FLAGS) $(SOURCES) -o $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean

re: fclean all