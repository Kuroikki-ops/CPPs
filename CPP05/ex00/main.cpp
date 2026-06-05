/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:44:06 by diespino          #+#    #+#             */
/*   Updated: 2026/06/05 13:59:01 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\n========{ Basic test }========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Bureaucrat	b("Bob", 50);
		Bureaucrat      c("Jim", 150);
		Bureaucrat	d;

		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << d;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n======={ Invalid test }=======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 0);

		std::cout << a;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	try {
		Bureaucrat	a("Larry", 151);

		std::cout << a;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n======{ Increment test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);

		std::cout << a;
		a.incrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat	b("Bob", 50);
		
		std::cout << b;
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat      c("Jim", 150);

		std::cout << c;
		c.incrementGrade();
		std::cout << c;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
//
	std::cout << "\n======{ Decrement test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);

		std::cout << a;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat	b("Bob", 50);
		
		std::cout << b;
		b.decrementGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << "\n" << std::endl;}
	try {
		Bureaucrat      c("Jim", 150);

		std::cout << c;
		c.decrementGrade();
		std::cout << c << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
	std::cout << std::endl;
//
	std::cout << "========{ Copy test }========\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);
		Bureaucrat	b("Bob", 50);
		Bureaucrat      c(a);
		Bureaucrat	d;

		d = b;

		std::cout << a;
		std::cout << b;
		std::cout << c;
		std::cout << d << std::endl;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}

	return (0);
}
