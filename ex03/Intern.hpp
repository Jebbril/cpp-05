/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:46:07 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 17:13:31 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class	Intern {
	public:
		Intern();
		Intern(const Intern &object);
		Intern	&operator=(const Intern &object);
		~Intern();
		AForm	*makeForm(std::string formName, std::string target);
};

#endif