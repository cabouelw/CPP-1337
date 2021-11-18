/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:39:28 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:46:13 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound\n";
}
