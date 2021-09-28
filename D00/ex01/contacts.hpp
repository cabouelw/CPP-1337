/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:54:55 by cabouelw          #+#    #+#             */
/*   Updated: 2021/09/26 14:57:28 by cabouelw         ###   ########.fr       */
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

#endif