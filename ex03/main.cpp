/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:08:41 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 17:39:20 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void) {
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "home");
		delete scf;
	}
	{
		Intern someRandomIntern;
		AForm* ppf;
		ppf = someRandomIntern.makeForm("presedential pardon", "jeff");
		delete ppf;
	}
	{
		Intern someRandomIntern;
		AForm* ppf;
		ppf = someRandomIntern.makeForm("something", "jeff");
		delete ppf;
	}
}