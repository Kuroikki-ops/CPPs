/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:44:06 by diespino          #+#    #+#             */
/*   Updated: 2026/06/17 18:24:57 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "\n========{ Basic test }========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Intern		b;
		AForm*		form;

		std::string	formName = "ShrubberyCreationForm";
		std::string	target = "New_forest";

		std::cout << a << "\n" << std::endl;

		form = b.makeForm(formName, target);

		std::cout 
			<< "\nForm: " << form->getName() 
			<< "\n\n * Sign Grade: [" << form->getGradeValue()
			<< "]\n * Exec. Grade: [" << form->getExecuteValue() 
			<< "]\n * Signed [" << form->getFormStatus() << "]\n" << std::endl;

		a.signForm(*form);

		std::cout 
			<< "\nForm: " << form->getName()
			<< "\n\n * Sign Grade: [" << form->getGradeValue()
			<< "]\n * Exec. Grade: [" << form->getExecuteValue() 
			<< "]\n * Signed [" << form->getFormStatus() << "]\n" << std::endl;

		a.executeForm(*form);
		
		delete form;
		
		std::cout << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	std::cout << "------------------------------\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Intern		b;
		AForm*		form;

		std::string	formName = "RobotomyRequestForm";
		std::string	target = "BOB";

		std::cout << a << "\n" << std::endl;

		form = b.makeForm(formName, target);

		std::cout 
			<< "\nForm: " << form->getName() 
			<< "\n\n * Sign Grade: [" << form->getGradeValue()
			<< "]\n * Exec. Grade: [" << form->getExecuteValue() 
			<< "]\n * Signed [" << form->getFormStatus() << "]\n" << std::endl;

		a.signForm(*form);

		std::cout 
			<< "\nForm: " << form->getName()
			<< "\n\n * Sign Grade: [" << form->getGradeValue()
			<< "]\n * Exec. Grade: [" << form->getExecuteValue() 
			<< "]\n * Signed [" << form->getFormStatus() << "]\n" << std::endl;

		a.executeForm(*form);
		
		delete form;
		
		std::cout << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	std::cout << "------------------------------\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Intern		b;
		AForm*		form;

		std::string	formName = "PresidentialPardonForm";
		std::string	target = "BOB";

		std::cout << a << "\n" << std::endl;

		form = b.makeForm(formName, target);

		std::cout 
			<< "\nForm: " << form->getName() 
			<< "\n\n * Sign Grade: [" << form->getGradeValue()
			<< "]\n * Exec. Grade: [" << form->getExecuteValue() 
			<< "]\n * Signed [" << form->getFormStatus() << "]\n" << std::endl;

		a.signForm(*form);

		std::cout 
			<< "\nForm: " << form->getName()
			<< "\n\n * Sign Grade: [" << form->getGradeValue()
			<< "]\n * Exec. Grade: [" << form->getExecuteValue() 
			<< "]\n * Signed [" << form->getFormStatus() << "]\n" << std::endl;

		a.executeForm(*form);
		
		delete form;
		
		std::cout << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
/*	std::cout << "\n======={ Invalid test }=======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 0);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat	a("Larry", 151);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << "\n------------------------------\n" << std::endl;
	try {
		Bureaucrat		a("Bob_1", 150);
		Bureaucrat		b("Bob_2", 140);
		ShrubberyCreationForm	aa("New_Forest");
		
		std::cout 
			<< a << "\n" << b
			<< "\n\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n"
			<< std::endl;

		std::cout << std::endl;
		a.signForm(aa);
		a.executeForm(aa);
		std::cout << std::endl;
		b.signForm(aa);

		std::cout 
			<< "\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n"
			<< std::endl;

		b.executeForm(aa);
		std::cout << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << "------------------------------\n" << std::endl;
	try {
		Bureaucrat		a("Jim_1", 80);
		Bureaucrat		b("Jim_2", 60);
		RobotomyRequestForm	aa("Ruffus");
		
		std::cout 
			<< a << "\n" << b
			<< "\n\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n"
			<< std::endl;

		std::cout << std::endl;
		a.signForm(aa);
		a.executeForm(aa);
		std::cout << std::endl;
		b.signForm(aa);

		std::cout 
			<< "\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n"
			<< std::endl;

		b.executeForm(aa);
		std::cout << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << "------------------------------\n" << std::endl;
	try {
		Bureaucrat		a("Larry_1", 30);
		Bureaucrat		b("Larry_2", 10);
		PresidentialPardonForm	aa("Bob");
		
		std::cout 
			<< a << "\n" << b
			<< "\n\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n"
			<< std::endl;

		std::cout << std::endl;
		a.signForm(aa);
		a.executeForm(aa);
		std::cout << std::endl;
		b.signForm(aa);

		std::cout 
			<< "\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n"
			<< std::endl;

		b.executeForm(aa);
		std::cout << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
*//*	std::cout << "\n========{ Copy test }=========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Bureaucrat	b;
		Bureaucrat      c(a);

		b = a;

		std::cout 
			<< a << "\n"
			<< b << "\n"
			<< c << "\n" << std::endl;

		Form		aa("Soul Contract", 5, 120);
		Form		bb;
		Form		cc(aa);

		bb = aa;

		std::cout 
			<< "\nForm " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() << "]"
			<< "]\n * Signed: [" << aa.getFormStatus() << "]\n" << std::endl;

		std::cout 
			<< "\nForm " << bb
			<< "\n\n * Sign Grade: [" << bb.getGradeValue()
			<< "]\n * Exec. Grade: [" << bb.getExecuteValue() << "]"
			<< "]\n * Signed: [" << bb.getFormStatus() << "]\n" << std::endl;
		
		std::cout 
			<< "\nForm " << cc 
			<< "\n\n * Sign Grade: [" << cc.getGradeValue()
			<< "]\n * Exec. Grade: [" << cc.getExecuteValue() << "]"
			<< "]\n * Signed: [" << cc.getFormStatus() << "]\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
*/
	return (0);
}
