/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/13 20:10:01 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap;
	ClapTrap	trap("ayoub");
	ClapTrap	trapcpy(trap);

	clap = ClapTrap("ABDO");
	trap.attack("ABDO");
	clap.takeDamage(10);
	clap.attack("ayoub");
	trap.takeDamage(10);
	clap.beRepaired(10);
	trap.beRepaired(10);
	trapcpy.beRepaired(10);
}