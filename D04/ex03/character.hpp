/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:27:45 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 19:10:24 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
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
		Character();
		Character(std::string const &);
		Character& operator=(const Character&);
		Character(const Character&);
		Character(std::string);
		~Character();
		std::string const &getName() const;
		void equip(AMateria*);
		void unequip(int);
		void use(int, ICharacter&);
};

#endif