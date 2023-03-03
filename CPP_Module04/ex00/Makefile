# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 15:03:20 by zyunusov          #+#    #+#              #
#    Updated: 2023/03/03 14:38:45 by zyunusov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ex00

CPP			:= c++

CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC			:= main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

OBJS		:= $(SRC:.cpp=.o)


all	: $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : clean all

.PHONY: clean fclean re

