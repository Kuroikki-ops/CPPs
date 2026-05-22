/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:25:24 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 13:36:13 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	robot("Jim");

	robot.attack("Marauder");
	robot.takeDamage(10);
	robot.beRepaired(5);

	robot.attack("Unicorn");
	robot.takeDamage(15);
	robot.attack("Unicorn");
	robot.beRepaired(5);
	robot.highFivesGuys();

	return (0);
}
