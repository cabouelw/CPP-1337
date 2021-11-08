/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:00:08 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/01 12:06:58 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
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
	~ClapTrap();
	ClapTrap(const char*);

	int			get_hit(int);
	int			energy(int);
	int			damage(int);
	std::string	get_name() const;

	void	attack(std::string const &);
	void	takeDamage(unsigned int);
	void	beRepaired(unsigned int);
};

#endif