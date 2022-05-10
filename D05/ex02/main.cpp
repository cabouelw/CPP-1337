/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:50:04 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 14:19:47 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int        main()
{
    try
    {
        ShrubberyCreationForm    shrubbery("Home");
        std::cout << "--------- shrubbery -----------\n" << std::endl;
        shrubbery.Action();

        std::cout << "\n--------- Roboto -----------\n" << std::endl;
        RobotomyRequestForm        robot("Roboto-san");
        robot.Action();

        std::cout << "\n--------- president -----------\n" << std::endl;
        PresidentialPardonForm        president("larbi");
        president.Action();


        std::cout << "\n--------- execute -----------\n" << std::endl;
        Bureaucrat    bureaucrat("Director", 6);
        bureaucrat.signForm(president);
        bureaucrat.executeForm(president);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}