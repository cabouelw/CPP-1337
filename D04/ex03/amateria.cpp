/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:30:23 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 16:33:33 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "amateria.hpp"

AMateria::AMateria()
{
	this->_type = "???";
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

