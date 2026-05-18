/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:07:18 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 14:12:39 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() {}
HumanB::~HumanB() {}

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

void	HumanB::attack(void) const {

	if (!_weapon)
		std::cout << _name << " attacks with their bare hands" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {

	_weapon = &weapon;
}
