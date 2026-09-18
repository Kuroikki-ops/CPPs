/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:28:45 by diespino          #+#    #+#             */
/*   Updated: 2026/09/18 17:50:12 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include <vector>
#include <algorithm>

#include "Span.hpp"

/*
 *Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands of calls to addNumber() is so annoying. Implement a member function
to add multiple numbers to your Span in a single call.
 * */

void	printContainer(std::vector<unsigned int> v) {

	std::vector<unsigned int>::iterator	it;

	std::cout << "{ ";
	for (it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << "}" << std::endl;
}

int	main(void) {

	std::srand(std::time(NULL));

	try {
		Span	test = Span(5);

		std::cout << std::endl;
		test.addNumber(6);
		test.addNumber(3);
		test.addNumber(17);
		test.addNumber(9);
		test.addNumber(11);
		printContainer(test.getVector());
		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Span	test(5);

		std::cout << std::endl;
		for (unsigned int i = 0; i < test.getLen(); i++)
			test.addNumber(std::rand());

		printContainer(test.getVector());
		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Span	test(20);

		std::cout << std::endl;
		for (unsigned int i = 0; i < test.getLen(); i++)
			test.addNumber(std::rand());
		
		printContainer(test.getVector());
		
		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		Span	test(10000);

		std::cout << std::endl;
		for (unsigned int i = 0; i < test.getLen(); i++)
			test.addNumber(std::rand());

		printContainer(test.getVector());

		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Span	test(10);

		for (unsigned int i = 0; i < (test.getLen() + 1); i++)
			test.addNumber(std::rand());

		std::cout << std::endl;
		printContainer(test.getVector());

		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Span	test(10);

		for (unsigned int i = 0; i < 2; i++)
			test.addNumber(std::rand());

		std::cout << std::endl;
		printContainer(test.getVector());

		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Span	test;

		for (unsigned int i = 0; i < 2; i++)
			test.addNumber(std::rand());

		std::cout << std::endl;
		printContainer(test.getVector());

		std::cout
			<< "Shortest: " << test.shortestSpan()
			<< "\nLongest : " << test.longestSpan()
			<< "\n" << std::endl;
	} catch (std::exception& e) {

		std::cout << "\nError: " << e.what() << std::endl;
	}

	return (0);
}
