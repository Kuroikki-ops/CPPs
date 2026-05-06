# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/04 11:47:11 by diespino          #+#    #+#              #
#    Updated: 2026/05/04 11:47:13 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output NAME
NAME = megaphone

# Megaphone SRC
SRC		= megaphone.cpp
OBJS		= $(SRC:.cpp=.o)
DEPS		= $(SRC:.cpp=.d)

# Flags
CPP	 	= g++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 		=  rm -f

# Colors ANSI 	  \033[<color;estilo_letra>\033[0m
END 		= \033[0m
RED		= \033[31;1m
GREEN		= \033[32;1m
YELLOW		= \033[33;1m
MAGENTA		= \033[35;1m
CIAN		= \033[36m

all: $(NAME)

# Compilaction
$(NAME): $(OBJS)
	$(CPP) $(CPPLAGS) $(OBJS) -o $(NAME)

# Pre-compilation (*.o && *.d)
%.o: %.cpp Makefile
	$(CPP) $(CPPFLAGS) -MMD -MP -c $< -o $@

# Include dependecies (.d)
-include $(DEPS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
