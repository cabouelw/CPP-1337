/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:45:15 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:45:16 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called\n";
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
}

void	Dog::makeSound() const
{
	std::cout << "Woofffff\n";
}