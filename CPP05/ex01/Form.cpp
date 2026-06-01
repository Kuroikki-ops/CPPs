/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:35:28 by diespino          #+#    #+#             */
/*   Updated: 2026/06/01 15:39:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form (void) : _name("Default-Form"), _signed(false), _grade(150), _execute(150) {}

Form::Form(const std::string name, const int grade, const int execute)
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

Form::Form(const Form& other)
	: _name(other._name), _grade(other._grade), _execute(other._execute) {*this = other;}

Form&	Form::operator=(const Form& other) {

	if (this != &other)
		_signed = other._signed;
	return (*this);
}

Form::~Form(void) {}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Form grade is too high");}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Form grade is too low");}

std::string	Form::getName(void) const {return (_name);}

int		Form::getGradeValue(void) const {return (_grade);}

int		Form::getExecuteValue(void) const {return (_execute);}

bool		Form::getFormStatus(void) const {return (_signed);}

void	Form::beSigned(const Bureaucrat& bureau) {

	if (bureau.getGrade() > _grade)
		throw (GradeTooLowException());
	_signed = true;
}

std::ostream&	operator<<(std::ostream& out, const Form& form) {

	out << "[" << form.getName() << "]";
	return (out);
}
