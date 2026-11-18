/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:25:13 by diespino          #+#    #+#             */
/*   Updated: 2026/11/17 16:36:56 by diespino         ###   ########.fr       */
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
		<< "\nData str: " << data.data_str
		<< "\nData int: " << data.data_int
		<< "\nData ptr: " << &data
		<< std::endl;
	
	uintptr_t	raw = Serializer::serialize(&data);
	std::cout << "\nSerialized:   " << raw << std::endl;

	Data		*new_data = Serializer::deserialize(raw);
	std::cout << "Deserialized: " << Serializer::deserialize(raw) << std::endl;
	
	std::cout
		<< "\nNew_data str: " << new_data->data_str
		<< "\nNew_data int: " << new_data->data_int
		<< "\nNew_data ptr: " << new_data
		<< std::endl;

	std::cout
		<< "\nData ptr:     " << &data
		<< "\nNew_data ptr: " << &new_data
		<< "\nNew_data src: " << new_data
		<< "\n" << std::endl;

	return (0);
}
