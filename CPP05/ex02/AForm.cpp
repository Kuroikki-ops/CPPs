/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:35:28 by diespino          #+#    #+#             */
/*   Updated: 2026/06/17 12:47:15 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm (void) : _name("Default-Form"), _signed(false), _grade(150), _execute(150) {}

AForm::AForm(const std::string name, const int grade, const int execute)
	: _name(name), _signed(false), _grade(grade), _execute(execute) {

	if (grade > 150)
		throw (GradeTooLowException());
	if (grade < 1)
		throw (GradeTooHighException());

	if (execute > 150)
		throw (GradeTooLowException());
	if (execute < 1)
		throw (GradeTooHighException());
}

AForm::AForm(const AForm& other)
	: _name(other._name), _grade(other._grade), _execute(other._execute) {*this = other;}

AForm&	AForm::operator=(const AForm& other) {

	if (this != &other)
		_signed = other._signed;
	return (*this);
}

AForm::~AForm(void) {}

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("grade is too high");}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("grade is too low");}

const char*	AForm::FormNotSigned::what() const throw() {
	return ("form is not signed");}

std::string	AForm::getName(void) const {return (_name);}

int		AForm::getGradeValue(void) const {return (_grade);}

int		AForm::getExecuteValue(void) const {return (_execute);}

bool		AForm::getFormStatus(void) const {return (_signed);}

void	AForm::beSigned(const Bureaucrat& bureau) {

	if (bureau.getGrade() > _grade)
		throw (GradeTooLowException());
	_signed = true;
}

void	AForm::isSigned(const AForm& form) const {

	if (!form._signed)
		throw (FormNotSigned());
}

bool	AForm::beExecuted(const Bureaucrat& bureau) const {

	if (bureau.getGrade() > this->getExecuteValue())
		return (true);
	return (false);
}

std::ostream&	operator<<(std::ostream& out, const AForm& form) {

	out << "[" << form.getName() << "]";
	return (out);
}
