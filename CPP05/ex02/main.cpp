/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:44:06 by diespino          #+#    #+#             */
/*   Updated: 2026/06/11 13:57:26 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try {
		Bureaucrat		a("Larry", 1);
		PresidentialPardonForm	aa("Bob");
		
		std::cout 
			<< a << "\n\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n" << std::endl;

		a.signForm(aa);

		std::cout 
			<< "\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n" << std::endl;

		aa.execute(a);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
/*	std::cout << "\n========{ Basic test }========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Bureaucrat      b("Bob", 50);
		Bureaucrat	c;

		Form		aa("Soul Contract", 140, 40);
		Form		bb("A3-54", 5, 120);
		Form		cc;

		
		std::cout 
			<< a << "\n\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() << "]" 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n" << std::endl;

		a.signForm(aa);

		std::cout 
			<< "\nForm: " << aa 
			<< "\n\n * Sign Grade: [" << aa.getGradeValue()
			<< "]\n * Exec. Grade: [" << aa.getExecuteValue() << "]" 
			<< "]\n * Signed [" << aa.getFormStatus() << "]\n" << std::endl;

		std::cout << "------------------------------\n" << std::endl;

		std::cout 
			<< b << "\n\nForm: " << bb 
			<< "\n\n * Sign Grade: [" << bb.getGradeValue()
			<< "]\n * Exec. Grade: [" << bb.getExecuteValue() << "]"
			<< "]\n * Signed: [" << bb.getFormStatus() << "]\n" << std::endl;

		b.signForm(bb);

		std::cout 
			<< "\nForm: " << bb 
			<< "\n\n * Sign Grade: [" << bb.getGradeValue()
			<< "]\n * Exec. Grade: [" << bb.getExecuteValue() << "]"
			<< "]\n * Signed: [" << bb.getFormStatus() << "]\n" << std::endl;

		std::cout << "------------------------------\n" << std::endl;
	
		std::cout 
			<< c << "\n\nForm " << cc 
			<< "\n\n * Sign Grade: [" << cc.getGradeValue()
			<< "]\n * Exec. Grade: [" << cc.getExecuteValue() << "]"
			<< "]\n * Signed: [" << cc.getFormStatus() << "]\n" << std::endl;

		c.signForm(cc);

		std::cout 
			<< "\nForm " << cc 
			<< "\n\n * Sign Grade: [" << cc.getGradeValue()
			<< "]\n * Exec. Grade: [" << cc.getExecuteValue() << "]"
			<< "]\n * Signed: [" << cc.getFormStatus() << "]\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n======={ Invalid test }=======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 0);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat	a("Larry", 151);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Form		aa("Soul Contract", 0, 40);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Form		aa("Soul Contract", 151, 40);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Form		aa("Soul Contract", 1, 0);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Form		aa("Soul Contract", 150, 151);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n\n======{ Increment test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);

		std::cout << a << "\n";
		a.incrementGrade();
		std::cout << a << "\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat	b("Bob", 50);
		
		std::cout << b << "\n";
		b.incrementGrade();
		std::cout << b << "\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat      c("Jim", 150);

		std::cout << c << "\n";
		c.incrementGrade();
		std::cout << c << "\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
//
	std::cout << "\n======{ Decrement test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);

		std::cout << a << "\n";
		a.decrementGrade();
		std::cout << a << "\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat	b("Bob", 50);
		
		std::cout << b << "\n";
		b.decrementGrade();
		std::cout << b << "\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat      c("Jim", 150);

		std::cout << c << "\n";
		c.decrementGrade();
		std::cout << c << "\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
//
	std::cout << "\n========{ Copy test }=========\n" << std::endl;
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
