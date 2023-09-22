/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:46:17 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 17:36:31 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresedentialPardonForm.hpp"

Intern::Intern() {
	
}

Intern::Intern(const Intern &object) {
	(void)object;
}

Intern	&Intern::operator=(const Intern &object) {
	(void)object;
	return (*this);
}

Intern::~Intern() {
	
}

AForm	*Intern::makeForm(std::string formName, std::string target) {
	std::string	s_arr[] = {"shrubbery creation", "robotomy request", "presedential pardon"};
	int	i = 0;
	AForm *form;
	while (i < 3) {
		if (s_arr[i] == formName)
			break;
		i++;
	}
	try {
		switch (i) {
			case 0:
				std::cout << "Intern creates " << formName << std::endl;
				form = new ShrubberyCreationForm(target);
				return (form);
				break;
			case 1:
				std::cout << "Intern creates " << formName << std::endl;
				form = new RobotomyRequestForm(target);
				return (form);
				break;
			case 2:
				std::cout << "Intern creates " << formName << std::endl;
				form = new PresedentialPardonForm(target);
				return (form);
				break;
			default:
				std::cout << "Intern doesn't recognize this type of form " << std::endl;
				return (NULL);
				break;
		}
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (form);
}