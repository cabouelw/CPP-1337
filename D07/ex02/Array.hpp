/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 12:09:35 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/21 15:19:25 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template<typename T>
class Array
{
	private:
		T *_elements;
		unsigned int len;
	public:
		Array()
		{
			this->len = 0;
			this->_elements = nullptr;
		}
		Array(unsigned int n)
		{
			this->len = n;
			this->_elements = new T[n]();
		}
		Array& operator=(const Array &cpy)
		{
			if (this == &cpy)
				return (*this);
			unsigned int idx = 0;
			delete[] this->_elements;
			_elements = new T[cpy.len]();
			this->len = cpy.len;
			while (idx < cpy.len)
			{
				this->_elements[idx] = cpy._elements[idx];
				idx++;
			}
			return (*this);
		}
		Array(const Array &cpy)
		{
			this->_elements = NULL;
			*this = cpy;
		}
		~Array()
		{
			delete[] this->_elements;
		}
		class InValidIndexException : public std::exception
		{
			const char* what() const throw()
			{
				return ("InValid Index Exception");
			}
		};
		T	&operator[](unsigned int idx)
		{
			if (idx < this->len)
				return (this->_elements[idx]);
			else
				throw InValidIndexException();
		}
		unsigned int size() const
		{
			return (this->len);
		}
};

#endif