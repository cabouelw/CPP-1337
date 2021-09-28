/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:23 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/24 12:51:04 by cabouelw         ###   ########.fr       */
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

std::string	check(std::string	tmp)
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
	getline(std::cin, Contacts::p_nom);
	std::cout << "Last Name :";
	getline(std::cin, Contacts::nom);
	std::cout << "NickName :";
	getline(std::cin, Contacts::nick);
	std::cout << "Phone Number :";
	getline(std::cin, tmp);
	Contacts::nmbr = check(tmp);
	std::cout << "Darkest Secret :";
	getline(std::cin, Contacts::dark);
}
void	Contacts::search(int idx)
{
	int i = 0;
	std::cout << "|" << std::setw(10) << idx << "|";
	if (Contacts::p_nom.length() < 11)
		std::cout << std::setw(10) << Contacts::p_nom << "|";
	else
	{
		while (i < 9)
		{
			std::cout << Contacts::p_nom[i];
			i++;
		}
		std::cout << ".|";
	}
	if (Contacts::nom.length() < 11)
		std::cout << std::setw(10) << Contacts::nom << "|";
	else
	{
		i = 0;
		while (i < 9)
		{
			std::cout << Contacts::nom[i];
			i++;
		}
		std::cout << ".|";
	}
	if (Contacts::nick.length() < 11)
		std::cout << std::setw(10) << Contacts::nick << "|" << std::endl;
	else
	{
		i = 0;
		while (i < 9)
		{
			std::cout << Contacts::nick[i];
			i++;
		}
		std::cout << ".|" << std::endl;
	}
}