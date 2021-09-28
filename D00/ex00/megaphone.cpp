/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:50:08 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/23 13:18:56 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}