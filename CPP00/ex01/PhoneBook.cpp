/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:52:20 by diespino          #+#    #+#             */
/*   Updated: 2026/05/06 14:06:45 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

bool	PhoneBook::search_contact(void)
{
	std::string	name;
	std::string	last;
	std::string	nick;

	if (_num == 0)
	{
		std::cout << "  >> No contacts saved!!\n" << std::endl;
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
	      	std::cout << std::setw(10) << name << "|";
		std::cout << std::setw(10) << last << "|";
		std::cout << std::setw(10) << nick << "|" << std::endl;
		indx_tab++;
	}
	std::cout << std::endl;// ??
	return (true);
}
