/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:16:34 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:50:39 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
	_brain = new Brain();
}

Cat& Cat::operator=(const Cat &cpy)
{
	std::cout << "Cat Assignation constructor called\n";
	if (this == &cpy)
		return (*this);
	delete this->_brain;
	this->_type = cpy._type;
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	return (*this);
}

void	Cat::printideas()
{
	_brain->printidea();
}

void	Cat::setideas(const std::string& idea)
{
	_brain->setidea(idea);
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat Copy constructor called\n";
	*this = cpy;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meowwwww\n";
}