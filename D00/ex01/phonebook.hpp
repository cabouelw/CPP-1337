/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:35:26 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/07 17:48:41 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "contacts.hpp"
#include <string>

class Phonebook
{
	Contacts contact[8];

public:
	Phonebook(void);
	~Phonebook(void);
	void	search(int nb);
	void	add(int nb);
	void	display(int idx);
};
#endif