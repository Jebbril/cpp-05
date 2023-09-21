/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:41:59 by orakib            #+#    #+#             */
/*   Updated: 2023/09/21 20:49:51 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_H

#define Form_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
	private:
		const std::string	name;
		bool				signature;
		const int			grade_tosign;
		const int			grade_toexec;
	public:
		Form();
		Form(std::string name, int grade_tosign, int grade_toexec);
		Form(const Form &object);
		Form	&operator=(const Form &object);
		~Form();
		std::string	getName() const;
		bool	getSignature() const;
		int	getGrade_tosign() const;
		int	getGrade_toexec() const;
		void	beSigned(const Bureaucrat &object);
		class	GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class	GradeTooLowException  : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Form &object);

#endif