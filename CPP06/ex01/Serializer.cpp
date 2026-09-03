/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:55:08 by diespino          #+#    #+#             */
/*   Updated: 2026/09/03 20:05:33 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <string>

#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(const Serializer& other) {(void)other;}

Serializer&	Serializer::operator=(const Serializer& other) {

	(void)other;
	return (*this);
}

Serializer::~Serializer(void) {}

uintptr_t	Serializer::serialize(Data* ptr) {

//	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);
//	return (raw);

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw) {

//	Data*	ptr = reinterpret_cast<Data*>(raw);
//	return (ptr);

	return (reinterpret_cast<Data*>(raw));
}
