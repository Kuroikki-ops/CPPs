/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 16:49:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Animal.hpp"

Animal::Animal(void) : type("Unknown") {

	std::cout << "\n< Animal constructor called >" << std::endl;
}

Animal::Animal(const Animal& other) {

	std::cout << "< Animal copy constructor called >" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {

	std::cout << "< Animal copy  assignment called >" << std::endl;
	
	if (this != &other)
		type = other.type;
	return (*this);
}

Animal::~Animal(void) {

	std::cout << "\n< Animal destructor called >" << std::endl;
}

std::string	Animal::getType(void) const {

	return (type);
}

void	Animal::makeSound(void) const {
	
	std::cout << "* Unknown sound *" << std::endl;
}
