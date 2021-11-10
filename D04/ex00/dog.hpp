/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:16:13 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 09:59:39 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog& operator=(const Dog&);
		Dog(const Dog&);
		virtual	void	makeSound() const;
};

#endif