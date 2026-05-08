/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:10:42 by diespino          #+#    #+#             */
/*   Updated: 2026/05/08 15:23:04 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon._type << std::endl;
}
