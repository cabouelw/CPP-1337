/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:21:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 17:06:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{
}

Intern& Intern::operator=(const Intern &cpy)
{
	if (this == &cpy)
		return (*this);
	*this = cpy;
	return (*this);
}

Intern::Intern(const Intern &cpy) 
{
	*this = cpy;
}

Intern::~Intern()
{
}

Form *GetPresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *GetRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *GetShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	int	i = 0;
	Form *f;
	FormPoint form_point[] = {GetPresident, GetRobot, GetShrubbery};
	std::string Action[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	while (i < 3)
	{
		if (Action[i] == form)
		{
			f = form_point[i](target);
			std::cout << "Intern creates " << form << std::endl;
			return (f);
		}
		i++;
	}
	std::cout << form << " don't exist" << std::endl;
	return (NULL);
}
