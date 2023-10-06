SRCS = megaphone.cpp

CXXFLAGS = -Wall -Werror -Wextra 

NAME = megaphone

STD = -std=c++98

GXX = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(GXX) $(CXXFLAGS)$(STD) -o $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re