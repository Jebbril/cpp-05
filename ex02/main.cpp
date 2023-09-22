/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:08:41 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 16:15:02 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresedentialPardonForm.hpp"

int	main(void) {
	try
	{
		Bureaucrat	bob;
		std::cout << bob << std::endl;
		Bureaucrat	mike("mike", 1);
		std::cout << mike << std::endl;
		ShrubberyCreationForm	form("home");
		mike.signAForm(form);
		mike.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	bob;
		std::cout << bob << std::endl;
		Bureaucrat	mike("mike", 1);
		std::cout << mike << std::endl;
		RobotomyRequestForm	form("home");
		mike.signAForm(form);
		form.execute(mike);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	bob;
		std::cout << bob << std::endl;
		Bureaucrat	mike("mike", 1);
		std::cout << mike << std::endl;
		PresedentialPardonForm	form("home");
		mike.signAForm(form);
		form.execute(mike);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}