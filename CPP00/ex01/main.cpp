/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:52:13 by diespino          #+#    #+#             */
/*   Updated: 2026/05/06 15:28:05 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;


	std::cout << "\n================+{ PHONEBOOK }+================\n" << std::endl;
	std::cout << "	--- Wellcome to PhoneBook! ---\n" << std::endl;
	std::cout << "	  CMD: [ADD] [SEARCH] [EXIT]\n" << std::endl;
	while (true)
	{
		std::cout << " Please, enter command: ";// << std::endl;
		std::getline (std::cin, input);
		if (!input.compare("ADD"))
		{
			std::cout << "\n  > Adding new contact...\n" << std::endl;
			if (!phonebook.add_contact())
				break ;
		}
		else if (input == "SEARCH")
		{
			std::cout << "\n  > Searching contacts..." << std::endl;
			if (!phonebook.search_contact())
				break ;
		}
		else if (input == "EXIT")
		{
			std::cout << "\n	--- Have a good day!! ---\n" << std::endl;
			break ;
		}
		else
			std::cout << "\n  > Must choose betwen [ADD] [SEARCH] [EXIT]\n" << std::endl;
	}
	return (0);
}
