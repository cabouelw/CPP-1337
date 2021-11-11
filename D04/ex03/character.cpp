/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:39:13 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 19:09:02 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name)
{
}

Character::Character(std::string name) : _name(name), idx(0)
{
}

Character& Character::operator=(const Character &cpy)
{
	int i;

	i = 0;
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	while (i < 4)
	{
		this->inventory[i] = cpy.inventory[i];
		i++;
	}
	this->idx = cpy.idx;
	return (*this);
}

Character::Character(const Character &cpy)
{
	*this = cpy;
}


Character::~Character()
{
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* mat)
{
	if (idx == 4)
		return;
	this->inventory[this->idx] = mat;
	idx++;
}

void Character::unequip(int idx)
{
	
}