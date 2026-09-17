/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:28:45 by diespino          #+#    #+#             */
/*   Updated: 2026/09/17 19:55:16 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#include "Span.hpp"

void	printContainer(std::vector<unsigned int> v) {

	std::vector<unsigned int>::iterator	it;

	for (it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main(void) {

	Span	span(5);

	span.addNumber(14);
	span.addNumber(29);
	span.addNumber(10);
	span.addNumber(1);
	span.addNumber(3);

	printContainer(span.getVector());

	std::cout
		<< "Shortest: " << span.shortestSpan()
		<< "\nLongest : " << span.longestSpan()
		<< std::endl;

	return (0);
}
