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
#include <vector>
#include <sstream>
#include <algorithm>
#include <ctime>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe& other) {*this = other;}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {

	(void)other;
	return (*this);
}

PmergeMe::~PmergeMe(void) {}

bool	wrong_input(std::string values) {

	for (int i = 0; values[i]; i++)
	{
		if (!std::isdigit(values[i]) && values[i] != ' ')
			return (false);
	}
	return (true);
}

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
	Pair				p;
	int					odd;
	bool				isOdd = false;

//	PARSEO
	if (!wrong_input(values))
	{
		std::cerr << "Error: input error: only positive intagers as argument" << std::endl;
		return ;
	}

	std::clock_t	start = std::clock();

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
	for (std::list<Pair>::iterator it = pairs.begin();
			it != pairs.end(); it++)
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

	for (std::list<Pair>::iterator it = pairs.begin();
			it != pairs.end(); it++)
	{
		Limit	small;

		sorted.push_back(it->larger);
		small.list_limit = --sorted.end();
		small.num = it->smaller;
		pend.push_back(small);
	}

//	ORDEN DE ORDENACION JACOBSTHAL PARA LOS NUMEROS PEQUENOS
	std::list<int>				order = JacobsthalOrder(pend.size());

	for (std::list<int>::iterator orderIt = order.begin();
			orderIt != order.end(); orderIt++)
	{
		std::list<Limit>::iterator	pendIt = pend.begin();
		std::list<int>::iterator	pos = sorted.begin();

		std::advance(pendIt, *orderIt - 1);
		while (pos != pendIt->list_limit && *pos < pendIt->num)
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
//	TIME
	std::clock_t	end = std::clock();
	double list_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

//	IMPRIME
	std::cout << "Before: " << values << "\nAfter:  ";
	for (std::list<int>::iterator sort_it = sorted.begin(); sort_it != sorted.end(); sort_it++)
	{
		std::list<int>::iterator next = sort_it;

		std::cout << *sort_it;
		if (++next != sorted.end())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout
		<< "Time to process [" << sorted.size()
		<< "] elements with [std::list]: " << list_time * 1000000
		<< " us" << std::endl;
}

void	PmergeMe::vector(std::string values) {

	std::istringstream	input(values);
	std::vector<Pair>	pairs;
	Pair				p;
	int					odd;
	bool				isOdd;

//	PARSEO
	if (!wrong_input(values))
	{
		std::cerr << "Error: input error: only positive intagers as argument" << std::endl;
		return ;
	}
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
	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t x = 0; x < pairs.size(); x++)
		{
			if (x + 1 != pairs.size()
					&& pairs[x].larger > pairs[x + 1].larger)
				std::swap(pairs[x], pairs[x + 1]);
		}
	}

//	LISTAS DE NUMEROS GRANDES ORDENDOS && NUM PENDIENTES + LIMITE(NUMERO GRANDE ASOCIADO)
	std::vector<int>	sorted;	
	std::vector<Limit>	pend;

	for (size_t i = 0; i < pairs.size(); i++)
	{
		Limit	small;

		sorted.push_back(pairs[i].larger);
		small.vec_limit = sorted.size() - 1;
		small.num = pairs[i].smaller;
		pend.push_back(small);
	}


	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::cout << pairs[i].smaller << " "
			<< pairs[i].larger << std::endl;
	}
	if (isOdd)
		std::cout << "Odd: " << odd << std::endl;
	std::cout << std::endl;
	for (size_t i = 0; i < pend.size(); i++)
	{
		std::cout << pend[i].vec_limit << " "
			<< pend[i].num << std::endl;
	}
}
