/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:24:22 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/20 13:47:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAST_HPP
#define CAST_HPP

#include <string>
#include <iostream>

class	types
{
	private:
		std::string _str;
	public:
		types();
		types(std::string);
		types& operator=(const types&);
		types(types&);
		~types();
		void	toFloat();
		void	toInt();
		void	toChar();
		void	toDouble();
		bool	checker();
		int		is_science();
};

#endif