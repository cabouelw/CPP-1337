/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:03:58 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 14:11:50 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()  : Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	if (this == &cpy)
		return (*this);
	this->_target = cpy._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)  : Form("ShrubberyCreationForm", 145, 137)
{
	*this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::Action() const
{
	std::ofstream file;

	file.open(this->_target + "_shrubbery");
	if (file.is_open())
	{
		file << "   ASCII trees\n";
		file << "      /\\      \n";
		file << "     /\\*\\     \n";
		file << "    /\\O\\*\\    \n";
		file << "   /*/\\/\\/\\   \n";
		file << "  /\\O\\/\\*\\/\\  \n";
		file << " /\\*\\/\\*\\/\\/\\ \n";
		file << "/\\O\\/\\/*/\\/O/\\\n";
		file << "      ||      \n";
		file << "      ||      \n";
		file << "      ||      \n";
	}
	else
		std::cout << "Open File : Permission denied!\n";
}