/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:54:33 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 19:04:23 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(0)
{
	throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	this->_grade = cpy._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	*this = cpy;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception grade is too low");
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::increment()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bure)
{
	out << bure.getName() << ", bureaucrat grade " << bure.getGrade() << std::endl;
	return (out);
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getsign())
		std::cout << this->getName() << " signs " << form.getName() << "\n";
	else
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << form.getgrade_sig() << " < " << this->getGrade() << "\n";
}
