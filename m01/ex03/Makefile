NAME = main

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

COMP = clang++ -std=c++98

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o: %.cpp $(HEADER) Makefile
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all
	@./$(NAME)

.PHONY: all clean fclean re run