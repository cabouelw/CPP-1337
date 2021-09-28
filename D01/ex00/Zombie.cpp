/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:53:52 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/25 18:55:34 by cabouelw         ###   ########.fr       */
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
