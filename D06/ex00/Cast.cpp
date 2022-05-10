/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:42:53 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/20 17:46:57 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

types::types()
{
}

types::types(std::string s) : _str(s)
{
}

types& types::operator=(const types& cpy)
{
	if (this == &cpy)
		return (*this);
	this->_str = cpy._str;
	return (*this);
}

types::types(types &cpy)
{
	*this = cpy;
}

types::~types()
{
}

bool is_digit(std::string &s)
{
	int idx = 0;
	bool point = false;

	if (s[idx] == '-' || s[idx] == '+')
		idx++;
	if (!s[idx])
		return (false);
	while (s[idx])
	{
		if (isdigit(s[idx]))
			idx++;
		else if (s[idx] == '.' && !point)
		{
			point = true;
			idx++;
		}
		else if (idx == (int)(s.length() - 1) && s[idx] == 'f')
			return (true);
		else
			return (false);
	}
	return (true);
}

bool	outRang(std::string &str)
{
	long int	l_int = 0;

	l_int = std::stol(str);
	if (l_int > 2147483647 || l_int < -2147483648)
		return (true);
	return (false);
}

bool	types::checker()
{
	int		idx = 0;
	bool	point = false;

	if ((this->_str[idx] == '+' || this->_str[idx] == '-'))
		idx++;
	if (!this->_str[idx])
		return (true);
	while (this->_str[idx])
	{
		if (this->_str[idx] == 'f' && this->_str[idx - 1] && (isdigit(this->_str[idx - 1]) || this->_str[idx - 1] == '.'))
			return (true);
		else if (idx == 0 && isalpha(this->_str[idx]) && !this->_str[idx + 1])
			return (true);
		else if (idx >= 1 && isalpha(this->_str[idx]) && this->_str[idx] != 'f')
			return (false);
		else if (this->_str[idx] == '.' && !point)
		{
			point = true;
			idx++;
		}
		else if (isdigit(this->_str[idx]))
			idx++;
		else if (idx > 0 && isprint(this->_str[idx]))
			return (false);
	}
	return (true);
}

int	types::is_science()
{
	int i = 0;

	std::string	sciencef[] = {"-inff", "+inff", "nanf"};
	std::string	science[] = {"-inf", "+inf", "nan"};

	while (i < 3)
	{
		if (science[i] == this->_str)
			return (1);
		if (sciencef[i] == this->_str)
			return (2);
		i++;
	}
	if (!isdigit(this->_str[0]) && this->_str.length() > 1 && this->_str[0] != '+' && this->_str[0] != '-')
		return (3);
	return (0);
}

void	types::toChar()
{
	std::cout <<  "char: ";
	if ((is_digit(this->_str) && outRang(this->_str))  || this->is_science())
		std::cout <<  "impossible\n";
	else if (this->_str.length() == 1 && !isdigit(this->_str[0]))
		std::cout << "'" << this->_str[0] << "'\n";
	else if (is_digit(this->_str) && !isprint(stoi(this->_str)))
		std::cout << "Non displayable" << std::endl;
	else if (this->checker())
	{
		if (is_digit(this->_str) && isprint(stoi(this->_str)))
			std::cout << "'" << static_cast<char>(stoi(this->_str)) << "'\n";
		else if (is_digit(this->_str))
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible\n";
}

void	types::toInt()
{
	std::cout <<  "int: ";
	if ((isdigit(this->_str[0]) && outRang(this->_str))  || this->is_science())
		std::cout <<  "impossible\n";
	else if (is_digit(this->_str))
		std::cout << static_cast<int>(stoi(this->_str)) << "\n";
	else if (this->_str.length() == 1 && isdigit(this->_str[0]))
		std::cout << this->_str[0] << "\n";
	else if (this->_str.length() == 1 && isprint(this->_str[0]))
		std::cout << static_cast<int>(this->_str[0]) << "\n";
	else if (!this->checker() && is_digit(this->_str))
		std::cout << static_cast<int>(stoi(this->_str)) << "\n";
	else
		std::cout << "impossible\n";
}

void types::toDouble()
{
	std::cout <<  "double: ";
	if ((isdigit(this->_str[0]) && outRang(this->_str)))
		std::cout <<  "impossible\n";
	else if (this->is_science())
	{
		int res = this->is_science();
		if (res == 2)
			std::cout << this->_str.substr(0 , this->_str.length() - 1) + "\n";
		else if (res == 1)
			std::cout << this->_str <<  "\n";
		else
			std::cout <<  "impossible\n";
	}
	else if (isprint(this->_str[0]) && this->_str.length() == 1 && !is_digit(this->_str))
		std::cout << static_cast<float>(this->_str[0])<< ".0\n";
	else if (this->checker() && is_digit(this->_str))
	{
		double d = static_cast<double>(stod(this->_str));
		double f = d - static_cast<int>(stod(this->_str));
		if (f)
			std::cout << static_cast<double>(stod(this->_str)) << "\n";
		else
			std::cout << static_cast<double>(stod(this->_str)) << ".0\n";
	}
	else
		std::cout << "impossible\n";
}

void types::toFloat()
{
	std::cout <<  "float: ";
	if ((isdigit(this->_str[0]) && outRang(this->_str)))
		std::cout <<  "impossible\n";
	else if (this->is_science())
	{
		int res = this->is_science();
		if (res == 2)
			std::cout << this->_str + "\n";
		else if (res == 1)
			std::cout << this->_str <<  "f\n";
		else
			std::cout <<  "impossible\n";
	}
	else if (is_digit(this->_str))
	{
		float d = static_cast<float>(stof(this->_str));
		float f = d - static_cast<int>(stof(this->_str));
		if (f)
			std::cout << static_cast<float>(stof(this->_str)) << "f\n";
		else
			std::cout << static_cast<float>(stof(this->_str)) << ".0f\n";
	}
	else if (isprint(this->_str[0]) && this->_str.length() == 1)
		std::cout << static_cast<float>(this->_str[0])<< ".0f\n";
	else
		std::cout << "impossible\n";
}
