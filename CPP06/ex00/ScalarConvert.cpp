
#include <iostream>
#include <sstream>
#include <string>
#include <locale>
#include <cstdlib>

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
	if (literal.length() == 1 && std::isprint(literal[0]))
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

double	toDouble(const std::string& literal)
{
	if ((literal[0] == '\'') && (literal[literal.size() - 1] == '\''))
		return (static_cast<double>(literal[1]));
	else if (std::isprint(literal[0]) && !std::isdigit(literal[0]))
		return (static_cast<double>(literal[0]));
	return (std::atof(literal.c_str()));
}

void	ScalarConvert::convert(const std::string& literal) {

	if (!isValid(literal))
	{
		std::cout << "ARG no valido xd" << std::endl;
		return ;
	}
	
// lietaral(string)	--> DOUBLE(Decimales)
// 				--> INT(Numero)
// 				--> CHAR(ASCII)
//					--> FLOAT(+f)

	double	val = toDouble(literal);
	int	num = static_cast<int>(val);// falta intMAX | intMIN
	char	print = static_cast<char>(val);// falta (0-126) 

	std::cout
		<< "ARG   : " << literal
		<< "\n\nDOUBLE: " << val
		<< "\nINT   : " << num
		<< "\nCHAR  : " << print
		<< "\nTodo gucci!!" << std::endl;
}
