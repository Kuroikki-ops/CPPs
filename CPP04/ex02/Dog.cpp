/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:30:10 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Dog.hpp"

Dog::Dog(void) : AAnimal() {

	std::cout << "== [Dog] constructor called ==" << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other) {

	std::cout << "== [Dog] copy constructor called ==" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other) {

	std::cout << "== [Dog] copy assignment called ==" << std::endl;

	if (this != &other)
	{
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog(void) {

	std::cout << "== [Dog] destructor called ==" << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const {

	std::cout << "* Dog sound *" << std::endl;
}
