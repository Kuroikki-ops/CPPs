/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:44:06 by diespino          #+#    #+#             */
/*   Updated: 2026/06/01 15:55:48 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "\n========{ Basic test }========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Bureaucrat      b("Bob", 150);
		Bureaucrat	c;

		Form		aa("Soul Contract", 140, 40);
		Form		bb("A3-54", 5, 120);
		Form		cc;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		
		std::cout 
			<< "\nForm " << aa << ": Sign Grade [" << aa.getGradeValue()
			<< "] | Exec. Grade [" << aa.getExecuteValue() << "]" 
			<< "] | Signed [" << aa.getFormStatus() << "]" << std::endl;
		std::cout 
			<< "\nForm " << bb << ": Sign Grade [" << bb.getGradeValue()
			<< "] | Exec. Grade [" << bb.getExecuteValue() << "]"
			<< "] | Signed [" << bb.getFormStatus() << "]" << std::endl;
		std::cout 
			<< "\nForm " << cc << ": Sign Grade [" << cc.getGradeValue()
			<< "] | Exec. Grade [" << cc.getExecuteValue() << "]"
			<< "] | Signed [" << bb.getFormStatus() << "]\n" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n========{ Copy test }========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Bureaucrat	b;
		Bureaucrat      c(a);

		b = a;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl << std::endl;

		Form		aa("Soul Contract", 5, 120);
		Form		bb;
		Form		cc(aa);

		bb = aa;

		std::cout << aa << ": Grade [" << aa.getGradeValue() << "] | Exec. [" << aa.getExecuteValue() << "]" << std::endl;
		std::cout << bb << ": Grade [" << bb.getGradeValue() << "] | Exec. [" << bb.getExecuteValue() << "]" << std::endl;
		std::cout << cc << ": Grade [" << cc.getGradeValue() << "] | Exec. [" << cc.getExecuteValue() << "]" << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
/*//
	std::cout << "\n======{ Increment test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 40);
		Form		test("Soul Contract", 50, 20);

		std::cout << a << std::endl;
		std::cout 
			<< "\nForm " << test << ": Sign Grade [" << test.getGradeValue() 
			<< "] | Exec. Grade [" << test.getExecuteValue() << "]\n" << std::endl;
		a.signForm(test);
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat	b("Bob", 50);
		
		b.incrementGrade();
		std::cout << b;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat      c("Jim", 150);

		c.incrementGrade();
		std::cout << c;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n======{ Decrement test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);

		a.decrementGrade();
		std::cout << a;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat	b("Bob", 50);
		
		b.decrementGrade();
		std::cout << b;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat      c("Jim", 150);

		c.decrementGrade();
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;
*/	
	return (0);
}
