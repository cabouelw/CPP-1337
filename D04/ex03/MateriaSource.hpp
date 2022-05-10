/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:25:55 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 14:07:34 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include <string>
#include <iostream>
#include "Amateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		int idx;
		AMateria *Store[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource&);
		MateriaSource& operator=(MateriaSource&);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &);
};

#endif