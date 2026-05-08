/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:30:41 by diespino          #+#    #+#             */
/*   Updated: 2026/05/08 15:17:35 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class	HumanA {

	private:
		std::string	_name;
		Weapon		_weapon;

	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	attack(void);
};

#endif
