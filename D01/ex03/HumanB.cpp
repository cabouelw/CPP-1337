/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:54:51 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 12:28:24 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with his ";
	std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
