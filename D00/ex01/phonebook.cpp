/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:35:10 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/24 10:30:38 by cabouelw         ###   ########.fr       */
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

	std::cout << "|     Index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < nb)
	{
		contact[i].search(i);
		i++;
	}
}

void	Phonebook::display(int idx)
{
	contact[idx].display();
}

void	Phonebook::add(int nb)
{
	contact[nb].add();
}