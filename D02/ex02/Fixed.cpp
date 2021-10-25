/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:19:16 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/25 16:33:43 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	this->_value = copy._nb_fract;
	*this = copy;
}

Fixed::Fixed(const int &val)
{
	this->_value = val * (1 << _nb_fract);
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
	if (this->toFloat() < last.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &last) const
{
	if (this->toFloat() > last.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &last) const
{
	if (this->toFloat() >= last.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &last) const
{
	if (this->toFloat() <= last.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &last) const
{
	if (this->toFloat() == last.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &last) const
{
	if (this->toFloat() != last.toFloat())
		return (true);
	return (false);
}

Fixed	&Fixed::operator+(const Fixed &val)
{
	this->_value += val._value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_value++;
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_value--;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}
Fixed	&Fixed::operator-(const Fixed &val)
{
	this->_value -= val._value;
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &val)
{
	float n1;
	float n2;

	n1 = this->toFloat();
	n2 = val.toFloat();
	this->_value = roundf((n1 * n2) * (1 << _nb_fract));
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &val)
{
	float n1;
	float n2;

	n1 = this->toFloat();
	n2 = val.toFloat();
	this->_value = roundf((n1 / n2) * (1 << _nb_fract));
	return (*this);
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
