/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:54:01 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 12:17:07 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
Weapon::Weapon(const std::string& str)
{
    type = str;
}
const std::string&	Weapon::getType()
{
    return (type);
}

void    Weapon::setType(const std::string str)
{
    type = str;
}