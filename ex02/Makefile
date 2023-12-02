CXX = c++
FLAGCXX = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
HEADER = ClapTrap.hpp ScavTrap.hpp
OBJ = $(SRC:.cpp=.o)
NAME= clapTrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGCXX) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CXX) $(FLAGCXX) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
