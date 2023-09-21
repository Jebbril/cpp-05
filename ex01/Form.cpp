/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:42:25 by orakib            #+#    #+#             */
/*   Updated: 2023/09/21 20:49:51 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw() {
	return ("Exception thrown : Grade too high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Exception thrown : Grade too low");
}

Form::Form() : name("Nameless"), signature(false), grade_tosign(150), grade_toexec(150) {
	
}

Form::Form(std::string name, int grade_tosign, int grade_toexec) : 
name(name), signature(false), grade_tosign(grade_tosign), grade_toexec(grade_toexec) {
	if (this->grade_tosign > 150 || this->grade_toexec > 150)
		throw GradeTooLowException();
	if (this->grade_tosign < 1 || this->grade_toexec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &object) : 
name(object.name), signature(false), grade_tosign(object.grade_tosign), 
grade_toexec(object.grade_toexec) {
	
}

Form	&Form::operator=(const Form &object) {
	if (this != &object)
	{
		this->signature = object.signature;
	}
	return (*this);
}

Form::~Form() {

}

std::string	Form::getName() const {
	return (this->name);
}

bool	Form::getSignature() const {
	return (this->signature);
}

int	Form::getGrade_tosign() const {
	return (this->grade_tosign);
}

int	Form::getGrade_toexec() const{
	return (this->grade_toexec);
}

void	Form::beSigned(const Bureaucrat &object) {
	if (object.getGrade() > this->grade_tosign)
		throw GradeTooLowException();
	this->signature = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &object) {
	if (object.getSignature())
		out << object.getName() << "is signed, grade to sign is " << object.getGrade_tosign()
		<< ", grade to execute is " << object.getGrade_toexec() << "." ;
	else
		out << object.getName() << "is not signed, grade to sign is " << object.getGrade_tosign()
		<< ", grade to execute is " << object.getGrade_toexec() << "." ;
	return (out);
}