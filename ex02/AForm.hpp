/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:41:59 by orakib            #+#    #+#             */
/*   Updated: 2023/09/21 20:49:51 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H

#define AFORM_H

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
	private:
		const std::string	name;
		bool				signature;
		const int			grade_tosign;
		const int			grade_toexec;
	public:
		AForm();
		AForm(std::string name, int grade_tosign, int grade_toexec);
		AForm(const AForm &object);
		AForm	&operator=(const AForm &object);
		~AForm();
		std::string	getName() const;
		bool	getSignature() const;
		int	getGrade_tosign() const;
		int	getGrade_toexec() const;
		void	beSigned(const Bureaucrat &object);
		virtual void	execute(const Bureaucrat &executor) const = 0;
		class	GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class	GradeTooLowException  : public std::exception {
			virtual const char* what() const throw();
		};
		class	FormNotSigned  : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const AForm &object);

#endif