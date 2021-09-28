/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:55:01 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 12:26:35 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_H
#define	HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	Weapon*	_weapon;
	std::string	_name;
public:
	HumanB();
	~HumanB();
	HumanB(std::string	name);
	void	setWeapon(Weapon&	weapon);
	void	attack();
};

#endif
