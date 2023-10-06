SRCS = Phonebook.cpp Contact.cpp main.cpp

INCLUDES = Phonebook.hpp Contact.hpp

CXXFLAGS = -Wall -Werror -Wextra 

NAME = phonebook

STD = -std=c++98

GXX = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(GXX) $(CXXFLAGS) $(STD) -o $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re