/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 17:09:58 by diespino          #+#    #+#             */
/*   Updated: 2026/09/07 18:15:14 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {

	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T& min(const T& a, const T& b) {

	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
const T& max(const T& a, const T& b) {

	if (a > b)
		return (a);
	else
		return (b);
}

#endif
