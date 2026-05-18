/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:45:21 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 13:57:47 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie		*zombies;
	const int	zNum = 10;

	zombies = zombieHorde(zNum, "Larry");

	for (int i = 0; i < zNum; i++)
		zombies[i].announce();

	delete[] zombies;
	return (0);
}
