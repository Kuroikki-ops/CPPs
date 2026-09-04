/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:59:21 by diespino          #+#    #+#             */
/*   Updated: 2026/09/04 19:33:15 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base {

	public:
		virtual ~Base(void);
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
