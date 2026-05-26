/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:33:54 by diespino          #+#    #+#             */
/*   Updated: 2026/05/26 14:09:10 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int		num = 10;
	const AAnimal*	animals[num];

	std::cout << std::endl;	
	std::cout << "---- Construct ANIMALS ----\n"<< std::endl;
	for (int i = 0; i < (num / 2); i++)
	{
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << "---------------------------\n"<< std::endl;
	for (int i = (num / 2); i < num; i++)
	{
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "---- Sound test ----\n"<< std::endl;
	for (int i = 0; i < num; i++)
	{
		animals[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << "---- Destruct ANIMALS ----\n"<< std::endl; 
	for (int i = 0; i < (num / 2); i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	std::cout << "---------------------------\n"<< std::endl;
	for (int i = (num / 2); i < num; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << "---- Basic test ----\n"<< std::endl;
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();

	std::cout << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;
	
	delete j;
	delete i;
	std::cout << std::endl;
	
	std::cout << "---- Testing deep copy ----\n"<< std::endl;
	
	Dog	dog1;
	std::cout << std::endl;
	
	Dog	dog2(dog1);
	std::cout << std::endl;
	
	Dog	dog3;

	dog3 = dog1;
	std::cout << std::endl;

	std::cout << "To run \"Abstract test\" uncomment code in main function\n"<< std::endl;
//	std::cout << "---- Abstract test ----\n"<< std::endl;
//	const AAnimal	a;
//	const AAnimal*	b = new AAnimal();

	return (0);
}
