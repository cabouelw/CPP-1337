/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:15:23 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/21 12:07:54 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template<typename T>
void	ft_func(T const value)
{
	std::cout << value << "\n";
}

template<typename T>
void	iter(T *arry, int length, void (*f)(const T))
{
	int idx = 0;

	while (idx < length)
	{
		f(arry[idx]);
		idx++;
	}
}

#endif