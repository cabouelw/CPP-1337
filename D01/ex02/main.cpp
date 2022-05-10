/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:43:37 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 13:52:18 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*str_ptr;
	std::string &str_ref = str;

	str_ptr = &str;
	std::cout << "address of string " << &str << std::endl;
	std::cout << "address of string using stringPTR " << str_ptr << std::endl;
	std::cout << "address of string using stringREF " << &str_ref << std::endl;

	std::cout << "\nstring using string " << str << std::endl;
	std::cout << "string using pointer " << *str_ptr << std::endl;
	std::cout << "string using reference " << str_ref << std::endl;
}