/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/13 15:00:57 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	clap("F-Z");
	
	FragTrap	frag("Abdo");
	FragTrap	fragcpy(frag);
	FragTrap	frag1;
	


	frag1 = frag;
	frag1.attack("petit");
	frag1.takeDamage(10);
	frag1.beRepaired(10);
	frag1.highFivesGuys();
	
	frag.attack("petit");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag1.highFivesGuys();

	fragcpy.attack("petit");
	fragcpy.takeDamage(10);
	fragcpy.beRepaired(10);
	frag1.highFivesGuys();

	clap.attack("petit");
	clap.takeDamage(10);
	clap.beRepaired(10);
}