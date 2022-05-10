/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:50:04 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/19 11:03:08 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int        main()
{
    try
    {
		Intern someRandomIntern;
		Form *rrf, *rrf1, *rrf2;
		// Form *rrf3;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cerr << '\n';
		rrf1 = someRandomIntern.makeForm("robotomy request", "Bender1");
		std::cerr << '\n';
		rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender2");
		// rrf3 = someRandomIntern.makeForm("whatever", "Bender3");
		std::cerr << '\n';
		rrf->Action();
		std::cerr << '\n';
		rrf1->Action();
		std::cerr << '\n';
		rrf2->Action();
		std::cerr << '\n';
		// rrf3->Action();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}