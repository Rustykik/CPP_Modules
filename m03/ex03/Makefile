NAME = main

SRCS = ClapTrap ScavTrap FragTrap DiamondTrap

SRC = main.cpp ${addsuffix .cpp, ${SRCS}}

HEADER = ${addsuffix .hpp, ${SRCS}}

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

test: all
	./$(NAME)
	@make fclean

.PHONY: all clean fclean re run test