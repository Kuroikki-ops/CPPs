/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:33:54 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 18:19:42 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int		num = 10;
	const Animal*	animals[num];

	std::cout << std::endl;

	for (int i = 0; i < (num / 2); i++)
	{
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = (num / 2); i < num; i++)
	{
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	for (int i = 0; i < (num / 2); i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	for (int i = (num / 2); i < num; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	return (0);
}
