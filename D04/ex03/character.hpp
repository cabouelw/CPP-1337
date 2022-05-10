/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:27:45 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:59:23 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string	_name;
		int			idx;

	public:
		Character();
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