# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 20:58:58 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/19 22:33:06 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC =	main.cpp\
		A.cpp\
		B.cpp\
		C.cpp\
		Base.cpp

INC =	A.hpp\
		B.hpp\
		C.hpp\
		Base.hpp

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