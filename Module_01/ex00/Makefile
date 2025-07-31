NAME = phonebook

CC = c++
CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98 -Iinc

INC_DIR = ./inc/
OBJ_DIR = obj/

SRC_FILES = main.cpp Zombie.cpp
OBJ_FILES = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)
	rm -r $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
