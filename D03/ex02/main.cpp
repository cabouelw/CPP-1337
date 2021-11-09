/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/09 12:12:54 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	trap("liFan");

	ScavTrap	scav2(trap);

	ClapTrap	clap("F-Z");

	ScavTrap	scav;


	scav = trap;
	scav.attack("petit");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();

	trap.attack("petit");
	trap.takeDamage(10);
	trap.beRepaired(10);
	trap.guardGate();

	scav2.attack("petit");
	scav2.takeDamage(10);
	scav2.beRepaired(10);
	scav2.guardGate();

	clap.attack("petit");
	clap.takeDamage(10);
	clap.beRepaired(10);
}