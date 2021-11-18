/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:21:01 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 17:05:45 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <fstream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	private:
		std::string _target;
	public:
		Intern();
		Intern& operator=(const Intern&);
		Intern(const Intern&);
		~Intern();
		Form	*makeForm(std::string, std::string);
};
typedef Form * (*FormPoint)(std::string);

#endif