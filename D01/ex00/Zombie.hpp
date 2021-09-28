/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:54:07 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/26 14:58:21 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();
	Zombie(const std::string& nam);
	void	announce(void);
private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif