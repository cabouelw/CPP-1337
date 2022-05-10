/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:01:24 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/23 15:59:41 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <algorithm>

template<typename T, class Container = std::deque<T> >
class  MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack()
		{
		}
		MutantStack& operator=(const MutantStack &cpy)
		{
			if (this == &cpy)
				return (*this);
			std::stack<T, Container>::operator=(cpy);
			return (*this);
		}
		MutantStack(const MutantStack &cpy)
		{
			*this = cpy;
		}
		~MutantStack()
		{
		}
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		const_iterator cbegin() const
		{
			return (this->c.cbegin());
		}
		const_iterator cend() const
		{
			return (this->c.cend());
		}
		reverse_iterator rbegin()
		{
			return (this->c.rbegin());
		}
		reverse_iterator rend()
		{
			return (this->c.rend());
		}
		const_reverse_iterator crbegin() const
		{
			return (this->c.crbegin());
		}
		const_reverse_iterator crend() const
		{
			return (this->c.crend());
		}
};

#endif