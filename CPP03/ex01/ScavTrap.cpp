/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:38:00 by diespino          #+#    #+#             */
/*   Updated: 2026/05/21 16:16:12 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_ScavTrap")
{
	_hit = 100;
	_energy = 50;
	_damage = 20;
	std::cout << " <! Default ScavTrap constructor called: [" << _name << "] has been created !>\n\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 50;
	_damage = 20;
	std::cout << " <! ScavTrap constructor called: [" << _name << "] has been created !>\n\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "\n <! ScavTrap copy constructor called: [" << _name << "] has been created !>" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "\n <! ScavTrap copy assignment operator called: [" << _name << "] has been created !>" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {

	std::cout << "\n <! ScavTrap destructor called: [" << _name << "] has been destroyed !>" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hit > 0)
	{
		_energy -= 1;
		std::cout << "  > [ScavTrap]: " << _name << " attacks " << target << ", causing [" << _damage << "] points of damge!" << std::endl;
		return ;
	}
	if (_hit <= 0)
		std::cout << "  > [ScavTrap]: " << _name << " can't attack, is out of hit points!!" << std::endl;
	else if (_energy <= 0)
		std::cout << "  > [ScavTrap]: " << _name << " can't attack, is out of energy!!" << std::endl;
	
	std::cout << "\n  > [ScavTrap]: " << _name << " NO FUNCIONA!! HIT[" << _hit << "] ENERGY[" << _energy << "]\n" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (_energy > 0 && _hit > 0)
	{
		std::cout << "  > [ScavTrap]: " << _name << " is now in Gate Keeper Mode!!" << std::endl;
		return ;
	}
	if (_hit <= 0)
		std::cout << "  > [ScavTrap]: " << _name << " can't change to Gate Keeper Mode, is out of hit points!!" << std::endl;
	else
		std::cout << "  > [ScavTrap]: " << _name << " can't change to Gate Keeper Mode, is out of energy!!" << std::endl;
}
