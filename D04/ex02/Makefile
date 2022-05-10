# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 17:55:14 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/16 13:55:05 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC =	main.cpp\
		Animal.cpp\
		Cat.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\
		Dog.cpp\
		Brain.cpp\

INC =	Animal.hpp\
		Cat.hpp\
		WrongCat.hpp\
		WrongAnimal.hpp\
		Dog.hpp\
		Brain.hpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
