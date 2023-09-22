/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:10:48 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 16:09:51 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H

#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class	AForm;

class	Bureaucrat {
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &object);
		Bureaucrat	&operator=(const Bureaucrat &object);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
		void	promote();
		void	demote();
		void	signAForm(AForm &object);
		void	executeForm(const AForm &object);
		class	GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class	GradeTooLowException  : public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &object);

#endif