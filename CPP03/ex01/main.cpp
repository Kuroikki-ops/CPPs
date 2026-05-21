/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:25:24 by diespino          #+#    #+#             */
/*   Updated: 2026/05/21 16:07:47 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	robot("Bob");

	robot.attack("Psycho");
	robot.takeDamage(10);
	robot.guardGate();
	robot.beRepaired(5);

	robot.attack("Suicide Psycho");
	robot.takeDamage(15);
	robot.attack("Suicide Psycho");
	robot.beRepaired(5);

	return (0);
}
