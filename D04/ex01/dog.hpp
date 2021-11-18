/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:16:13 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/16 13:50:52 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog& operator=(const Dog&);
		Dog(const Dog&);
		virtual	void	makeSound() const;
};

#endif