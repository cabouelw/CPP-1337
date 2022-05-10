/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:11:12 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/21 16:47:37 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T s;

	s = a;
	a = b;
	b = s;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a >= b)
		return (b);
	return (a);
}

template<typename T>
T	max(T &a, T &b)
{
	if (a <= b)
		return (b);
	return (a);
}

#endif