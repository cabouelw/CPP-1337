/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:07:20 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 12:20:52 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual	~Animal();
		Animal(std::string);
		Animal& operator=(const Animal&);
		Animal(const Animal&);
		std::string getType() const;
		virtual	void	makeSound() const = 0;
};

#endif