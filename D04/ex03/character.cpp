/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:39:13 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:58:58 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : idx(0)
{
	int i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
}


Character::Character(std::string name) : _name(name), idx(0)
{
	int i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
}

Character& Character::operator=(const Character &cpy)
{
	int i;

	i = 0;
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	this->idx = cpy.idx;
	while (i < 4)
		delete this->inventory[i++];
	i = 0;
	while (i < this->idx)
	{
		this->inventory[i] = cpy.inventory[i]->clone();
		i++;
	}
	return (*this);
}

Character::Character(const Character &cpy)
{
	int i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
	*this = cpy;
}

Character::~Character()
{
	int i;

	i = 0;
	while (i < this->idx)
	{
		delete this->inventory[i];
		this->inventory[i] = NULL;
		i++;
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* mat)
{
	if (this->idx == 4)
		return;
	this->inventory[this->idx] = mat;
	this->idx++;
}

void Character::unequip(int idx)
{
	int i = 0;

	if (idx >= 0 && idx < this->idx)
	{
		if (idx == (this->idx - 1))
			this->inventory[idx] = NULL;
		else if (idx < (this->idx - 1))
		{
			i = idx;
			while (i < (this->idx - 1))
			{
				this->inventory[i] = this->inventory[i + 1];
				i++;
			}
			this->inventory[i] = NULL;
		}
		this->idx--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < this->idx && idx >= 0)
		this->inventory[idx]->use(target);
	else
		std::cout << "index Not Found!!\n";
}
