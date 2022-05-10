/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:30 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 19:11:56 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();
		virtual void	Action() const;
};
std::ostream	&operator<<(std::ostream &, RobotomyRequestForm const &);

#endif