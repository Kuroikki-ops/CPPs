/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:31:26 by diespino          #+#    #+#             */
/*   Updated: 2026/10/02 15:44:26 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <map>

#include "BitcoinExchange.hpp"

int	main(int argc, char** argv) {

	if (argc != 2)
	{
		std::cerr << "Error: you must provide a file as an argument" << std::endl;
		return (EXIT_FAILURE);
	}

	BitcoinExchange	btc;

	btc.process_file(argv[1]);

	return (0);
}
