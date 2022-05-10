/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:54:55 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/23 11:59:27 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _N(0), _cpcty(0)
{
	
}

Span::Span(unsigned int size) : _N(size), _cpcty(0)
{
	_span.reserve(size);
}

Span& Span::operator=(const Span& cpy)
{
	int idx = 0;
	if (this == &cpy)
		return (*this);
	this->_span.reserve(cpy._N);
	this->_N = cpy._N;
	this->_cpcty = cpy._cpcty;
	while (idx < cpy._cpcty)
	{
		this->_span[idx] = cpy._span[idx];
		idx++;
	}
	return (*this);
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span::~Span()
{
}

void	Span::addNumber(int v)
{
	if (this->_N == this->_cpcty)
		throw SpanFullException();
	this->_span.push_back(v);
	this->_cpcty++;
}

int		Span::shortestSpan()
{
	int shrt;
	int idx = 0;

	if (this->_cpcty < 2)
		throw NoNumbersStoredException();
	std::sort(this->_span.begin(), this->_span.end());
	shrt = *(this->_span.end() - 1);
	while (idx < this->_cpcty - 1)
	{
		if ((this->_span[idx + 1] - this->_span[idx]) < shrt)
			shrt = this->_span[idx + 1] - this->_span[idx];
		if (shrt < 0)
			shrt *= -1;
		idx++;
	}
	return (shrt);
}

int		Span::longestSpan()
{
	int longest;

	if (this->_cpcty < 2)
		throw NoNumbersStoredException();
	std::sort(this->_span.begin(), this->_span.end());
	longest = *(this->_span.end() - 1) - *(this->_span.begin());
	return (longest);
}

const char* Span::SpanFullException::what() const throw()
{
	return ("Span Is Full");
}

const char* Span::NoNumbersStoredException::what() const throw()
{
	return ("No Numbers Stored Yet");
}
