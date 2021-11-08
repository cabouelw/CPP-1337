/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:42:50 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 12:10:29 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	get_line(std::string	&input)
{
	if (!getline(std::cin, input))
		exit(1);
	std::size_t found = 0;
	found = input.find("\t", found, input.length());
	while (found != std::string::npos)
	{
		input.erase(found, 1);
		input.insert(found, "    ");
		found = input.find("\t", found + 3, input.length());
	}
}

void	search(int	i, bool full, Phonebook &phone)
{
	std::string	input;

	if (full)
		phone.search(8);
	else
		phone.search(i);
	std::cout << "input Wich index: ";
	get_line(input);
	if (isdigit(input.c_str()[0]) && (stoi(input) < i || full) && stoi(input) < 8)
		phone.display(stoi(input));
	else
	{
		std::cout << "index Not Found! Try agin :" << std::endl;
		search(i, full, phone);
	}
}

int	main(void)
{
	int		i;
	bool	full;
	std::string input;
	Phonebook phone;

	i = 0;
	full = false;
	while (1)
	{
		std::cout << "input your CMD: ";
		if (!getline(std::cin, input))
			exit(1);
		if (input == "ADD")
		{
			phone.add(i);
			if (i == 7)
			{
				i = -1;
				full = true;
			}
			i++;
		}
		else if (input == "SEARCH")
		{
			if ((i != 0 && !full) || full)
				search(i, full, phone);
		}
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "CMD Error!" << std::endl;
	}
}
