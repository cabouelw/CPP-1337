/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:23 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 13:56:09 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()  : Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_target = cpy._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)  : Form("RobotomyRequestForm", 72, 45)
{
	*this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::Action() const
{
	int random;

	std::cout << "* Drilling noise * \n";
	random = rand() % 2;
	if (random)
		std::cout << _target << " has been robotomized successfully\n";
	else
		std::cout << _target << " failed getting robotomized\n";
		
}