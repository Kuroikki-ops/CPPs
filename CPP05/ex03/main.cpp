/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:44:06 by diespino          #+#    #+#             */
/*   Updated: 2026/10/13 15:29:06 by diespino         ###   ########.fr       */
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

		std::cout << a << "\n\nForm Name:  " << formName  << "\n" << std::endl;

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
		std::string	target = "Bender";

		std::cout << a << "\n\nForm Name:  " << formName  << "\n" << std::endl;

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

		std::cout << a << "\n\nForm Name:  " << formName  << "\n" << std::endl;

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
	std::cout << "\n======={ Invalid test }=======\n" << std::endl;
	try {
		Bureaucrat	a("Jim", 1);
		Intern		b;
		AForm*		form;

		std::string	formName = "RobotoForm";
		std::string	target = "Bender";

		std::cout << a << "\n\nForm Name:  " << formName  << "\n" << std::endl;

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

	return (0);
}
