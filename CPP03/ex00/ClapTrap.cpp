
#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {

	std::cout << "\nClapTrap constructor called!!\n" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "\nClapTrap destructor called!!\n" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name << "attacks " << target;
	std::cout << ", cusing " << _damage << "points of damge!"<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << "takes " << amount << "points of damge!"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << "takes " << amount <<"heal points!"<< std::endl;
}
