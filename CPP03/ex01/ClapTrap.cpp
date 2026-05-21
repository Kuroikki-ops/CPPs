/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:25:13 by diespino          #+#    #+#             */
/*   Updated: 2026/05/21 16:12:40 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default_ClapTrap"), _hit(10), _energy(10), _damage(0) {

	std::cout << "\n  <! Default ClapTrap constructor called: [" << _name << "] has been created !>" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0) {

	std::cout << "\n  <! ClapTrap constructor called: [" << _name << "] has been created !>" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{
	*this = other;
	std::cout << " <! ClapTrap copy constructor called: [" << _name << "] has been created !>\n" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_damage = other._damage;
	}
	std::cout << " <! ClapTrap copy assignment called: [" << _name << "] has been created !>\n" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {

	std::cout << "  <! ClapTrap destructor called: [" << _name << "] has been destroyed !>\n" << std::endl;
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
		std::cout << "  >>[ STATUS ]: " << _name << " == HP[" << _hit << "] ENERGY[" << _energy << "] ==\n" << std::endl;
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
		std::cout << "  >>[ STATUS ]: " << _name << " == HP[" << _hit << "] ENERGY[" << _energy << "] ==\n" << std::endl;
		return ;
	}
	if (_hit <= 0)
		std::cout << "  > [ClapTrap]: " << _name << " can't be repaired, is out of hit points!!" << std::endl;
	else
		std::cout << "  > [ClapTrap]: " << _name << " can't be repaired, is out of energy!!" << std::endl;
}
