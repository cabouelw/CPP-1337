/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:42:50 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/30 12:59:13 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	search(int	i, bool full, Phonebook &phone)
{
	std::string	input;

	if (full)
		phone.search(8);
	else
		phone.search(i);
	std::cout << "input Wich index: ";
	getline(std::cin, input);
	if ((stoi(input) < i || full) && stoi(input) < 8)
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
			search(i, full, phone);
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "CMD Error!" << std::endl;
	}
}