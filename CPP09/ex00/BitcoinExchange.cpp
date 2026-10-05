/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:07:17 by diespino          #+#    #+#             */
/*   Updated: 2026/10/02 19:04:21 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {

	std::ifstream	infile("data.csv");
	std::string	line;

	if (!infile.is_open())
	{
		std::cout << "Error: missing file: data.csv" << std::endl;
		return ;
	}
	while (std::getline(infile, line))
	{
		std::size_t	found = line.find_last_of(",");
		std::string	alias = line.substr(0, found);
		std::string	tmp = line.substr(found + 1, std::string::npos);
		float		num = std::atof(tmp.c_str());

		_data[alias] = num;
	}
	infile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {*this = other;}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {

	if (this != &other)
		_data = other._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void) {}

void	BitcoinExchange::print_data(void) {

	std::map<std::string, float>::iterator	it;

	for(it = _data.begin(); it != _data.end(); it++)
		std::cout << it->first << " => " << it->second << std::endl;
}

bool	parse_line(std::string line)
{
	std::size_t	found = line.find(" | ");
	if (found == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	}
	for (int i = 0; line[i]; i++ )
	{
		if (std::isalpha(line[i]))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			return (false);
		}
		if (!std::isdigit(line[i]))
		{
			if (line[i] != ' ' && line[i] != '.' && line[i] != '|' && line[i] != '-')
			{
				std::cout << "Error: bad input => " << line << std::endl;
				return (false);
			}
		}
	}
	return (true);
}

bool	parse_date(std::string	date)
{
	std::size_t	found = date.find('-');
	std::string	month = date.substr(found + 1, 2);
	std::string     day;

	if (!std::isdigit(date[0]))
		return (false);

	if (atoi(month.c_str()) > 12 || atoi(month.c_str()) < 0)
		return (false);

	found = date.find_last_of('-');
	day = date.substr(found + 1, std::string::npos);
	
	if (atoi(day.c_str()) > 31 || atoi(month.c_str()) < 0)
		return (false);

	return (true);
}

void	BitcoinExchange::process_file(std::string file) {

	if (_data.empty())
		return ;
	std::ifstream	infile(file.c_str());

	if (!infile.is_open())
	{
		std::cout << "Error opening file: " << file << std::endl;
		return ;
	}

	std::string	line;

	while (std::getline(infile, line))
	{
		if (line == "date | value")
			continue ;
		if (!parse_line(line))
			continue ;
		std::size_t	found = line.find(" | ");
		std::string	date = line.substr(0, found);
		if (!parse_date(date))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}

		std::string	tmp = line.substr(found + 3, std::string::npos);
		float		value = std::atof(tmp.c_str());

		if (value > 1000 || value < 0)
		{
			if (value > 1000)
				std::cout << "Error: too large number" << std::endl;
			if (value < 0)
				std::cout << "Error: not a positive number" << std::endl;
			continue ;
		}

		std::map<std::string, float>::iterator	it = _data.upper_bound(date);

		if (it == _data.begin())
			std::cout << "Error: no previous date available" << std::endl;
		else
		{
			--it;
			std::cout
				<< date << " => " << value << " = "
				<< value * it->second << std::endl;
		}
	}
	infile.close();
}
