# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 15:03:20 by zyunusov          #+#    #+#              #
#    Updated: 2023/04/13 16:19:23 by zyunusov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ex01

CPP			:= c++

CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC			:= main.cpp Serializer.cpp

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

