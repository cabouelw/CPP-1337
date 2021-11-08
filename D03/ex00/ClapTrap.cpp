/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:59:56 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/01 12:07:37 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called\n";
}

ClapTrap::ClapTrap(const char *name) : _name(name), _hitpoints(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "constructor called\n";
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