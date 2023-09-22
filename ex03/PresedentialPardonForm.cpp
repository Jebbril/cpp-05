/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:42:35 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 15:39:24 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresedentialPardonForm.hpp"

PresedentialPardonForm::PresedentialPardonForm() : AForm("PresedentialPardonForm", 25, 5), target("some target") {
	
}

PresedentialPardonForm::PresedentialPardonForm(std::string target) : AForm("PresedentialPardonForm", 25, 5), target(target) {

}

PresedentialPardonForm::PresedentialPardonForm(const PresedentialPardonForm &object) {
	this->target = object.target;
}

PresedentialPardonForm	&PresedentialPardonForm::operator=(const PresedentialPardonForm &object) {
	if (this != &object)
		this->target = object.target;
	return (*this);
}

PresedentialPardonForm::~PresedentialPardonForm() {

}

void	PresedentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!this->getSignature())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGrade_toexec())
		throw GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}