# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 11:14:33 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/21 12:08:55 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC =	main.cpp\

INC =	iter.hpp

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
