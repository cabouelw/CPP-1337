/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:45:59 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/26 13:45:40 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destructed\n";
}

Zombie::Zombie(const std::string &nam) : _name(nam)
{
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setname(std::string name)
{
	_name = name;
}