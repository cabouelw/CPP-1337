/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:55:05 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/23 11:22:55 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class  Span
{
	private:
		std::vector<int>	_span;
		unsigned int		_N;
		unsigned int		_cpcty;
	public:
		Span();
		Span(unsigned int);
		Span& operator=(const Span&);
		Span(const Span&);
		~Span();
		class SpanFullException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class NoNumbersStoredException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
};

#endif