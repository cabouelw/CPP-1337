/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:15:56 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:50:47 by cabouelw         ###   ########.fr       */
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
	delete this->_brain;
	this->_type = cpy._type;
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	return (*this);
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog Copy constructor called\n";
	this->_brain = nullptr;
	*this = cpy;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << "Woofffff\n";
}