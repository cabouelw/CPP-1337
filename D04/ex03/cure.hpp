/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:48:50 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 16:35:42 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include "amateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure& operator=(const Cure&);
		Cure(const Cure&);
		virtual	~Cure();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
#endif