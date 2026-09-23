/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:48:15 by diespino          #+#    #+#             */
/*   Updated: 2026/09/23 20:07:45 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "MutantStack.hpp"

int	main(void) {

	MutantStack<int>	mstack;
	
	for (int i = 0; i < 5; i++)
		mstack.push(i);

	MutantStack<int>::iterator	it;

	for (it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << std::endl;

	std::cout << std::endl;

	while (!mstack.empty()) {
	
		std::cout << mstack.top() << std::endl;
		mstack.pop();
	}
	return (0);
}
