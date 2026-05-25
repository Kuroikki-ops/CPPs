/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:36:39 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 16:53:22 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		virtual ~WrongCat(void);

		virtual void	makeSound(void) const;
};

#endif
