/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:36:39 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:31:34 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;
};

#endif
