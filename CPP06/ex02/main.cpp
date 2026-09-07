/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:20:20 by diespino          #+#    #+#             */
/*   Updated: 2026/09/07 15:59:12 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void) {

	std::srand(std::time(NULL));
	
	int	test_num = 4;

	for (int i = 0; i < test_num; i++)
	{
		Base* tmp = generate();

		std::cout << "\nPointer:   ";
		identify(tmp);

		std::cout << "Reference: ";
		identify(*tmp);


		delete tmp;
	}
	std::cout << std::endl;
	return (0);
}
