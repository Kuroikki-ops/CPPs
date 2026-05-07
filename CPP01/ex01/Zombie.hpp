/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:19:26 by diespino          #+#    #+#             */
/*   Updated: 2026/05/07 19:35:01 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie {

	private:
		std::string	_name;
	
	public:
		Zombie();
		~Zombie(void);

		void	announce(void);
		void	setName(std::string);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
