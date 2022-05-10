/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:59:24 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/19 21:37:36 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef struct Data_s
{
	int			i;
	std::string str;
}				Data;


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data data;

	data.i = 1337;
	data.str = "1337";
	uintptr_t ptr = serialize(&data);
	Data data_m = *deserialize(ptr);
	std::cout << data_m.i << "\n";
	std::cout << data_m.str << "\n";
}
