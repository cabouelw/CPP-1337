/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:48:28 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:59:37 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure& Cure::operator=(const Cure &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Cure::Cure(const Cure &cpy)
{
	*this = cpy;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}