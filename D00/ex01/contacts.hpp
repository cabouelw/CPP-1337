/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:54:55 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/08 09:05:11 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMTACTS_H
#define COMTACTS_H

#include <iostream>
#include <string>
#include <iomanip>


class Contacts
{
	std::string	nom;
	std::string	p_nom;
	std::string	nick;
	std::string	nmbr;
	std::string	dark;
public:
	Contacts(void);
	~Contacts(void);
	void	add();
	void	search(int idx);
	void	display();
};

void	get_line(std::string	&);
std::string	check(std::string	&);

#endif