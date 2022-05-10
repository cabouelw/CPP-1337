/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:21:01 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 19:29:06 by cabouelw         ###   ########.fr       */
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
	public:
		class FormNotFoundException : public std::exception
		{
			const char* what() const throw();
		};
		Intern();
		Intern& operator=(const Intern&);
		Intern(const Intern&);
		~Intern();
		Form	*makeForm(std::string, std::string);
};
typedef Form * (*FormPoint)(std::string);

#endif