/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:30:23 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 14:07:34 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria& AMateria::operator=(const AMateria &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "??? " << target.getName() << "\n";
}
