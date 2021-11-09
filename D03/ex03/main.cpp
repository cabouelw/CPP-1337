/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/09 13:27:24 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap d_trap;
	std::cout << std::endl;
	DiamondTrap d_trap1("F-Z");
	std::cout << std::endl;
	DiamondTrap d_trap2(d_trap1);
	std::cout << std::endl;


	d_trap = d_trap2;
	std::cout << std::endl;

	d_trap.attack("flan");
	std::cout << std::endl;
	d_trap.guardGate();
	std::cout << std::endl;
	d_trap.whoAmI();
}