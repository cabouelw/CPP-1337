# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 17:55:14 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/16 14:13:46 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC =	main.cpp\
		Amateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp

INC =	Amateria.hpp\
		Character.hpp\
		Cure.hpp\
		Ice.hpp\
		ICharacter.hpp\
		IMateriaSource.hpp\
		MateriaSource.hpp

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
