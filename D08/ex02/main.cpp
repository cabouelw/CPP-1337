/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:01:35 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/23 18:41:14 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	{
		std::cout << "test with vector\n";
		MutantStack<int, std::vector<int> > vec_mstack;
		vec_mstack.push(5);
		vec_mstack.push(17);
		std::cout << "vec_mstack.top() : " << vec_mstack.top() << std::endl;
		vec_mstack.pop();
		std::cout << "after pop vec_mstack.top() : " << vec_mstack.top() << std::endl;
		std::cout << "after pop vec_mstack.size() : " << vec_mstack.size() << std::endl;
		int idx = 6;
		while (idx < 20)
		{
			vec_mstack.push(idx);
			idx++;
		}
		MutantStack<int, std::vector<int> >::iterator it = vec_mstack.begin();
		MutantStack<int, std::vector<int> >::iterator ite = vec_mstack.end();
		++it;
		--it;
		std::cout << "print vec_mstack stacks :\n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "+++++++++++++++++++\n";
	}
	std::cout << "-----------------Next scope---------------------------------\n";
	MutantStack<int> deque_mstack_old;
	{
		std::cout << "test with deque\n";
		std::cout << "\n";
		MutantStack<int, std::deque<int> > deque_mstack;
		int idx = 0;
		while (idx < 20)
		{
			deque_mstack.push(idx);
			idx++;
		}
		std::cout << "after pop deque_mstack.top() : " << deque_mstack.top() << "\n";
		std::cout << "\n";
		MutantStack<int>::reverse_iterator it1 = deque_mstack.rbegin();
		MutantStack<int>::reverse_iterator ite2 = deque_mstack.rend();
		--it1;
		std::cout << "print deque_mstack stacks :\n";
		while (++it1 != ite2)
			std::cout << *it1 << std::endl;
		std::cout << "+++++++++++++++++++\n";
		MutantStack<int>::const_reverse_iterator it2 = deque_mstack.crend();
		std::cout << *(it2 - 2) << std::endl;
		deque_mstack_old = deque_mstack;
	}
	std::cout << "test copy : \n";
	MutantStack<int>::const_reverse_iterator it = deque_mstack_old.crend();
	std::cout << *(it - 2) << std::endl;
	return 0;
}