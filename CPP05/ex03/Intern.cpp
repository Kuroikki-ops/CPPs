/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:58:05 by diespino          #+#    #+#             */
/*   Updated: 2026/10/13 15:18:45 by diespino         ###   ########.fr       */
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

static AForm*  ShrubberyForm(std::string& target) {return (new ShrubberyCreationForm(target));}
static AForm*  RobotomyForm(std::string& target) {return (new RobotomyRequestForm(target));}
static AForm*  PresidentialForm(std::string& target) {return (new PresidentialPardonForm(target));}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	std::string	form_type[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm*		(*function[3])(std::string&) = {&ShrubberyForm, &RobotomyForm, &PresidentialForm};
	int		i = 0;
	
	while (i < 3 && form != form_type[i])
		i++;
	if (i == 3)
		throw (AForm::FormNotExist());
	std::cout << "Intern creates " << form << std::endl;

	return (function[i](target));
}
