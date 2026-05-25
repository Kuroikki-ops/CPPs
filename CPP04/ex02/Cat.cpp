/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:29:42 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Cat.hpp"

Cat::Cat(void) : AAnimal() {

	std::cout << "== [Cat] constructor called ==" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other) {

	std::cout << "== [Cat] copy constructor called ==" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other) {

	std::cout << "== [Cat] copy assignment called ==" << std::endl;

	if (this != &other)
	{
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::~Cat(void) {

	std::cout << "== [Cat] destructor called ==" << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const {

	std::cout << "* Cat sound *" << std::endl;
}
