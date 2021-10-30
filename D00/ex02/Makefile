# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 13:19:24 by cabouelw          #+#    #+#              #
#    Updated: 2021/10/30 17:18:25 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bank
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC =	Account.cpp\
		tests.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
