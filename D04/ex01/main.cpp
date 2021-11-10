/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:06:11 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 11:51:43 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "dog.hpp"
#include "animal.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"


int main()
{
	Animal *animal[4];
	int	i;
	i = 0;
	while (i < 4)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		i++;
	}
	std::cout << "\n";
	i = 0;
	while (i < 4)
		animal[i++]->makeSound();
	std::cout << "\n";
	i = 0;
	while (i < 4)
		delete animal[i++];
		
	Cat cat3;
	{
		Cat cat1;
		std::cout << "\n";
		cat3 = cat1;
		std::cout << "\n";
	}
	std::cout << "\n";
	cat3.printideas();
}