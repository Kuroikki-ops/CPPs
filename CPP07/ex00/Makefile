# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/07 16:57:06 by diespino          #+#    #+#              #
#    Updated: 2026/09/07 18:19:34 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= template

MAIN		= main.cpp
SRCS		=

OBJS		= $(MAIN:.cpp=.o) $(SRCS:.cpp=.o)
DEPS		= $(MAIN:.cpp=.d) $(SRCS:.cpp=.d)

CPP		= g++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CPP) $(CPPFLAGS) -I. -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
