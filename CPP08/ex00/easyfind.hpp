/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:35:09 by diespino          #+#    #+#             */
/*   Updated: 2026/09/17 17:48:00 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator	easyFind(T& container, int target) {

	typename T::iterator it;

	it = std::find(container.begin(), container.end(), target);
	if (it == container.end())
		throw (std::out_of_range("Value not found"));
	return (it);
}
#endif
