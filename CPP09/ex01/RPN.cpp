
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <stack>

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN& other) {*this = other;}

RPN&	RPN::operator=(const RPN& other) {

	(void)other; 
	return (*this);
}

RPN::~RPN(void) {}

void	RPN::process(std::string operation) {

	std::istringstream	input(operation);
	std::stack<int>		num;
	std::string			token;

	while (input >> token)
	{
		if (token.size() == 1 && std::isdigit(token[0]))
			num.push(token[0] - '0');
		else if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if (num.size() < 2)
			{
				std::cerr << "Error: input error: " << operation << std::endl;
				return ;
			}
			int	right = num.top();
			num.pop();
			int	left = num.top();
			num.pop();

			if (token == "+")
				num.push(left + right);
			else if (token == "-")
				num.push(left - right);
			else if (token == "*")
				num.push(left * right);
			else if (token == "/")
			{
				if (right == 0)
				{
					std::cerr << "Error: can't divide by 0" << std::endl;
					return ;
				}
				num.push(left / right);
			}
		}
	}
	if (num.size() != 1)
	{
		std::cerr << "Error: input error: " << operation << std::endl;
		return ;
	}
	std::cout << "Result: " << num.top() << std::endl;
}
