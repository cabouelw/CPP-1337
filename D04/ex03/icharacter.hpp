/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   icharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:27:01 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 14:07:34 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
#include <string>
#include <iostream>
#include "Amateria.hpp"

class AMateria;
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria*) = 0;
		virtual void unequip(int) = 0;
		virtual void use(int, ICharacter&) = 0;
};

#endif