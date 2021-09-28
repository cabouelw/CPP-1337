/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:46:31 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/26 14:53:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;

	i = 0;
	if (N <= 0 || name.empty())
		return (nullptr);
	Zombie *newzombie = new Zombie[N];
	while (i < N)
	{
		newzombie[i].setname(name);
		i++;
	}
	return (newzombie);
}