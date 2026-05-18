/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:07:36 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 14:16:52 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::~Weapon() {}

Weapon::Weapon(const std::string& type) : _type(type) {}

const std::string& Weapon::getType(void) const {return (_type);}

void	Weapon::setType(const std::string& type) {

	_type = type;
}
