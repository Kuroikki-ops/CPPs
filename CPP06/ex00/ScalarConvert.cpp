/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:41:24 by diespino          #+#    #+#             */
/*   Updated: 2026/09/03 17:13:56 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>
#include <limits>

#include "ScalarConvert.hpp"

bool	isValid(const std::string& literal) {

	bool	dot = false;
	size_t	i = 0;

	if (literal.empty())
		return (false);
	
	if (literal == "nan" || literal == "nanf"
			|| literal == "-inf" || literal == "-inff"
			|| literal == "+inf" || literal == "+inff")
		return (true);

	if (literal.length() == 1 && std::isprint(literal[i]))
		return (true);
	
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (i != literal.size() && std::isdigit(literal[i]))
		i++;
	if (i == literal.size())
		return (true);
	
	if (literal[i] == '.')
	{
		dot = true;
		i++;
		while (i != literal.size() && std::isdigit(literal[i]))
			i++;
		if (i == literal.size() && std::isdigit(literal[i - 1]))
			return (true);
	}
	
	if (dot == true && std::isdigit(literal[i - 1]))
	{
		if (literal[i] == 'f' && i + 1 == literal.size())
			return (true);
	}
	
	return (false);
}

double	toDouble(const std::string& literal)
{
	size_t	i = 0;

	if (literal[i] == '+' || literal[i] == '-')
		i++;
	if (std::isprint(literal[i]) && !std::isdigit(literal[i]))
		return (static_cast<double>(literal[i]));
	return (std::atof(literal.c_str()));
}

void	ScalarConvert::convert(const std::string& literal) {

	if (!isValid(literal))
		return ;
	if (literal == "nan" || literal == "nanf")
	{
		std::cout
			<< "char: impossible\n"
			<< "int: impossible\n"
			<< "foat: nanf\n"
			<< "double: nan"
			<< std::endl;
			return ;	
	}
	if (literal == "+inf" || literal == "+inff")
	{
		std::cout
			<< "char: impossible\n"
			<< "int: impossible\n"
			<< "foat: +inff\n"
			<< "double: +inf"
			<< std::endl;
			return ;	
	}
	if (literal == "-inf" || literal == "-inff")
	{
		std::cout
			<< "char: impossible\n"
			<< "int: impossible\n"
			<< "foat: -inff\n"
			<< "double: -inf"
			<< std::endl;
			return ;	
	}
	
	double	val = toDouble(literal);

	if (val < 0 || val > 127)
		std::cout << "char: impossible" << std::endl;
	else
	{
		char	ch = static_cast<char>(val);
		if (std::isprint(ch))
			std::cout << "char: '" << ch << "'" << std::endl;
		else
			std::cout << "char: non displayabe" << std::endl;
	}

	if (val < std::numeric_limits<int>::min()
			|| val > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(val) << std::endl;

	std::cout
		<< std::fixed << std::setprecision(1)
		<< "float: " << static_cast<float>(val) << "f\n"
		<< "double: " << val << std::endl;
}
