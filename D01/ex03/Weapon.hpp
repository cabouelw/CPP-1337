/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:54:08 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 12:16:44 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
#define	WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	std::string	type;
public:
	Weapon();
	~Weapon();
	Weapon(const std::string& str);
	const std::string&	getType();
	void	setType(const std::string str);
};


#endif