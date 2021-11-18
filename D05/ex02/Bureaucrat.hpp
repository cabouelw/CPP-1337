/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:54:19 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 13:01:01 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		int			_grade;
	public:
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat& operator=(const Bureaucrat&);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
		void	increment();
		void	decrement();
		void	signForm(Form&);

		void executeForm(Form const & form);
};

std::ostream	&operator<<(std::ostream &, Bureaucrat const &);

#endif