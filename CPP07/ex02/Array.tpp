/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:31:38 by diespino          #+#    #+#             */
/*   Updated: 2026/09/15 14:23:40 by diespino         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdexcept>

template <typename T>
Array<T>::Array(void) : _array(NULL), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _len(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other) : _array(NULL), _len(0) {*this = other;}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {

	if (this != &other)
	{
		T* new_array = new T[other._len];
		for (unsigned int i = 0; i < other._len; i++)
			new_array[i] = other._array[i];
		delete[] _array;
		_array = new_array;
		_len = other._len;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(void) {delete[] _array;}

template <typename T>
T&	Array<T>::operator[](unsigned int index) {

	if (index >= _len)
		throw (std::out_of_range("Array indx out of range"));
	return (this->_array[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {

	if (index >= _len)
		throw (std::out_of_range("Array indx out of range"));
	return (this->_array[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const {return (_len);}
