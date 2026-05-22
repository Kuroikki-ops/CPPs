/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:33:54 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 17:05:49 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	wrong_meta = new WrongAnimal();
	const WrongAnimal*	wrong = new WrongCat();

	std::cout << std::endl;
	std::cout << "[" << meta->getType() << "]: ";
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "[" << j->getType() << "]: ";
	j->makeSound();

	std::cout << std::endl;
	std::cout << "[" << i->getType() << "]: ";
	i->makeSound();

	std::cout << std::endl;
	std::cout << "[" << wrong_meta->getType() << "]: ";
	wrong_meta->makeSound();

	std::cout << std::endl;
	std::cout << "[" << wrong->getType() << "]: ";
	wrong->makeSound();

	delete meta;
	delete j;
	delete i;

	delete wrong_meta;
	delete wrong;
	return (0);
}
