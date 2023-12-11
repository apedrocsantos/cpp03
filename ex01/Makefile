CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

NAME = ex01

FILES =	ClapTrap\
		ScavTrap\

SRCS =	$(FILES:=.cpp) main.cpp

OBJS = $(FILES:=.o) main.o

HEADERS =	$(FILES:=.hpp) $(FILES:=.h)

all: $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) -g

$(OBJS) : $(SRCS)


clean:
	rm -rf $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re