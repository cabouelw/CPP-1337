/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:26:58 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 11:03:32 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newzombie;
	newzombie = newZombie("Abdo");
	newzombie->announce();
	delete newzombie;

    Zombie zombie("salah");
    zombie.announce();

    randomChump("hello");
}
