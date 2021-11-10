/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:16:32 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 09:59:37 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat& operator=(const Cat&);
		Cat(const Cat&);
		virtual	void	makeSound() const;
};

#endif