# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: coxer <coxer@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/31 15:14:30 by coxer         #+#    #+#                  #
#    Updated: 2024/03/13 16:27:11 by rares         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN = \033[32;01m
RED = \033[31;01m
BLUE = \033[34;01m
RESET = \033[0m
YELLOW = \033[33;01m

NAME = hangman

SRC = \
main.cpp \
Drawing.cpp \
Game.cpp \

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Program built successfully! $(RESET)\n"

%.o: %.c
	@$(CC) $(FLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re