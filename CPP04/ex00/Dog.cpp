/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/26 15:27:34 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Dog.hpp"

Dog::Dog(void) : Animal() {

	std::cout << "== [Dog] constructor called ==" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {

	std::cout << "== [Dog] copy constructor called ==" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {

	std::cout << "== [Dog] copy assignment called ==" << std::endl;

	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Dog::~Dog(void) {

	std::cout << "== [Dog] destructor called ==" << std::endl;
}

void	Dog::makeSound(void) const {

	std::cout << "* Dog sound *" << std::endl;
}
