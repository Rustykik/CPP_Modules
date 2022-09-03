NAME = harlFilter

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

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
	./$(NAME) DEBUG
	./$(NAME) INFO
	./$(NAME) WARNING
	./$(NAME) ERROR
	./$(NAME) ""
	./$(NAME) fjdkf fafa
	./$(NAME)

	@make fclean

.PHONY: all clean fclean re run test