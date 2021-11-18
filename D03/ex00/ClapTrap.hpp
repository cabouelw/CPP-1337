/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:08 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/13 14:55:12 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap
{
private:
	std::string	_name;
	int	_hitpoints;
	int	_energy_point;
	int	_attack_damage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	ClapTrap(std::string);
	~ClapTrap();

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
};

#endif