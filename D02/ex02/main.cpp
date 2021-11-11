/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:03:27 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/11 11:25:24 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a((float)1.5);
	Fixed d((float)2.5);
	Fixed const b(Fixed(5.05f) * Fixed( 2 ));
	// Fixed const d(Fixed(5.05f) * Fixed( 2 ));
	Fixed const c(Fixed(5.05f) / Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << d << std::endl;
	a++;
	d--;
	// std::cout << a << std::endl;
	// std::cout << d << std::endl;
	// std::cout << "a - b " << (a - d) << std::endl;
	// std::cout << "a * b " << (a * d) << std::endl;
	// std::cout << "a / b " << (a / d) << std::endl;
	// std::cout << "a + b " << (a + d) << std::endl;

	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << c << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;
	return 0;
}