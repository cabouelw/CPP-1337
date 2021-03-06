/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:07:07 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:45:01 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called\n";
	this->_type = "???";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal& Animal::operator=(const Animal &cpy)
{
	std::cout << "Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Copy constructor called\n";
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

std::string Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animals Sound\n";
}