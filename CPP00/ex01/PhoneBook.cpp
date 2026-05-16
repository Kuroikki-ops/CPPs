/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:52:20 by diespino          #+#    #+#             */
/*   Updated: 2026/05/16 18:09:45 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _num(0) {}
PhoneBook::~PhoneBook(){}

bool	PhoneBook::add_contact(void)
{
	if (!_contact[_index].setContact())
		return (false);
	_index = (_index + 1) % 8;
	if (_num < 8)
		_num++;
	std::cout << "\n  > New contact added!\n" << std::endl;
	return (true);
}

std::string	trunc_data(std::string str)
{
	std::string	new_str;

	if (str.size() > 9)
	{
		new_str = str.substr(0,9);
		new_str.push_back('.');
		return (new_str);
	}
	return (str);	
}

bool	PhoneBook::search_contact(void)
{
	std::string	name;
	std::string	last;
	std::string	nick;
	std::string	input;

	if (_num == 0)
	{
		std::cout << "\n  >> No contacts saved!!\n" << std::endl;
		return (true);
	}
	std::cout << "\n  |" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" <<std::endl;
	std::cout << "  |----------|----------|----------|----------|" << std::endl;
	int	indx_tab = 1;
	for (int i = 0; i != _num; i++)
	{
		name = _contact[i].getFirstName();
		last = _contact[i].getLastName();
		nick = _contact[i].getNickName();

	      	std::cout << "  |" << std::setw(10) << indx_tab << "|";
	      	std::cout << std::setw(10) << trunc_data(name) << "|";
		std::cout << std::setw(10) << trunc_data(last) << "|";
		std::cout << std::setw(10) << trunc_data(nick) << "|" << std::endl;
		indx_tab++;
	}
	while (true)
	{
		std::cout << "\n Contact to disply: ";
		if (std::getline(std::cin, input) && input.size() == 1 && std::isdigit(input[0]))
		{
			std::cout << "\n  > Searching contact..." << std::endl;
			indx_tab = std::atoi(input.c_str()) - 1;
			if (indx_tab >= 0 && indx_tab < _num)
			{
				std::cout << "\n  First Name: " << _contact[indx_tab].getFirstName() <<std::endl;
				std::cout << "  Last Name: " << _contact[indx_tab].getLastName() <<std::endl;
				std::cout << "  Nickname: " << _contact[indx_tab].getNickName() <<std::endl;
				std::cout << "  Phone Number: " << _contact[indx_tab].getPhoneNum() <<std::endl;
				std::cout << "  Darkest Secret: " << _contact[indx_tab].getSecret() <<std::endl;
				break ;
			}
			else
				std::cout << "\n  >> Contact " << input << " doesn't exist!!\n";
		}
		std::cout << "\n  > Please enter a number of the [grid]" << std::endl;
	}
	std::cout << std::endl;
	return (true);
}
