CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

NAME = ex00

FILES =	ClapTrap\

SRCS =	$(FILES:=.cpp) main.cpp

HEADERS =	$(FILES:=.hpp) $(FILES:=.h)

all: $(NAME)

$(NAME) : $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME) -g

clean:

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re