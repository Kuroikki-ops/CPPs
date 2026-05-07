/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:19:26 by diespino          #+#    #+#             */
/*   Updated: 2026/05/07 15:42:58 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

	private:
		std::string	_name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif
