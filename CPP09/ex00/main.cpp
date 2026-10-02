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

	(void)argc;

	BitcoinExchange	btc;

	btc.process_file(argv[1]);
//	btc.print_data();

	return (0);
}
