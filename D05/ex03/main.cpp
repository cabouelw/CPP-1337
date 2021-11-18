/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:50:04 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 17:07:36 by cabouelw         ###   ########.fr       */
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
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->Action();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}