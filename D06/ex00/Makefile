# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 11:32:21 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/20 17:37:43 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = clang++
CFLAGS = -Wall -Wextra -Werror -ggdb
SRC =	main.cpp\
		Cast.cpp\


INC = Cast.hpp

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