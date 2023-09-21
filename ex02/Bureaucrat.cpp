/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:10:38 by orakib            #+#    #+#             */
/*   Updated: 2023/09/21 20:50:50 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception thrown : Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception thrown : Grade too low");
}

Bureaucrat::Bureaucrat() : name("Nameless"), grade(150) {
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (this->grade > 150)
		throw GradeTooLowException();
	if (this->grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &object) : name(object.name), grade(object.grade) {
	
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &object) {
	if (this != &object)
		this->grade = object.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	
}

std::string	Bureaucrat::getName() const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

void	Bureaucrat::promote() {
	(this->grade)--;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::demote() {
	(this->grade)++;
	if (this->grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signAForm(AForm &object) {
	if (this->grade <= object.getGrade_tosign()) {
		object.beSigned(*this);
		std::cout << this->name << " signed " << object.getName() << std::endl;
	}
	else
		std::cout << this->name << " couldn't sign " << object.getName()
		<< " because grade is too low." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &object) {
	out << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (out);
}