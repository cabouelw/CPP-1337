/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:01:04 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/20 14:04:35 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int random;

	srand(time(NULL));
	random = rand() % 4;
	if (random == 3)
		return (new A);
	else if (random == 2)
		return (new B);
	else
		return (new C);
	
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "A\n";
	else if (b)
		std::cout << "B\n";
	else if (c)
		std::cout << "C\n";
	else
		std::cout << "???\n";
}

void identify(Base& p)
{
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch(const std::exception& e)
	{
	}
}

int	main()
{
	Base *p = generate();
	Base &r = *generate();

	identify(p);
	identify(r);
}