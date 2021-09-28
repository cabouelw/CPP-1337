/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:54:21 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 12:24:39 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon& weapon) :_weapon(weapon)
{
    _name = name;
    // _weapon = weapon;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his ";
    std::cout << _weapon.getType() << std::endl;
}
