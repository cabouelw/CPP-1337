/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:19:16 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/17 14:40:03 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed   &Fixed::operator=(const Fixed &val)
{
	std::cout << "Assignation constructor called\n";
	this->_value = val.getRawBits();
	return (*this);
}

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->_value = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

int	Fixed::getRawBits()	const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
