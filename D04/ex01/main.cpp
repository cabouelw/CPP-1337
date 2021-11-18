/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:06:11 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:51:15 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
		
	std::cout << "\n";
	Cat cat3;
	{
		Cat cat1;
		std::cout << "\n";
		cat1.printideas();
		cat3.printideas();
		cat3 = cat1;
		cat1.setideas("HaHa");
		std::cout << "\n";
		cat1.printideas();
		cat3.printideas();
	}
	std::cout << "\n";
}