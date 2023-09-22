/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:40:53 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 15:08:52 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("some target") {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object) {
	this->target = object.target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object) {
	if (this != &object)
		this->target = object.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->getSignature())
		throw FormNotSigned();
	if (executor.getGrade() > this->getGrade_toexec())
		throw GradeTooLowException();
	std::ofstream	tree(this->target + "_shrubbery");
	if (tree.is_open()) {
		tree << "    oxoxoo    ooxoo" << std::endl;
		tree << "  ooxoxo oo  oxoxooo" << std::endl;
		tree << " oooo xxoxoo ooo ooox" << std::endl;
		tree << " oxo o oxoxo  xoxxoxo" << std::endl;
		tree << "  oxo xooxoooo o ooo" << std::endl;
		tree << "    ooo\\oo\\  /o/o" << std::endl;
		tree << "        \\  \\/ /" << std::endl;
		tree << "         |   /" << std::endl;
		tree << "         |  |" << std::endl;
		tree << "         |  |" << std::endl;
		tree << "         | D|" << std::endl;
		tree << "         |  |" << std::endl;
		tree << "  ______/____\\____" << std::endl;
	}
}