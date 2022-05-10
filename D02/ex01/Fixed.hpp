/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:18:53 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/22 16:46:45 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_value;
	static const int	_nb_fract = 8;
public:
	Fixed();
	~Fixed();
	Fixed	&operator=(const Fixed &);
	Fixed(const Fixed&);
	Fixed(const int &);
	Fixed(const float &);

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits() const;
	void setRawBits(int const);
};

std::ostream	&operator<<(std::ostream &, Fixed const &);
#endif