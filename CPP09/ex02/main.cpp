/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:27:47 by diespino          #+#    #+#             */
/*   Updated: 2026/10/12 19:14:08 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PmergeMe.hpp"

int	main(int argc, char** argv) {

	PmergeMe	PmMe;
	std::string	values;

	if (argc <= 1)
	{
		std::cerr << "Error: input error: empty input" << std::endl;
		return (1);
	}
	else if (argc == 2)
		values = argv[1];
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			values.append(argv[i]);
			if (argv[i + 1])
				values.push_back(' ');
		}
	}

	PmMe.sort_values(values);

	return (0);
}
