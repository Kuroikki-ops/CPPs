/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:08:18 by diespino          #+#    #+#             */
/*   Updated: 2026/05/14 17:08:34 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>      // std::ifstream, std::ofstream
#include <cstddef>      // std::size_t
#include <cstdlib>	// EXIT_FAILURE, EXIT_SUCCESS

void	str_replace(std::ifstream& in, std::ofstream& out, std::string str1, std::string str2)
{
	std::cout << "str_replace" << std::endl;
	
	std::string	line;
	std::string	new_line;
	std::size_t	found;

	std::getline(in, line);
	while (in.good()) 
	{
		found = line.find(str1);
		while (found != std::string::npos)
		{
      			new_line = line.substr(0, found);
			new_line.append(str2);
			new_line.append(line.begin() + found + str1.length(), line.end());
			line = new_line;
			found = line.find(str1, found + str2.length());
		}
		out << line << std::endl;
		getline(in, line);
	}
}

int main (int argc, char **argv)
{
	if (argc != 4 || !argv || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Input error: <file> <s1> <s2>" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string	file = argv[1];
	std::ifstream	infile;
	
	infile.open (file.c_str(), std::ifstream::in);
  
	if (!infile.is_open())
	{
		std::cout << "Error opening file: " << file << std::endl;
		return (EXIT_FAILURE);
	}

	std::size_t	found;
	std::string	new_file;
	
	found = file.find_last_of(".");
	if (found != std::string::npos)
		new_file = file.substr(0,found);
	else
		new_file = file;
	new_file.append(".replace");

	std::ofstream	outfile;
	outfile.open (new_file.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!outfile.is_open())
	{
		std::cout << "Error opening file: " << new_file << std::endl;
		infile.close();
		return (EXIT_FAILURE);
	}

	str_replace(infile, outfile, argv[2], argv[3]);

	infile.close();  
	outfile.close();
	
	return (EXIT_SUCCESS);
}
