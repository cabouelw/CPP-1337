/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:07:26 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/22 19:25:59 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> values;
	int i = 3;

	values.push_back(0);
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	try
	{
		easyfind(values, i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}