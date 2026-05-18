# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/08 12:52:04 by diespino          #+#    #+#              #
#    Updated: 2026/05/18 14:04:55 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# OUTPUT NAME
NAME		= hi_brain

# SRC
MAIN		= main.cpp

OBJS		= $(MAIN:.cpp=.o)
DEPS		= $(MAIN:.cpp=.d)

# FLAGS
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
