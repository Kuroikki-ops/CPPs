/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:49:26 by diespino          #+#    #+#             */
/*   Updated: 2026/06/16 18:26:14 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <ctime>
#include <cstdlib>

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45) {_target = "Someone?";}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45) {_target = target;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other) {*this = other;}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

std::string	RobotomyRequestForm::getTarget(void) const {return (_target);}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (beExecuted(executor))
		throw (GradeTooLowException());
	std::cout
		<< executor.getName()
		<< " executed the "
		<< this->getName() << std::endl;
	std::cout
		<< "\nBeginning robotomy...\n"
		<< "\n* Drilling noise *\n"
		<< "* Drilling noise *\n" << std::endl;

	int	num;
	
	srand(time(0));
	num = rand() % 10;
	if (num % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized!!" << std::endl;
	else
		std::cout << "Robotomy failed!" << std::endl;
}
