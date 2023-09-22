/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:41:07 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 15:58:27 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP

#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &object);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &object);
		~ShrubberyCreationForm();
		void	execute(const Bureaucrat &executor) const;
};

#endif