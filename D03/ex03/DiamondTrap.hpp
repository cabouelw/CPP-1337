/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:33:04 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/09 13:09:01 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_diam_name;
	public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator=(const DiamondTrap&);
	~DiamondTrap();
	void	whoAmI();
	void	attack(std::string const &);
};

#endif