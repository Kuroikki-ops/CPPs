/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:33:54 by diespino          #+#    #+#             */
/*   Updated: 2026/05/26 15:25:20 by diespino         ###   ########.fr       */
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
	std::cout << "\n--- Basic test ---\n" <<std::endl;	
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();

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
	
	delete meta;
	delete j;
	delete i;

	std::cout << "\n--- WrongAnimal/WrongCat test ---\n" <<std::endl;
	const WrongAnimal*	wrong_meta = new WrongAnimal();
	const WrongAnimal*	wrong = new WrongCat();
	WrongCat		wrongcat;
	
	std::cout << std::endl;
	std::cout << "[" << wrong_meta->getType() << "]: ";
	wrong_meta->makeSound();

	std::cout << std::endl;
	std::cout << "[" << wrong->getType() << "]: ";
	wrong->makeSound();

	std::cout << std::endl;
	std::cout << "[" << wrongcat.getType() << "]: ";
	wrongcat.makeSound();
	std::cout << std::endl;
	
	delete wrong_meta;
	delete wrong;

	std::cout << "\nErase [AnimalWrong virtual destructor] to run another test" <<std::endl;

	std::cout << "\n--- Basic Copy test ---\n" <<std::endl;
	Dog	dog1;
	std::cout << std::endl;
	Dog	dog2(dog1);
	std::cout << std::endl;
	Dog	dog3;

	dog3 = dog1;
	std::cout << std::endl;

	return (0);
}
