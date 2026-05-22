/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 17:05:07 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Wrong Unknown") {

	std::cout << "\n< WrongAnimal constructor called >" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {

	std::cout << "< WrongAnimal copy constructor called >" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {

	std::cout << "< WrongAnimal copy  assignment called >" << std::endl;
	
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "\n< WrongAnimal destructor called >" << std::endl;
}

std::string	WrongAnimal::getType(void) const {

	return (type);
}

void	WrongAnimal::makeSound(void) const {
	
	std::cout << "* Wrong unknown sound *" << std::endl;
}
