/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:42:02 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 16:06:52 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("some target") {
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object) {
	this->target = object.target;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &object) {
	if (this != &object)
		this->target = object.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->getSignature())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGrade_toexec())
		throw GradeTooLowException();
	std::srand((unsigned) std::time(NULL));
	int	i = std::rand();
	std::cout << i << std::endl;
	if (i % 2)
		std::cout << "ZZZZZZ. VVVVZZZTTT! " << this->target << " has been robotomized !" << std::endl;
	else
		std::cout << "ZZZZZZ. VVVVZZZTTT! robotomy of " << this->target << " has failed !" << std::endl;
}