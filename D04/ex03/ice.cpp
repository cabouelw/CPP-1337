/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:47:56 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 16:37:59 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice& Ice::operator=(const Ice &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Ice::Ice(const Ice &cpy)
{
	*this = cpy;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

// void Ice::use(ICharacter& target)
// {
// 	std::cout << "* shoots an ice bolt at " << target << " *\n";
// }
