# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 17:55:14 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/16 13:56:55 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Brain
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
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
