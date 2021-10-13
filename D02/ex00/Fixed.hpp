/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:18:53 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/12 13:34:09 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
	int	value;
	static int	nb_fract;
private:
	Fixed();
	~Fixed();
	Fixed(int	cp_value);
	int getRawBits( void );
	void setRawBits( int const raw );
};
