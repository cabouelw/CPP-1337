/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:54:39 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 12:25:15 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_H
#define	HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	Weapon&  _weapon;
	std::string _name;
public:
	~HumanA();
	HumanA(std::string name, Weapon& weapon);
	void	attack();
};

#endif