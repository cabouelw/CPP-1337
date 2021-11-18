/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:59:56 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 12:52:13 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitpoints(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	*this = cpy; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cpy)
{
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	this->_hitpoints = cpy._hitpoints;
	this->_energy_point = cpy._energy_point;
	this->_attack_damage = cpy._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " amount of Damage!!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " amount of Repair!!\n";
}
