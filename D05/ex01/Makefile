# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 15:49:51 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/17 20:59:38 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Exception
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\


INC =	Bureaucrat.hpp\
		Form.hpp\

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