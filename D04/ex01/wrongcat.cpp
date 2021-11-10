/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:31:47 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 10:43:31 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << "WrongCat Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "WrongCat Copy constructor called\n";
	*this = cpy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meowwwww\n";
}
