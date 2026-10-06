/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:47:22 by diespino          #+#    #+#             */
/*   Updated: 2026/10/06 17:59:01 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include <sstream>
#include <algorithm>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe& other) {*this = other;}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {

	(void)other;
	return (*this);
}

PmergeMe::~PmergeMe(void) {}


std::list<int>	JacobsthalOrder(int pend_size) {

	std::list<int>	order;

	if (pend_size == 0)
		return (order);
	order.push_back(1);
	
	int	previous = 1;
	int	current = 3;

	while (previous < pend_size)
	{
		int	last = current;
		int	next;

		if (last > pend_size)
			last = pend_size;
		while (last > previous)
		{
			order.push_back(last);
			--last;
		}
		next = current + 2 * previous;
		previous = current;
		current = next;
	}
	return (order);
}

// Values = 3 5 1 4 6 2 7
// Pairs  = [3, 5] [1, 4] [6, 2]
// Odd    = [7]
//
void	PmergeMe::list(std::string values) {

	std::istringstream	input(values);
	std::list<Pair>		pairs;
	Pair			p;
	int			odd;
	bool			isOdd = false;

//	PARSEO
	while (input >> p.smaller)
	{
		if (input >> p.larger)
		{
			if (p.smaller > p.larger)
				std::swap(p.smaller, p.larger);
			pairs.push_back(p);
		}
		else
		{
			odd = p.smaller;
			isOdd = true;
		}
	}

//	ORDENACION DE NUMEROS GRANDES
	std::list<Pair>::iterator	it;
	for (it = pairs.begin(); it != pairs.end(); it++)
	{
		for (std::list<Pair>::iterator ito = pairs.begin();
				ito != pairs.end(); ito++)
		{
			std::list<Pair>::iterator       next = ito;
		
			if (++next != pairs.end() && ito->larger > next->larger)
				std::iter_swap(ito, next);
		}
	}

//	LISTAS DE NUMEROS GRANDES ORDENDOS && NUM PENDIENTES + LIMITE(NUMERO GRANDE ASOCIADO)
	std::list<int>		sorted;	
	std::list<Limit>	pend;
	Limit			small;
	for (it = pairs.begin(); it != pairs.end(); it++)
	{
		sorted.push_back(it->larger);
		
		std::list<int>::iterator limit = sorted.end();

		limit--;
		small.limit = limit;
		small.num = it->smaller;
		
		pend.push_back(small);
	}

//	ORDEN DE ORDENACION JACOBSTHAL PARA LOS NUMEROS PEQUENOS
	std::list<int> 			order = JacobsthalOrder(pend.size());
	std::list<int>::iterator	orderIt;
	for (orderIt = order.begin(); orderIt != order.end(); orderIt++)
	{
		std::list<Limit>::iterator	pendIt = pend.begin();

		std::advance(pendIt, *orderIt - 1);
		std::list<int>::iterator pos = sorted.begin();
		while (pos != pendIt->limit && *pos < pendIt->num)
			pos++;
		sorted.insert(pos, pendIt->num);
	}

//	ANADE EL NUMERO IMPAR SI LO HAY
	if (isOdd)
	{
		std::list<int>::iterator pos = sorted.begin();
		while (pos != sorted.end() && *pos < odd)
			pos++;
		sorted.insert(pos, odd);
	}

//	IMPRIME
	for (std::list<int>::iterator sort_it = sorted.begin(); sort_it != sorted.end(); sort_it++)
		std::cout << *sort_it << " ";
	std::cout << std::endl;
}
