/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:18:53 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/11 10:14:29 by cabouelw         ###   ########.fr       */
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
	Fixed(const Fixed&);
	Fixed(const int &);
	Fixed(const float &);

	Fixed	&operator=(const Fixed &);

	bool	operator<(const Fixed &) const;
	bool	operator>(const Fixed &) const;
	bool	operator>=(const Fixed &) const;
	bool	operator<=(const Fixed &) const;
	bool	operator==(const Fixed &) const;
	bool	operator!=(const Fixed &) const;

	Fixed	operator+(const Fixed &);
	Fixed	operator-(const Fixed &);
	Fixed	operator*(const Fixed &);
	Fixed	operator/(const Fixed &) const;

	Fixed	operator++(int);
	Fixed	operator++();
	Fixed	operator--(int);
	Fixed	operator--();

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits() const;
	void setRawBits(int const);

	static Fixed &max(Fixed &, Fixed &);
	static const Fixed &max(const Fixed &, const Fixed &);

	static Fixed	&min(Fixed &, Fixed &);
	static const Fixed &min(const Fixed &, const Fixed &);
};

std::ostream	&operator<<(std::ostream &, Fixed const &);
#endif