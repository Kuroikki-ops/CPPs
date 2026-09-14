/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:38:44 by diespino          #+#    #+#             */
/*   Updated: 2026/09/14 17:48:36 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void) {

	Array<int>		test1;
	Array<int>		test2(4);
	Array<char>		test3(4);
	Array<std::string>	test4(4);

	std::cout << "\n==={ Basic TEST }===\n" << std::endl;

	try {
		for (unsigned int i = 0; i < test2.size(); i++)
			test2[i] = i;

		std::cout << "INT   | SIZE(" << test2.size() << ") | ARRAY { ";
		for (unsigned int i = 0; i < test2.size(); i++)
			std::cout << test2[i] << " ";
		std::cout << "}" << std::endl;
	}
	catch (const std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

/******************************************************************************/

	try {
		char	array[] = {'a', 'b', 'c', 'd'};

		for (unsigned int i = 0; i < test3.size(); i++)
			test3[i] = array[i];

		std::cout << "CHAR  | SIZE(" << test3.size() << ") | ARRAY { ";
		for (unsigned int i = 0; i < test3.size(); i++)
			std::cout << test3[i] << " ";
		std::cout << "}" << std::endl;
	}
	catch (const std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

/******************************************************************************/

	try {
		std::string	array[] = {"Yes,", "I'm", "a", "test."};

		for (unsigned int i = 0; i < test4.size(); i++)
			test4[i] = array[i];

		std::cout << "STR   | SIZE(" << test4.size() << ") | ARRAY { ";
		for (unsigned int i = 0; i < test4.size(); i++)
			std::cout << test4[i] << " ";
		std::cout << "}" << std::endl;
	}
	catch (const std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

/******************************************************************************/

	try {
		std::cout << "EMPTY | SIZE(" << test1.size() << ") | ARRAY { ";
		for (unsigned int i = 0; i < test1.size(); i++)
			std::cout << test1[i] << " ";
		std::cout << "}" << std::endl;
	}
	catch (const std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

/******************************************************************************/

	std::cout << "\n==={ Copy TEST }===\n" << std::endl;

	Array<int>	src(12);
	for (unsigned int i = 0; i < src.size(); i++)
		src[i] = i;
	std::cout << "SRC   | SIZE(" << src.size() << ") | ARRAY { ";
	for (unsigned int i = 0; i < src.size(); i++)
		std::cout << src[i] << " ";
	std::cout << "}" << std::endl;
//
	Array<int>      copy(src);
	std::cout << "COPY  | SIZE(" << copy.size() << ") | ARRAY { ";
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << "}" << std::endl;
//	
	Array<int>      dp_copy;
	dp_copy = src;
	std::cout << "DP_CP | SIZE(" << dp_copy.size() << ") | ARRAY { ";
	for (unsigned int i = 0; i < dp_copy.size(); i++)
		std::cout << dp_copy[i] << " ";
	std::cout << "}" << std::endl;

/******************************************************************************/

	std::cout << "\n==={ Error TEST }===\n" << std::endl;

	Array<int>	error(4);

	try {
		for (unsigned int i = 0; i < (error.size() + 1); i++)
			error[i] = i;

		for (unsigned int i = 0; i < error.size(); i++)
			std::cout << error[i] << " ";
		std::cout << "}" << std::endl;
	}
	catch (const std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}
	try {
		for (unsigned int i = 0; i < error.size(); i++)
			error[i] = i;

		for (unsigned int i = 0; i < (error.size() + 1); i++)
			std::cout << error[i] << " ";
		std::cout << "}" << std::endl;
	}
	catch (const std::exception& e) {

		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	return (0);
}
