/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:52:08 by diespino          #+#    #+#             */
/*   Updated: 2026/05/06 14:00:34 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <cctype>
#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string	Contact::getFirstName(void) const
{
	std::string	str;

	if (_FirstName.size() > 9)
	{
		str = _FirstName.substr(0,9);
		str.push_back('.');
		return (str);
	}
//	else
//	{
//		str.append(_FirstName);
//		while (str.size() < 9)
//			str.push_back(' ');
//	}
	return (_FirstName);
}

std::string	Contact::getLastName(void) const
{
	std::string	str;

	if (_LastName.size() > 9)
	{
		str = _LastName.substr(0,9);
		str.push_back('.');
		return (str);
	}
//	else
//	{
//		str.append(_LastName);
//		while (str.size() < 9)
//			str.push_back(' ');
//	}
	return (_LastName);
}

std::string	Contact::getNickName(void) const
{
	std::string	str;

	if (_NickName.size() > 9)
	{
		str = _NickName.substr(0,9);
		str.push_back('.');
		return (str);
	}
//	else
//	{
//		str.append(_NickName);
//		while (str.size() < 9)
//			str.push_back(' ');
//	}
	return (_NickName);
}
/*
std::string	Contact::getPhoneNum(void) const
{
	return (_PhoneNum);
}

std::string	Contact::getSecret(void) const
{
	return (_Secret);
}*/

bool	Contact::setContact(void)
{
	_FirstName = "";
	_LastName = "";
	_NickName = "";
	_PhoneNum = "";
	_Secret = "";

	while (_FirstName.empty())
	{
		while (true)
		{
			std::cout << "	First Name: ";
			if(!std::getline (std::cin, _FirstName))
				return (false);
			size_t i = 0;
			while (i < _FirstName.size())
			{
				if (!std::isalpha(_FirstName[i]))
					break ;
				i++;
			}
			if (i == _FirstName.size())
				break ;
			std::cout << "  > Enter only alpha chars please" << std::endl;
		}
	}
	while (_LastName.empty())
	{
		while (true)
		{
			std::cout << "	Last Name: ";
			if(!std::getline (std::cin, _LastName))
				return (false);
			size_t i = 0;
			while (i < _LastName.size())
			{
				if (!std::isalpha(_LastName[i]))
					break ;
				i++;
			}
			if (i == _LastName.size())
				break ;
			std::cout << "  > Enter only alpha chars please" << std::endl;
		}
	}
	while (_NickName.empty())
	{
		std::cout << "	Nickname: ";
		if(!std::getline (std::cin, _NickName))
			return (false);
	}
	while (_PhoneNum.empty())
	{
		while (true)
		{
			std::cout << "	Phone Number: ";
			if(!std::getline (std::cin, _PhoneNum))
				return (false);
			size_t i = 0;
			while (i < _PhoneNum.size())
			{
				if (!std::isdigit(_PhoneNum[i]))
					break ;
				i++;
			}
			if (i == _PhoneNum.size())
				break ;
			std::cout << "  > Enter only nums please" << std::endl;
		}
	}
	while (_Secret.empty())
	{
		std::cout << "	Darkest Secret: ";
		if(!std::getline (std::cin, _Secret))
			return (false);
	}
	return (true);
}
