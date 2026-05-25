/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 14:36:39 by diespino          #+#    #+#             */
/*   Updated: 2026/05/25 15:32:16 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

	private:
		Brain*	_brain;
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;
};

#endif
