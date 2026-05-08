/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:31:24 by diespino          #+#    #+#             */
/*   Updated: 2026/05/08 15:00:04 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

class	Weapon {

	private:
		std::string	_type;

	public:
		std::string&	getType(std::string type);
		void		setType(std::string type);
};

#endif
