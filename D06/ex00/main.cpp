/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:32:50 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/19 20:40:50 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int	main(int ac, char **av)
{

	if (ac == 2)
	{
		types typ(av[1]);
		typ.toChar();
		typ.toInt();
		typ.toDouble();
		typ.toFloat();
	}
	else
		std::cout << "Error args\n";
}
