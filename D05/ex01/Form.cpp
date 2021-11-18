/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:06:15 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/17 21:38:15 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _issigned(false), _grade_sig(0), _grade_exc(0)
{
	throw GradeTooHighException();
}

Form::Form(const std::string name, int grade_sig, int grade_exc) : _name(name), _issigned(false), _grade_sig(grade_sig), _grade_exc(grade_exc)
{
	if (grade_sig < 1 || grade_exc < 1)
		throw GradeTooHighException();
	else if (grade_sig > 150 || grade_exc > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_issigned = cpy._issigned;
	return (*this);
}

Form::Form(const Form &cpy) : _name(cpy._name), _issigned(cpy._issigned), _grade_sig(cpy._grade_sig),  _grade_exc(cpy._grade_exc)
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception greade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception greade is too low");
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getsign() const
{
	return (this->_issigned);
}

int	Form::getgrade_sig() const
{
	return (this->_grade_sig);
}

int	Form::getgrade_exc() const
{
	return (this->_grade_sig);
}

void	Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() <= this->getgrade_sig())
		this->_issigned = true;
	else
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, Form const &bure)
{
	if (bure.getsign())
		out << bure.getName() << ", Form grade execute " << bure.getgrade_exc() << " grade sign " << bure.getgrade_sig() << " and it's signed" <<  std::endl;
	else
		out << bure.getName() << ", Form grade execute " << bure.getgrade_exc() << " grade sign " << bure.getgrade_sig() << " and it's not signed yet" <<  std::endl;
	return (out);
}

