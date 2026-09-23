/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:40:46 by diespino          #+#    #+#             */
/*   Updated: 2026/09/23 20:07:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

	public:
		MutantStack(void) {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack& other) {
			std::stack<T>::operator=(other);
			return (*this);}
		~MutantStack(void) {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) {return (this->c.begin());}
		iterator	end(void) {return (this->c.end());}
};

#endif
