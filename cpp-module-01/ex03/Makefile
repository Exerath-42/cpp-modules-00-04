SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

INCLUDES = Weapon.hpp HumanA.hpp HumanB.hpp

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = unnecessary_violence

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
