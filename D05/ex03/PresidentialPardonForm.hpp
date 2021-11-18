/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:55 by cabouelw          #+#    #+#             */
/*   Updated: 2021/11/18 14:22:30 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm();
		virtual void	Action() const;
};

#endif