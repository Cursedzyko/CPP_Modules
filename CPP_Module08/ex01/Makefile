# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 15:03:20 by zyunusov          #+#    #+#              #
#    Updated: 2023/05/02 10:28:19 by zyunusov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= ex01

CPP			:= c++

CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC			:= main.cpp Span.cpp

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

