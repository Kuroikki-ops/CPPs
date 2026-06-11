/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 12:47:10 by diespino          #+#    #+#             */
/*   Updated: 2026/06/11 14:04:40 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) 
	: AForm("PresidentialPardonForm", 25, 5) {_target = "Someone?";}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5) {_target = target;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other) {*this = other;}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

std::string	PresidentialPardonForm::getTarget(void) const {return (_target);}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) {

	std::cout 
		<< "Bureaucrat [" << executor.getName() 
		<< "] | Grade [" << executor.getGrade() 
		<< "]: has executed the Form " << this->getName() << "\n" << std::endl;

	std::cout 
		<< "Informs that " << this->getTarget() 
		<< " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
