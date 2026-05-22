/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:09:10 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 13:55:20 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default_FragTrap") {

	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << " <! Default FragTrap constructor called: [" << _name << "] has been created !>\n\n" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	_hit = 100;
	_energy = 100;
	_damage = 30;
	std::cout << " <! FragTrap constructor called: [" << _name << "] has been created !>\n\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) 
{
	*this = other;
	std::cout << "\n <! FragTrap copy constructor called: [" << _name << "] has been created !>" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "\n <! FragTrap copy assignment operator called: [" << _name << "] has been created !>" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) {

	std::cout << "\n\n <! FragTrap destructor called: [" << _name << "] has been created !>" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "  > [FragTrap]: " << _name << " screams: \"HIGH FIVE, GUUUYS!!\"" << std::endl;
}
