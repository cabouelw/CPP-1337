/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:54:07 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 13:35:28 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		Zombie(const std::string&);
		void	announce(void);
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif