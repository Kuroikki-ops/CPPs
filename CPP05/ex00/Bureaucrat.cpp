/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:32:17 by diespino          #+#    #+#             */
/*   Updated: 2026/05/29 19:39:22 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"

//Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {

	if (grade > 150)
		throw (GradeTooHighException());
	if (grade < 0)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {*this = other;}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {

	if (this != &other)
		_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high. Grade must be between 1 and 150!!");}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low. Grade must be between 1 and 150!!");}

std::string Bureaucrat::getName(void) const {return (_name);}

int Bureaucrat::getGrade(void) const {return (_grade);}

void	Bureaucrat::incrementGrade(void) {

	if ((_grade - 1) < 1)
		throw (GradeTooLowException());
	_grade--;
}

void	Bureaucrat::decrementGrade(void) {

	if ((_grade + 1) > 150)
		throw (GradeTooHighException());
	_grade++;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureau)
{
	out << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << std::endl;
	return (out);
}
