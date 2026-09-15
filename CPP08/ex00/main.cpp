/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:35:04 by diespino          #+#    #+#             */
/*   Updated: 2026/09/15 18:47:13 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template <typename T>
void	printContainer(const T& container) {

	typename T::const_iterator it = container.begin();

	while (it != container.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int	main(void) {

	std::vector<int>	v;

	for (int i = 0; i < 5; i++)
		v.push_back(i);
	
	printContainer(v);
	return (0);
}
