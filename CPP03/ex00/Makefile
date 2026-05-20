# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/07 16:08:48 by diespino          #+#    #+#              #
#    Updated: 2026/05/15 15:33:53 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output NAME
NAME 		= ClapTrap

# SRCs
MAIN		= main.cpp

SRC			= ClapTrap.cpp

OBJS		= $(MAIN:.cpp=.o) $(SRC:.cpp=.o)
DEPS		= $(MAIN:.cpp=.d) $(SRC:.cpp=.d)

# FLAGs
CPP	 		= g++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 			=  rm -f

all: $(NAME)

# Compilation
$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

# Pre-compilation (*.o && *.d)
%.o: %.cpp Makefile
	$(CPP) $(CPPFLAGS) -I. -MMD -MP -c $< -o $@

# Include dependecies (.d)
-include $(DEPS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
