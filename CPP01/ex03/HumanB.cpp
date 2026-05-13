
#include <iostream>
#include <string>

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}
HumanB::~HumanB(void) {}

void	HumanB::attack(void) const {

	if (!_weapon)
		std::cout << _name << " attacks with their bare hands" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {

	_weapon = &weapon;
}
