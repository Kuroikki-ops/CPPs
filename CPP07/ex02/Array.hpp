/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:29:43 by diespino          #+#    #+#             */
/*   Updated: 2026/09/14 17:48:23 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

	private:
		T*				_array;
		unsigned int	_len;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array<T>& operator=(const Array<T>& other);
		~Array(void);

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int	size(void) const;
};

# include "Array.tpp"
#endif
