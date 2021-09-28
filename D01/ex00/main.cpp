/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:26:58 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/25 18:45:53 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newzombie;
	newzombie = newZombie("Abdo");
	newzombie->announce();
	delete newzombie;


    Zombie zombie("mohsine");
    zombie.announce();

    randomChump("hello");
}
