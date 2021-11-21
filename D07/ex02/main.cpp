/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:43:07 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/21 15:01:14 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
	int size = 5;
	int idx = 0;
	Array<int>  array;
	Array<int>	array1(size);

	Array<char>	array3(size);
	
	while (idx < size)
	{
		array1[idx] = 1337 + idx;
		idx++;
	}
	idx = 0;
	while (idx < size)
	{
		std::cout << array1[idx++] << std::endl;
	}
	idx = 0;
	std::cout << std::endl;
	while (idx < size)
	{
		array3[idx] = ('0' + idx);
		idx++;
	}
	idx = 0;
	while (idx < size)
	{
		std::cout << array3[idx++] << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << array.size() << std::endl;
		array[5] = 1;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << array1.size() << std::endl;
		array1[5] = 1;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
