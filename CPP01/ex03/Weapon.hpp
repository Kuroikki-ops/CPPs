/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:31:24 by diespino          #+#    #+#             */
/*   Updated: 2026/05/14 17:07:45 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(const std::string& type);
		~Weapon(void);

		const std::string&	getType(void) const;
		void				setType(const std::string& type);
};

#endif
