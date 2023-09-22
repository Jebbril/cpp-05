/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:08:41 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 17:45:48 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void) {
	{
		try {
			Intern someRandomIntern;
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try {
			Intern someRandomIntern;
			AForm* scf;
			scf = someRandomIntern.makeForm("shrubbery creation", "home");
			delete scf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try {
			Intern someRandomIntern;
			AForm* ppf;
			ppf = someRandomIntern.makeForm("presedential pardon", "jeff");
			delete ppf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try {
			Intern someRandomIntern;
			AForm* ppf;
			ppf = someRandomIntern.makeForm("something", "jeff");
			delete ppf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}