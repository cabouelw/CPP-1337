/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materiasource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:25:40 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 14:02:05 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : idx(0)
{
	int i;

	i = 0;
	while (i < 4)
		this->Store[i++] = NULL;
}

MateriaSource::~MateriaSource()
{
	int i;

	i = 0;
	while (i < 4)
	{
		delete this->Store[i];
		this->Store[i++] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource &cpy)
{
	int i = 0;
	if (this == &cpy)
		return (*this);
	this->idx = cpy.idx;
	while (i < 4)
		delete this->Store[i++];
	i = 0;
	while (i < this->idx)
	{
		this->Store[i] = cpy.Store[i]->clone();
		i++;
	}
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource &cpy)
{
	int i;

	i = 0;
	while (i < 4)
		this->Store[i++] = NULL;
	*this = cpy;
}

void MateriaSource::learnMateria(AMateria* src)
{
	if (idx == 4)
		return;
	this->Store[idx] = src;
	idx++;
}

AMateria* MateriaSource::createMateria(std::string const &src)
{
	int i = 0;

	while (i < this->idx)
	{
		if (this->Store[i]->getType() == src)
			return (this->Store[i]->clone());
		i++;
	}
	return (0);
}
