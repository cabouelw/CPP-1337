/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:57:09 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 12:52:13 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	std::cout << "ScavTrap Default constructor called\n";
	_hitpoints = 100;
	_energy_point = 50;
	_attack_damage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	_hitpoints = 100;
	_energy_point = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
	// std::cout << "ScavTrap copy constructor called\n";
	*this = cpy; 
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	// std::cout << "ScavTrap Assignment operator called\n";
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	this->_hitpoints = cpy._hitpoints;
	this->_energy_point = cpy._energy_point;
	this->_attack_damage = cpy._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode\n";
}
