/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:35:10 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 08:36:06 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{

}
Phonebook::~Phonebook(void)
{
	
}

void	Phonebook::search(int nb)
{
	int i = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < nb)
	{
		contact[i].search(i);
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	Phonebook::display(int idx)
{
	contact[idx].display();
}

void	Phonebook::add(int nb)
{
	contact[nb].add();
}