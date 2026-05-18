/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:14:55 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 15:28:39 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int x = 0; x < 1; x++)
	{
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << level[i] << ": ";
			harl.complain(level[i]);
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
