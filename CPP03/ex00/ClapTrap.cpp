
#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {

	std::cout << "\n <! ClapTrap constructor called: [" << _name << "] has been created !>\n" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "\n< ! ClapTrap destructor called [" << _name << "] has been destroyed !>\n" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy -= 1;
		std::cout << "  > [ClapTrap]: " << _name << " attacks " << target << ", causing [" << _damage << "] points of damge!" << std::endl;
		return ;
	}
	if (_hit <= 0)
		std::cout << "  > [ClapTrap]: " << _name << " can't attack, is out of hit points!!" << std::endl;
	else
		std::cout << "  > [ClapTrap]: " << _name << " can't attack, is out of energy!!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit > 0)
	{
		_hit -= amount;
		std::cout << "  > [ClapTrap]: " << _name << " takes [" << amount << "] points of damge!"<< std::endl;
		return ;
	}
	std::cout << "  > [ClapTrap]: " << _name << " has no hit points!"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy -= 1;
		_hit += amount;
		std::cout << "  > [ClapTrap]: " << _name << " has repaired by him self!! Has win [" << amount <<"] hit points!"<< std::endl;
		return ;
	}
	if (_hit <= 0)
		std::cout << "  > [ClapTrap]: " << _name << " can't be repaired, is out of hit points!!" << std::endl;
	else
		std::cout << "  > [ClapTrap]: " << _name << " can't be repaired, is out of energy!!" << std::endl;
}
