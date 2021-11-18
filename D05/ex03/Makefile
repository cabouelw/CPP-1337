# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 15:49:51 by cabouelw          #+#    #+#              #
#    Updated: 2021/11/18 16:45:49 by cabouelw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Exception
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC =	main.cpp\
		Form.cpp\
		Bureaucrat.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\


INC =	Bureaucrat.hpp\
		Form.hpp\
		ShrubberyCreationForm.hpp\
		RobotomyRequestForm.hpp\
		PresidentialPardonForm.hpp\
		Intern.hpp\

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