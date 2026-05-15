# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/04 11:47:11 by diespino          #+#    #+#              #
#    Updated: 2026/05/06 15:28:46 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output NAME
NAME = phonebook

# SRCs
MAIN		= main.cpp

#INC		= PhoneBook.hpp\
#		  Contact.hpp

SRC		= PhoneBook.cpp\
		  Contact.cpp

OBJS		= $(MAIN:.cpp=.o) $(SRC:.cpp=.o)
DEPS		= $(MAIN:.cpp=.d) $(SRC:.cpp=.d)

# Flags
CPP	 	= g++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 		=  rm -f

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
