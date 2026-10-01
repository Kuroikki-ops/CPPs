/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:40:46 by diespino          #+#    #+#             */
/*   Updated: 2026/10/01 16:38:54 by diespino         ###   ########.fr       */
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

		typedef typename std::stack<T>::container_type::iterator 		iterator;
		typedef typename std::stack<T>::container_type::const_iterator 		const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator	begin(void) {return (this->c.begin());}
		iterator	end(void) {return (this->c.end());}
		
		const_iterator	cbegin(void) {return (this->c.begin());}
		const_iterator	cend(void) {return (this->c.end());}
		
		reverse_iterator	rbegin(void) {return (this->c.rbegin());}
		reverse_iterator	rend(void) {return (this->c.rend());}

		const_reverse_iterator	crbegin(void) {return (this->c.rbegin());}
		const_reverse_iterator	crend(void) {return (this->c.rend());}
};

#endif
