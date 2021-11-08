/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:23 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 09:05:02 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

Contacts::Contacts(void)
{
}
Contacts::~Contacts(void)
{
}

void	Contacts::display()
{
	std::cout << "First Name :" << Contacts::p_nom << std::endl;
	std::cout << "Last Name :" << Contacts::nom << std::endl;
	std::cout << "NickName :" << Contacts::nick << std::endl;
	std::cout << "Phone Number :" << Contacts::nmbr << std::endl;
	std::cout << "Darkest Secret :" << Contacts::dark << std::endl;
}

std::string	check(std::string	&tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		if (!std::isdigit(tmp[i]))
		{
			std::cout << "Just numbers! try agin" << std::endl;
			std::cout << "Phone Number :";
			getline(std::cin, tmp);
			i = -1;
		}
		i++;
	}
	return (tmp);
}

void	Contacts::add(void)
{
	std::string	tmp;

	std::cout << "First Name :";
	get_line(Contacts::p_nom);
	std::cout << "Last Name :";
	get_line(Contacts::nom);
	std::cout << "NickName :";
	get_line(Contacts::nick);
	std::cout << "Phone Number :";
	get_line(tmp);
	Contacts::nmbr = check(tmp);
	std::cout << "Darkest Secret :";
	get_line(Contacts::dark);
}

void print_plus(std::string str)
{
	int	i;

	i = 0;
	
	if (str.length() < 10)
		std::cout << std::setw((10 - str.length()) + 1);
	while (str.c_str()[i] && i < 9)
	{
		if (str.c_str()[i] != '\t')
			std::cout << str.c_str()[i];
		else
			std::cout << " ";
		i++;
	}
	if (str.length() > 9)
		std::cout << ".";
	std::cout << "|";
}

void	Contacts::search(int idx)
{
	std::cout << "|" << std::setw(10) << idx << "|";
	print_plus(p_nom);
	print_plus(nom);
	print_plus(nick);
	std::cout << std::endl;
}