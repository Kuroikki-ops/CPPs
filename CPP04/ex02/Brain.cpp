/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:47:35 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:11:10 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "-- Brain constructor called --" << std::endl;
}

Brain::Brain(const Brain& other) {

	std::cout << "-- Brain copy constructor called --" << std::endl;
	for (int i = 0; i < 100 ; i++)
		ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=(const Brain& other) {

	std::cout << "-- Brain copy assignment called --" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100 ; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void) {

	std::cout << "-- Brain destructor called --" << std::endl;
}
