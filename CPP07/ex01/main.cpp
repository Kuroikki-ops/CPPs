
#include <iostream>
#include <string>
#include <cctype>

#include "iter.hpp"

void	constLower(const std::string& str) {

	std::string	tmp = str;

	for (size_t i = 0; i < str.length(); i++) {
		
		tmp[i] = std::tolower(str[i]);
	}
	std::cout << tmp << " ";
}

void	toLower(std::string& str) {

	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
}

void	toUpper(char& ch) {ch = std::toupper(ch);}

void	constUpper(const char& ch) {

	char	tmp = std::toupper(ch);

	std::cout << tmp << " ";
}

void	increment(int& num) {num += 1;}

void	incr_const(const int& num) {

	int	tmp = num;

	tmp += 1;
	std::cout << tmp << " ";
}

void	intArrayTest(void) {

	int			nums[] = {0, 1, 2, 3, 4};
	const int	len = 5;

	std::cout << "\nINT Array: ";
	for (int i = 0; i < len; i++)
		std::cout << nums[i] << " ";
	std::cout << std::endl;

	std::cout << " > Iter executed!!";
	::iter(nums, len, increment);

	std::cout << "\nINT Array: ";
	for (int i = 0; i < len; i++)
		std::cout << nums[i] << " ";
	std::cout << std::endl;

	const int	c_nums[] = {0, 1, 2, 3, 4};
	const int	c_len = 5;

	std::cout << "\nConst INT Array: ";
	for (int i = 0; i < c_len; i++)
		std::cout << c_nums[i] << " ";
	std::cout << std::endl;

	std::cout << " > Iter executed!!";
	std::cout << "\nIncr. Const INT: ";
	::iter(c_nums, c_len, incr_const);

	std::cout << "\nConst INT Array: ";
	for (int i = 0; i < c_len; i++)
		std::cout << c_nums[i] << " ";
	std::cout << std::endl;
}

void	charArrayTest(void) {

	char		chs[] = {'a', 'b', 'c', 'd', 'e'};
	const int	len = 5;

	std::cout << "\nCHAR Array: ";
	for (int i = 0; i < len; i++)
		std::cout << chs[i] << " ";
	std::cout << std::endl;

	std::cout << " > Iter executed!!";
	::iter(chs, len, toUpper);

	std::cout << "\nCHAR Array: ";
	for (int i = 0; i < len; i++)
		std::cout << chs[i] << " ";
	std::cout << std::endl;

	const char	c_chs[] = {'a', 'b', 'c', 'd', 'e'};
	const int	c_len = 5;

	std::cout << "\nConst CHAR Array: ";
	for (int i = 0; i < c_len; i++)
		std::cout << c_chs[i] << " ";
	std::cout << std::endl;

	std::cout << " > Iter executed!!";
	std::cout << "\ntoUp. Const CHAR: ";
	::iter(c_chs, c_len, constUpper);

	std::cout << "\nConst CHAR Array: ";
	for (int i = 0; i < c_len; i++)
		std::cout << c_chs[i] << " ";
	std::cout << std::endl;
}

void	strArrayTest(void) {

	std::string	str[] = {"I'M", "NOT", "A", "STRING", "!!"};
	const int	len = 5;

	std::cout << "\nSTR Array: ";
	for (int i = 0; i < len; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;

	std::cout << " > Iter executed!!";
	::iter(str, len, toLower);

	std::cout << "\nSTR Array: ";
	for (int i = 0; i < len; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;

	const std::string	c_str[] = {"I'M", "NOT", "A", "STRING", "!!"};
	const int			c_len = 5;

	std::cout << "\nConst STR Array: ";
	for (int i = 0; i < c_len; i++)
		std::cout << c_str[i] << " ";
	std::cout << std::endl;

	std::cout << " > Iter executed!!";
	std::cout << "\ntoLo. Const STR: ";
	::iter(c_str, c_len, constLower);

	std::cout << "\nConst STR Array: ";
	for (int i = 0; i < c_len; i++)
		std::cout << c_str[i] << " ";
	std::cout << std::endl;
}

int		main(void) {

	intArrayTest();
	charArrayTest();
	strArrayTest();
	std::cout << std::endl;
	return (0);
}
