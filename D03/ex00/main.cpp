/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/01 12:00:11 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap;
	ClapTrap	trap("liFan");

	trap.attack("ABDO");
	trap.takeDamage(10);
	trap.attack("ABDO");
	trap.takeDamage(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
}