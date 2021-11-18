/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:06:27 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 14:06:43 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_issigned;
		const int			_grade_sig;
		const int			_grade_exc;
	public:
		Form();
		Form(std::string, int, int);
		Form& operator=(const Form&);
		Form(const Form&);
		~Form();
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			const char* what() const throw();
		};
		std::string		getName() const;
		int				getgrade_exc() const;
		int				getgrade_sig() const;
		bool			getsign() const;
		void			beSigned(Bureaucrat&);
		void			execute(Bureaucrat const &executor) const;
		virtual	void	Action() const = 0;
};
std::ostream	&operator<<(std::ostream &, Form const &);

#endif