# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 14:10:19 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/21 12:08:59 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Templates
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC =	main.cpp\
		

INC =	whatever.hpp

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
