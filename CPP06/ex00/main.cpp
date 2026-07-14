
#include <iostream>
#include <string>

#include "ScalarConvert.hpp"

int	main(int argc, char** argv) {

	if (argc == 2)
		ScalarConvert::convert(argv[1]);
	return (0);
}
