/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:42:13 by diespino          #+#    #+#             */
/*   Updated: 2026/05/22 18:04:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain {

	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain(void);
};

#endif
