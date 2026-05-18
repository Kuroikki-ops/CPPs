/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:30:41 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 14:19:49 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB {

	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(void);
		HumanB(const std::string& name);
		~HumanB(void);

		void	setWeapon(Weapon& weapon);
		void	attack(void) const;
};

#endif
