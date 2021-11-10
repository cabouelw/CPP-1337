/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:45:35 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/09 14:34:03 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace(char **&av, std::ifstream& or_file, std::string&	line)
{
	std::ofstream	re_File;
	std::string		s1;
	std::string		filename;
	size_t			idx;

	filename = av[1];
	s1 = av[2];
	re_File.open(filename.append(".replace"));
	idx = line.find(s1, 0);
	while (idx != std::string::npos)
	{
		line.erase(idx, s1.length());
		line.insert(idx, av[3]);
		idx = line.find(s1, idx + s1.length());
	}
	re_File << line;
	or_file.close();
}

int	ft_error(std::string err)
{
	std::cout << err << std::endl;
	return (1);
}

int main (int ac, char **av)
{
	std::ifstream or_file;
	std::string	line;

	if (ac != 4 || av[2][0] == '\0' || av[2][0] == '\0')
		return (ft_error("args!!"));
	or_file.open (av[1]);
	if (!or_file.is_open())
		return (ft_error("File Permission denied!"));
	getline(or_file, line, '\0');
	or_file.close();
	replace(av, or_file, line);
	return (0);
}
