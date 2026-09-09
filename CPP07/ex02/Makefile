
NAME = array

MAIN = main.cpp
SRCS =

OBJS = $(MAIN:.cpp=.o) $(SRCS:.cpp=.o)
DEPS = $(MAIN:.cpp=.d) $(SRCS:.cpp=.d)

CPP = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CPP) $(FLAGS) -I. -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
