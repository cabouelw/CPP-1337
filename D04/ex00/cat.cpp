/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:16:34 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 12:12:15 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
}

Cat& Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat Copy constructor called\n";
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meowwwww\n";
}