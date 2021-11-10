/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:48:08 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/10 16:35:36 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "amateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice& operator=(const Ice&);
		Ice(const Ice&);
		virtual	~Ice();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
#endif