/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:42:45 by orakib            #+#    #+#             */
/*   Updated: 2023/09/22 15:58:18 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDENTIALPARDONFORM_HPP

#define PRESEDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresedentialPardonForm : public AForm {
	private:
		std::string	target;
	public:
		PresedentialPardonForm();
		PresedentialPardonForm(std::string target);
		PresedentialPardonForm(const PresedentialPardonForm &object);
		PresedentialPardonForm	&operator=(const PresedentialPardonForm &object);
		~PresedentialPardonForm();
		void	execute(const Bureaucrat &executor) const;
};

#endif