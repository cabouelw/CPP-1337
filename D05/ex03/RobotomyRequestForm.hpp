/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:30 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 14:22:28 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREAUESTFORM_HPP
# define ROBOTOMYREAUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"

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

#endif