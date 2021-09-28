/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:45:37 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/26 14:59:11 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{ 
	Zombie *newzombie;
	int i = 0;
	int	nb = 10;

	newzombie = zombieHorde(nb, "flan");
	while (i < nb && newzombie)
	{
		newzombie[i].announce();
		i++;
	}
	if (newzombie)
		delete[] newzombie;
}