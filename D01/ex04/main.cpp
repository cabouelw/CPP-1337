/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:45:35 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/27 15:34:21 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace()
{
	
}

int main (int ac, char **av)
{
	std::ifstream or_file;
	std::ofstream re_File;
	std::string	filename;
	std::string	s1;
	std::string	line;
	int			idx;
	

	if (ac != 4 || av[2][0] == '\0' || av[2][0] == '\0')
		return (1);
	or_file.open (av[1]);
	filename = av[1];
	s1 = av[2];
	filename.append(".replace");
	re_File.open(filename);
	getline(or_file, line, '\0');
	idx = line.find(s1);
	while (idx != -1)
	{
		line.erase(idx, s1.length());
		line.insert(idx, av[3]);
		idx = line.find(s1);
	}
	re_File << line;
	or_file.close();
	re_File.close();
	return 0;
}