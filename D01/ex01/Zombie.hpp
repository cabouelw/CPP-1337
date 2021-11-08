/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:46:09 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 13:41:37 by cabouelw         ###   ########.fr       */
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
	Zombie(const std::string&);
	void	announce(void);
	void	setname(std::string name);
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif