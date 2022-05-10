/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:50:04 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/17 22:00:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


int        main()
{
	try
	{
		std::cout << "----- Director 0 -----\n";
		Bureaucrat    bureaucrat("Director0", 10);
		std::cout << bureaucrat;
		Form	form1("form0", 11, 12);
		std::cout << form1;
		form1.beSigned(bureaucrat);
		bureaucrat.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "----- Director 1 -----\n";
		Bureaucrat    bureaucrat("Director1", 1);
		std::cout << bureaucrat;
		Form	form2("form1", 11, 12);
		std::cout << form2;
		form2.beSigned(bureaucrat);
		bureaucrat.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "----- Director 2 -----\n";
        Bureaucrat    bureaucrat("Director2", 100);
        std::cout << bureaucrat;
		Form	form3("form2", 0, 1000);
        std::cout << form3;
		form3.beSigned(bureaucrat);
		bureaucrat.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "----- Director 3 -----\n";
        Bureaucrat    bureaucrat("Director3", 100);
        std::cout << bureaucrat;
		Form	form4("form3", 1000, 1000);
        std::cout << form4;
		form4.beSigned(bureaucrat);
		bureaucrat.signForm(form4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}