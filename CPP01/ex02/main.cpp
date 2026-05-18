/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 12:26:33 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 14:04:33 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain  = "HI THIS IS BRAIN";
	std::string	*ptr = &brain;
	std::string	&ref = brain;

	std::cout << "Dir STR: " << &brain << std::endl;
	std::cout << "Dir PTR: " << ptr << std::endl;
	std::cout << "Dir REF: " << &ref << "\n"<<std::endl;

	std::cout << "STR: " << brain << std::endl;
	std::cout << "PTR: " << *ptr << std::endl;
	std::cout << "REF: " << ref << std::endl;
	return (0);
}
