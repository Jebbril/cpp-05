/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:08:41 by orakib            #+#    #+#             */
/*   Updated: 2023/09/21 20:49:51 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void) {
	try
	{
		Bureaucrat	bob;
		std::cout << bob << std::endl;
		Bureaucrat	mike("mike", 150);
		std::cout << mike << std::endl;
		Form		f1("f1", 45, 10);
		mike.signForm(f1);
		f1.beSigned(bob);
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
		Form		f1("f1", 45, 10);
		mike.signForm(f1);
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
		Form		f1("f1", 45, 10);
		f1.beSigned(mike);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}