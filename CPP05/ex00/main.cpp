/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:44:06 by diespino          #+#    #+#             */
/*   Updated: 2026/05/29 19:41:31 by diespino         ###   ########.fr       */
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
		
		std::cout << a;
		std::cout << b;
		std::cout << c;
	}
	catch (std::exception& e) {std::cout << e.what() << std::endl;}
//
	std::cout << "\n======{ Increment test }======\n" << std::endl;
	try {
		Bureaucrat	a("Larry", 1);

		a.incrementGrade();
		std::cout << a;
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
	
	return (0);
}
