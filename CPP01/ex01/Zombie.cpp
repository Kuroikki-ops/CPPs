/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:32:29 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 13:17:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie() {std::cout << _name << ": has been destroyed" << std::endl;}

void	Zombie::setName(std::string name, int indx)
{
	std::stringstream	tmp_num;

	tmp_num << indx + 1;
	name.append(" ");
	name.append(tmp_num.str());
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
