/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:48:15 by diespino          #+#    #+#             */
/*   Updated: 2026/10/01 16:38:49 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int	main(void) {

	std::cout << "\n=={ Subject test }==\n" << std::endl;

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Mstack TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Mstack SIZE: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(25);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;

	std::cout << "Mstack: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);

	std::cout << "\n=={ List test }==\n" << std::endl;

	std::list<int>	mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << "Mlist BACK: " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Mlist SIZE: " << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(25);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator	lit = mlist.begin();
	std::list<int>::iterator	lite = mlist.end();

	++lit;
	--lit;

	std::cout << "Mlist: ";
	while (lit != lite)
	{
		std::cout << *lit << " ";
		++lit;
	}
	std::cout << std::endl;

	std::cout << "\n=={ Iterator tests }==\n" << std::endl;

	MutantStack<int>	mstack2;

	std::cout << "Filling Mstack {0, 1 , 2, 3, 4}" << std::endl;
	for (int i = 0; i < 5; i++)
		mstack2.push(i);

	std::cout << "\nMstack TOP:  " << mstack2.top() << std::endl;
	std::cout << "Mstack SIZE: " << mstack2.size() << std::endl;

	MutantStack<int>::iterator		n_it;
	MutantStack<int>::reverse_iterator	r_it;

	std::cout << "\nPrinting Mstack n_iter: ";
	for (n_it = mstack2.begin(); n_it != mstack2.end(); n_it++)
		std::cout << *n_it << " ";
	std::cout << std::endl;

	std::cout << "Printing Mstack r_iter: ";
	for (r_it = mstack2.rbegin(); r_it != mstack2.rend(); ++r_it)
		std::cout << *r_it << " ";
	std::cout << std::endl;

	std::cout << "\nPrinting Mstack TOP && POP: ";
	while (!mstack2.empty()) {
	
		std::cout << mstack2.top() << " ";
		mstack2.pop();
	}
	std::cout << std::endl;

	std::cout << "\n=={ Const iterator tests }==\n" << std::endl;

	MutantStack<int>	mstack3;

	std::cout << "Filling Mstack {0, 1 , 2, 3, 4}" << std::endl;
	for (int i = 0; i < 5; i++)
		mstack3.push(i);

	std::cout << "\nMstack TOP:  " << mstack3.top() << std::endl;
	std::cout << "Mstack SIZE: " << mstack3.size() << std::endl;

	MutantStack<int>::const_iterator		cn_it;
	MutantStack<int>::const_reverse_iterator	cr_it;

	std::cout << "\nPrinting Mstack cn_iter: ";
	for (cn_it = mstack3.cbegin(); cn_it != mstack3.cend(); cn_it++)
		std::cout << *cn_it << " ";
	std::cout << std::endl;

	std::cout << "Printing Mstack cr_iter: ";
	for (cr_it = mstack3.crbegin(); cr_it != mstack3.crend(); ++cr_it)
		std::cout << *cr_it << " ";
	std::cout << std::endl;

	std::cout << "\nPrinting Mstack TOP && POP: ";
	while (!mstack3.empty()) {
	
		std::cout << mstack3.top() << " ";
		mstack3.pop();
	}
	std::cout << std::endl;

	return (0);
}
