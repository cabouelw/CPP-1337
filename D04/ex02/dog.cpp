/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:15:56 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:53:01 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called\n";
	_brain = new Brain();
}

Dog& Dog::operator=(const Dog &cpy)
{
	std::cout << "Dog Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog Copy constructor called\n";
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Woofffff\n";
}