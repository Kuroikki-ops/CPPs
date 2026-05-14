
// ofstream::open / ofstream::close
#include <iostream>
#include <string>
#include <fstream>      // std::ifstream, std::ofstream
#include <cstddef>        // std::size_t

int main (int argc, char **argv) {

//	(void)argc;
//	std::string		file = argv[1];
//	std::string		new_file;
//	std::ifstream		infile;
//  	std::ofstream		outfile;
//	std::size_t		found;
//	std::string		line;
//	std::string		new_line;
//	std::string		str1 = argv[2];
//	std::string		str2 = argv[3];

	if (argc != 4 || !argv)
	{
		std::cout << "Input error: <file> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string 	file = argv[1];
	std::string 	str1 = argv[2];
	std::string 	str2 = argv[3];
	std::ifstream	infile;
	
	infile.open (file.c_str(), std::ifstream::in);
  
	if (infile.is_open())
	{
		std::size_t found = file.find_last_of(".");
		std::string new_file = file.substr(0,found);
		new_file.append(".replace");

		std::ofstream outfile;
		outfile.open (new_file.c_str(), std::ofstream::out | std::ofstream::trunc);
		
		std::string line;
		getline(infile, line);
		while (infile.good()) {
			found = line.find(str1);
			if (found != std::string::npos)
			{
//				std::cout << line << "\n";
	      			std::string new_line = line.substr(0, found);
	      			new_line.append(str2);
//				std::cout << new_line << "\n";
	      			new_line.append(line.begin() + found + str1.length(), line.end());
//				std::cout << new_line << "\n";
				outfile << new_line << std::endl;
			}
			else
				outfile << line << std::endl;
			getline(infile, line);
		}
		infile.close();  
		outfile.close();
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	return (0);
}
