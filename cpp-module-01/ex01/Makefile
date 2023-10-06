SRCS = main.cpp Zombie.cpp zombieHorde.cpp

INCLUDES = Zombie.hpp

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombieHorde

CXX = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
