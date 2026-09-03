/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:25:13 by diespino          #+#    #+#             */
/*   Updated: 2026/09/03 20:05:25 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include <string>

#include <Serializer.hpp>

int	main(void) {

	Data	data;

	data.data_str = "ptr_staff";
	data.data_int = 912;

	std::cout
		<< "Data str: " << data.data_str
		<< "\nData int: " << data.data_int
		<< "\nData ptr: " << &data
		<< std::endl;
	
	uintptr_t raw = Serializer::serialize(&data);
//	Prueba a guardar la deserializacion en un nuevo ptr data
	std::cout
		<< "\nSerialized:   " << raw 
		<< "\nDeserialized: " << Serializer::deserialize(raw)
		<< "\nData ptr:     " << &data
		<< std::endl;

	return (0);
}
