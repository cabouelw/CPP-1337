/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:32:57 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/09 13:26:20 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name")
{
	std::cout << "DiamondTrap Default constructor called\n";
	
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _diam_name(name)
{
	std::cout << "DiamondTrap constructor called\n";
	_hitpoints = FragTrap::_hitpoints;
	_energy_point = ScavTrap::_energy_point;
	_attack_damage = FragTrap::_attack_damage;
	
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy)
{
	std::cout << "DiamondTrap copy constructor called\n";
	*this = cpy; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cpy)
{
	std::cout << "DiamondTrap Assignment operator called\n";
	if (this == &cpy)
		return (*this);
	this->_diam_name = cpy._diam_name;
	this->_name = cpy._name;
	this->_hitpoints = cpy._hitpoints;
	this->_energy_point = cpy._energy_point;
	this->_attack_damage = cpy._attack_damage;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor called\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My Name " << this->_diam_name << " from " << ClapTrap::_name << std::endl;
}