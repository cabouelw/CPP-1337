/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:16:22 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/09 12:31:10 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	std::cout << "FragTrap Default constructor called\n";
	_hitpoints = 100;
	_energy_point = 100;
	_attack_damage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
	_hitpoints = 100;
	_energy_point = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& cpy)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = cpy; 
}

FragTrap& FragTrap::operator=(const FragTrap& cpy)
{
	std::cout << "FragTrap Assignment operator called\n";
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	this->_hitpoints = cpy._hitpoints;
	this->_energy_point = cpy._energy_point;
	this->_attack_damage = cpy._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request\n";
}
