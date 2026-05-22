/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:36:39 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 18:01:49 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

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
