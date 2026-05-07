/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:29:21 by diespino          #+#    #+#             */
/*   Updated: 2026/05/07 16:08:06 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombieHeap = newZombie("BOB");

	zombieHeap->announce();
	randomChump("DYLAN");
	delete zombieHeap;	
	return (0);
}
