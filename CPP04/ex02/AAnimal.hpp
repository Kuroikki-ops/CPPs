/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:36:39 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:27:26 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal {

	protected:
		std::string	type;

	public:
		AAnimal(void);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal(void);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
