/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:39:13 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 16:52:58 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.hpp"

Character::Character(std::string name) : _name(name), idx(0)
{
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