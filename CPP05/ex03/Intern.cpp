/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:58:05 by diespino          #+#    #+#             */
/*   Updated: 2026/06/17 18:25:01 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& other) {*this = other;}

Intern& Intern::operator=(const Intern& other) {

	if (this == &other)
		return (*this);
	return (*this);
}

Intern::~Intern(void) {}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	AForm*	new_form;

	if (form == "ShrubberyCreationForm")
		new_form = new ShrubberyCreationForm(target);
	else if (form == "RobotomyRequestForm")
		new_form = new RobotomyRequestForm(target);
	else if (form == "PresidentialPardonForm")
		new_form = new PresidentialPardonForm(target);
	else
		throw (AForm::FormNotExist());
	
	std::cout << "Intern creates " << form << std::endl;
	return (new_form);

}
