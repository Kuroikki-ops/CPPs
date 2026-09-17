/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:35:04 by diespino          #+#    #+#             */
/*   Updated: 2026/09/17 17:48:09 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <vector>

#include "easyfind.hpp"

template <typename T>
void	printContainer(const T& container) {

	typename T::const_iterator	it;

	std::cout << "\nContainer values: ";
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it;
		if (it != container.end() - 1)
			std::cout << " ";
		else
			std::cout << "\n" << std::endl;
	}
}

int	main(void) {

	std::vector<int>		v;
	std::vector<int>::iterator	it;

	int	v_len = 15;
	int	test1 = 9;
	int	test2 = 20;

	for (int i = 0; i < v_len; i++)
		v.push_back(i);
	
	printContainer(v);

	try {
		std::cout << "Searching value(" << test1 << ")..." << std::endl;
		it = easyFind(v, test1);
		std::cout << "> Value found: " << *it << "\n" << std::endl;
	}
	catch (const std::exception& e){

		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		std::cout << "Searching value(" << test2 << ")..." << std::endl;
		it = easyFind(v, test2);
		std::cout << "> Value found: " << *it << "\n" << std::endl;
	}
	catch (const std::exception& e){

		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	return (0);
}
