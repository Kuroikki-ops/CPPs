/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:35:56 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Unknown") {

	std::cout << "< AAnimal constructor called >" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {

	std::cout << "< AAnimal copy constructor called >" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {

	std::cout << "< AAnimal copy  assignment called >" << std::endl;
	
	if (this != &other)
		type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void) {

	std::cout << "< AAnimal destructor called >" << std::endl;
}

std::string	AAnimal::getType(void) const {

	return (type);
}
/*
void	AAnimal::makeSound(void) const {
	
	std::cout << "* Unknown sound *" << std::endl;
}*/
