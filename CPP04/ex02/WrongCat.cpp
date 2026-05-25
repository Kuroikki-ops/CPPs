/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:45:19 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 17:04:27 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {

	std::cout << "== [WrongCat] constructor called ==" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {

	std::cout << "< WrongCat copy constructor called >" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {

	std::cout << "< WrongCat copy assignment called >" << std::endl;

	if (this != &other)
		WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat(void) {

	std::cout << "== [WrongCat] destructor called ==" << std::endl;
}

void	WrongCat::makeSound(void) const {

	std::cout << "* WrongCat sound *" << std::endl;
}
