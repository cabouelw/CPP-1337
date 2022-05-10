/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:03:27 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/12 12:12:56 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	std::cout << "Test Fixed constructors" << std::endl;
	{
		Fixed fix;
		Fixed fix1(2.5f);
		Fixed fix2(2);

		std::cout << fix << std::endl;
		std::cout << fix1 << std::endl;
		std::cout << fix2 << std::endl;
	}
	std::cout << "\nTest Fixed operators" << std::endl;
	{
		Fixed fix(5.05f);
		Fixed fix1(2);
		Fixed fix2(fix / fix1);
		Fixed fix3(fix * fix1);
		Fixed fix4(fix + fix1);
		Fixed fix5(fix - fix1);

		std::cout << fix << std::endl;
		std::cout << fix1 << std::endl;
		std::cout << fix2 << std::endl;
		std::cout << fix3 << std::endl;
		std::cout << fix4 << std::endl;
		std::cout << fix5 << std::endl;
	}
	std::cout << "\nTest Fixed  pre-increment/post-increment..." << std::endl;
	{
		Fixed fix;
		Fixed fix1(2.6f);

		std::cout << "fix = " << fix << std::endl;
		std::cout << "fix++ = "<< fix++ << std::endl;
		std::cout << "fix = "<< fix << std::endl;
		std::cout << "++fix = "<< ++fix << std::endl;
		std::cout << "fix = "<< fix << std::endl;
		std::cout << "fix1 = "<< fix1 << std::endl;
		std::cout << "fix1-- = "<< fix1-- << std::endl;
		std::cout << "fix1 = "<< fix1 << std::endl;
		std::cout << "--fix1 = "<< --fix1 << std::endl;
		std::cout << "fix1 = "<< fix1 << std::endl;
	}
	std::cout << "\nTest Fixed  min/max" << std::endl;
	{
		Fixed fix(5.65f);
		Fixed fix1(5.66f);

		std::cout << fix << std::endl;
		std::cout << fix1 << std::endl;
		std::cout << "max = ";
		std::cout << Fixed::max(fix, fix1) << std::endl;
		std::cout << "min = ";
		std::cout << Fixed::min(fix, fix1) << std::endl;
	}
	return 0;
}