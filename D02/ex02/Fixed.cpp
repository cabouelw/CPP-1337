/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:19:16 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/11 11:21:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::Fixed(const int &val)
{
	this->_value = val << _nb_fract;
}

Fixed::Fixed(const float &val)
{
	this->_value = roundf(val * (1 << _nb_fract));
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits()	const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat() const
{
	return ((float)_value / (float)(1 << _nb_fract));
}
int Fixed::toInt() const
{
	return ((int)_value / (int)(1 << _nb_fract));
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return(output);
}

Fixed	&Fixed::operator=(const Fixed &val)
{
	this->_value = val._value;
	return (*this);
}

bool	Fixed::operator<(const Fixed &last) const
{
	return (this->_value < last._value);
}

bool	Fixed::operator>(const Fixed &last) const
{
	return (this->_value > last._value);
}

bool	Fixed::operator>=(const Fixed &last) const
{
	return (this->_value >= last._value);
}

bool	Fixed::operator<=(const Fixed &last) const
{
	return (this->_value <= last._value);
}

bool	Fixed::operator==(const Fixed &last) const
{
	return (this->_value == last._value);
}

bool	Fixed::operator!=(const Fixed &last) const
{
	return (this->_value != last._value);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_value += (1 << _nb_fract);
	return (tmp);
}

Fixed	Fixed::operator++()
{
	this->_value += (1 << _nb_fract);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_value -= (1 << _nb_fract);
	return (tmp);
}

Fixed	Fixed::operator--()
{
	this->_value -= (1 << _nb_fract);
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &val)
{
	return (Fixed(this->toFloat() + val.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &val)
{
	return (Fixed(this->toFloat() - val.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &val)
{
	return (Fixed(this->toFloat() * val.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &val) const
{
	return (Fixed((float)this->_value / val._value));
}

Fixed	&Fixed::max(Fixed &first, Fixed &last)
{
	if (first > last)
		return (first);
	return (last);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &last)
{
	if (first > last)
		return (first);
	return (last);
}

Fixed	&Fixed::min(Fixed &first, Fixed &last)
{
	if (first < last)
		return (first);
	return (last);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &last)
{
	if (first < last)
		return (first);
	return (last);
}
