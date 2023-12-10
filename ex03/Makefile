CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

NAME = ex03

SRCS =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\

all: $(NAME)

$(NAME) : $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME) -g

depend: .depend

.depend: $(SRCS)
	$(CXX) $(CXXFLAGS) -MM main.cpp -MF "$@"

-include .depend

clean:
	rm -f $(DEPS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re depend