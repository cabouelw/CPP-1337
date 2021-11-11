/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:18:53 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 20:12:14 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int	_value;
	static const int	_nb_fract = 8;
public:
	Fixed();
	~Fixed();
	Fixed	&operator=(const Fixed &);
	Fixed(const Fixed& copy);

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif