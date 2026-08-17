
#include <iostream>
#include <string>

#include "ScalarConvert.hpp"

int	main(int argc, char** argv) {

	if (argc == 2)
		ScalarConvert::convert(argv[1]);
	
/*	char	a = 42;
	std::cout
		<< "\nASCII NUM 42: '" << a << "'"
		<< std::endl;
*/
	return (0);
}
