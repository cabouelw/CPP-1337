/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:19:16 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 12:52:13 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::Fixed(const int &val)
{
	std::cout << "Int constructor called\n";
	this->_value = val << _nb_fract;
}

Fixed::Fixed(const float &val)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(val * (1 << _nb_fract));
}

Fixed   &Fixed::operator=(const Fixed &val)
{
	std::cout << "Assignation operator called\n";
	if (this == &val)
		return (*this);
	this->_value = val._value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits()	const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
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


