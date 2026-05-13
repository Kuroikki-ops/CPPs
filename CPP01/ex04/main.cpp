
// ofstream::open / ofstream::close
#include <iostream>
#include <string>
#include <fstream>      // std::ifstream, std::ofstream
#include <cstddef>        // std::size_t

int main () {

	std::string		file = "test.txt";
	std::string		new_file;
	std::string		line;
	std::ifstream	infile;
  	std::ofstream	outfile;
	std::size_t		found;

	found = file.find_last_of(".");
	new_file = file.substr(0,found);
	new_file.append(".replace");

	infile.open (file.c_str(), std::ifstream::in);
  	outfile.open (new_file.c_str(), std::ofstream::out | std::ofstream::trunc);

	getline(infile, line);

	while (infile.good()) {
		outfile << line << std::endl;
		std::cout << line << "\n";
		getline(infile, line);
	}

	infile.close();  
	outfile.close();

	return (0);
}
