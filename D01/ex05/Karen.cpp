/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:00:25 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/03 17:19:12 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void    Karen::complain( std::string level )
{
	void	(Karen::*ptr_debug)();
	void	(Karen::*ptr_info)();
	void	(Karen::*ptr_warning)();
	void	(Karen::*ptr_error)();
	ptr_debug = &Karen::debug;
	ptr_info = &Karen::info;
	ptr_warning = &Karen::warning;
	ptr_error = &Karen::error;
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (i < 4 && tab[i] != level)
		i++;
	switch (i)
	{
		case 0:
			(this->*ptr_debug)();
			break;
		case 1:
			(this->*ptr_info)();
			break;
		case 2:
			(this->*ptr_warning)();
			break;
		case 3:
			(this->*ptr_error)();
			break;
		default:
			break;
	}
}
