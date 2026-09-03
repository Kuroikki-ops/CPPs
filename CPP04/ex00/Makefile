# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/07 16:08:48 by diespino          #+#    #+#              #
#    Updated: 2026/08/31 16:04:17 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output NAME
NAME 		= polymorphism

# SRCs
MAIN		= main.cpp

ANIMAL		= Animal.cpp

DOG_PATH	= dog
DOG		= $(DOG_PATH)/Dog.cpp

CAT_PATH	= cat
CAT		= $(CAT_PATH)/Cat.cpp

WRG_PATH	= wrong
WRONG		= $(WRG_PATH)/WrongAnimal.cpp\
		  $(WRG_PATH)/WrongCat.cpp

SRC		= $(ANIMAL) $(DOG) $(CAT) $(WRONG)

OBJS		= $(MAIN:.cpp=.o) $(SRC:.cpp=.o)
DEPS		= $(MAIN:.cpp=.d) $(SRC:.cpp=.d)

# INCs
INC		= $(DOG_PATH)/ -I $(CAT_PATH)/ -I $(WRG_PATH)/

# FLAGs
CPP	 	= g++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 		=  rm -f

all: $(NAME)

# Compilation
$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

# Pre-compilation (*.o && *.d)
%.o: %.cpp Makefile
	$(CPP) $(CPPFLAGS) -I $(INC) -MMD -MP -c $< -o $@

# Include dependecies (.d)
-include $(DEPS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
