/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:22:20 by diespino          #+#    #+#             */
/*   Updated: 2026/06/16 18:49:00 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137) {_target = "Someone?";}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137) {_target = target;}
	
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other) {*this = other;}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

std::string	ShrubberyCreationForm::getTarget(void) const {return (_target);}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (beExecuted(executor))
		throw (GradeTooLowException());
	std::cout
		<< executor.getName()
		<< " executed the "
		<< this->getName() << std::endl;
	
	std::ofstream	outfile;
	std::string	new_file = this->getTarget();

	new_file.append("_shrubbery");
	outfile.open(new_file.c_str(), std::ofstream::out | std::ofstream::trunc);
	
	if (!outfile.is_open())
	{
		std::cout << "Error openingg file: " << new_file << std::endl;
		return ;
	}
	outfile 
		<< "\n    *         *         *         *\n"
		<< "   /.\\       /.\\       /.\\       /.\\\n"
		<< "  /o..\\     /o..\\     /o..\\     /o..\\\n"
		<< "  /..o\\     /..o\\     /..o\\     /..o\\\n"
		<< " /.o..o\\   /.o..o\\   /.o..o\\   /.o..o\\\n"
		<< " /...o.\\   /...o.\\   /...o.\\   /...o.\\\n"
		<< "/..o....\\ /..o....\\ /..o....\\ /..o....\\\n"
		<< "^^^[_]^^^ ^^^[_]^^^ ^^^[_]^^^ ^^^[_]^^^\n"
/*		<< "\n    *     " << "    *     " << "    *     " << "    *\n"
		<< "   /.\\    " << "   /.\\    " << "   /.\\    " << "   /.\\\n"
		<< "  /o..\\   " << "  /o..\\   " << "  /o..\\   " << "  /o..\\\n"
		<< "  /..o\\   " << "  /..o\\   " << "  /..o\\   " << "  /..o\\\n"
		<< " /.o..o\\  " << " /.o..o\\  " << " /.o..o\\  " << " /.o..o\\\n"
		<< " /...o.\\  " << " /...o.\\  " << " /...o.\\  " << " /...o.\\\n"
		<< "/..o....\\ " << "/..o....\\ " << "/..o....\\ " << "/..o....\\\n"
		<< "^^^[_]^^^ " << "^^^[_]^^^ " << "^^^[_]^^^ " << "^^^[_]^^^\n"*/
		<< std::endl;
	outfile.close();
}
