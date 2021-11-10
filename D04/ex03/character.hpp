/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:27:45 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 16:48:23 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <string>
#include <iostream>
#include "icharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string	_name;
		int			idx;
	public:
		Character(std::string);
		~Character();
		std::string const &getName() const;
		void equip(AMateria*);
		void unequip(int);
		void use(int, ICharacter&);
};

#endif