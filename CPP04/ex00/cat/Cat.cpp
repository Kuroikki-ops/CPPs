/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/26 15:27:18 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Cat.hpp"

Cat::Cat(void) : Animal() {

	std::cout << "== [Cat] constructor called ==" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {

	std::cout << "== [Cat] copy constructor called ==" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {

	std::cout << "== [Cat] copy assignment called ==" << std::endl;

	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat(void) {

	std::cout << "== [Cat] destructor called ==" << std::endl;
}

void	Cat::makeSound(void) const {

	std::cout << "* Cat sound *" << std::endl;
}
