/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:07:18 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/22 19:27:11 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class ValueNotFound : public std::exception
{
	const char* what() const throw()
	{
		return ("Value Not Found");
	}
};

template<typename T>
void easyfind(T a, int i)
{
	if (std::find(a.begin(), a.end(), i) != a.end())
		std::cout << "Value Find\n";
	else
		throw ValueNotFound();
}

#endif