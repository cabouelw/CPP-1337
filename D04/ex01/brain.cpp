/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:52:57 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 11:36:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called\n";
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = "BlaBla";
		i++;
	}
}

void	Brain::printidea()
{
	std::cout << _ideas[0] << std::endl;
}

Brain& Brain::operator=(const Brain &cpy)
{
	std::cout << "Brain Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = cpy._ideas[i];
		i++;
	}
	return (*this);
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Copy constructor called\n";
	*this = cpy;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called\n";
}
