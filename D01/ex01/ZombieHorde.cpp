/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:46:31 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 13:50:12 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	std::string	temp;

	i = 0;
	if (N <= 0 || name.empty())
		return (nullptr);
	Zombie *newzombie = new Zombie[N];
	while (i < N)
	{
		temp = name;
		temp.append((const std::string)std::to_string(i));
		newzombie[i].setname(temp);
		i++;
	}
	return (newzombie);
}