/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:08:41 by orakib            #+#    #+#             */
/*   Updated: 2023/09/21 16:15:47 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	try
	{
		Bureaucrat	bob;
		std::cout << bob << std::endl;
		Bureaucrat	mike("mike", 150);
		std::cout << mike << std::endl;
		Bureaucrat	jade("jade", 151);
		std::cout << jade << std::endl;
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
		Bureaucrat	jade("jade", 0);
		std::cout << jade << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	bob;
		bob.promote();
		std::cout << bob << std::endl;
		Bureaucrat	mike("mike", 1);
		mike.promote();
		std::cout << mike << std::endl;
		Bureaucrat	jade("jade", 0);
		std::cout << jade << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}