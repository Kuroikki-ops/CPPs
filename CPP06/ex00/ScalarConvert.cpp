
#include <iostream>
#include <string>
#include <locale>

#include "ScalarConvert.hpp"

bool	isValid(const std::string& literal) {

	if (literal.empty())
		return (false);
	
	// nan/nanf | -inf/-inff | +inf/+inf
	if (literal == "nan" || literal == "nanf"
			|| literal == "-inf" || literal == "-inff"
			|| literal == "+inf" || literal == "+inff")
		return (true);
	std::cout << "\nNo nan/nanf | -inf/-inff | +inf/+inf\n" << std::endl;

	// char
/*	if (literal.length() == 3
			&& ((literal[0] == '\'' && literal[2] == '\'') 
			|| (literal[0] == '\"' && literal[2] == '\"')))
	{
		std::cout << "Son 3\n" << std::endl;
		return (true);
	}*/
	if (literal.length() == 1 && std::isalpha(literal[0]))
		return (true);
	if (literal.length() == 3)
	{ 
		if (literal[0] == '\'' && literal[2] == '\'')
			return (true);
	}
	std::cout << "No char\n" << std::endl;
	
	// int
	size_t	i = 0;
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (true)
	{
		if (!std::isdigit(literal[i]) && i != literal.size())
			break ;
		if (i == literal.size())
			return (true);
		i++;
	}
	std::cout << "No int\n" << std::endl;
	
	// double
	if (literal[i] == '.')
		i++;
	while (true)
	{
		if (!std::isdigit(literal[i]) && i != literal.size())
			break ;
		if (i == literal.size())
			return (true);
		i++;
	}
	std::cout << "No double\n" << std::endl;
	
	// float
	if (literal[i] == 'f' && i + 1 == literal.size())
		return (true);
	std::cout << "No float\n" << std::endl;
	return (false);
}

void	ScalarConvert::convert(const std::string& literal) {

	if (!isValid(literal))
	{
		std::cout << "ARG no valido xd" << std::endl;
		return ;
	}
	std::cout << "Todo gucci!!" << std::endl;
}
