/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:06:11 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:46:06 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n";
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	x->makeSound();
	w->makeSound();

	std::cout << "\n";

	delete x;
	delete w;
	std::cout << "\n";
	delete meta;
	delete j;
	delete i;
}