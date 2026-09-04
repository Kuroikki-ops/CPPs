/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:25:13 by diespino          #+#    #+#             */
/*   Updated: 2026/09/04 17:57:05 by diespino         ###   ########.fr       */
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
	
	uintptr_t	raw = Serializer::serialize(&data);
	Data		*new_data = Serializer::deserialize(raw);
	
	std::cout
		<< "\nNew_data str: " << new_data->data_str
		<< "\nNew_data int: " << new_data->data_int
		<< "\nNew_data ptr: " << &new_data
		<< std::endl;

	std::cout
		<< "\nSerialized:   " << raw 
		<< "\nDeserialized: " << Serializer::deserialize(raw)
		<< "\nData ptr:     " << &data
		<< "\nNew_data ptr: " << &new_data
		<< "\nNew_data src: " << new_data
		<< std::endl;

	return (0);
}
