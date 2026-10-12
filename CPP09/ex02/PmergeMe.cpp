/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:47:22 by diespino          #+#    #+#             */
/*   Updated: 2026/10/12 19:27:18 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <iomanip>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe& other) {*this = other;}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {

	(void)other;
	return (*this);
}

PmergeMe::~PmergeMe(void) {}

std::list<int>	list_JacobsthalOrder(int pend_size) {

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

std::vector<std::size_t>	vec_JacobsthalOrder(std::size_t pend_size) {

	std::vector<std::size_t>	order;

	if (pend_size == 0)
		return (order);
	order.push_back(1);
	
	std::size_t	previous = 1;
	std::size_t	current = 3;

	while (previous < pend_size)
	{
		std::size_t	last = current;
		std::size_t	next;

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

void	PmergeMe::list(std::string values) {

	std::istringstream	input(values);
	std::list<Pair>		pairs;
	Pair			p;
	int			odd;
	bool			isOdd = false;
	std::clock_t		start = std::clock();

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
	std::list<int>	jacobs = list_JacobsthalOrder(pend.size());

	for (std::list<int>::iterator jacobsIt = jacobs.begin();
			jacobsIt != jacobs.end(); jacobsIt++)
	{
		std::list<Limit>::iterator	pendIt = pend.begin();
		std::list<int>::iterator	pos = sorted.begin();

		std::advance(pendIt, *jacobsIt - 1);

		while (pos != pendIt->list_limit && *pos < pendIt->num)
			pos++;

		sorted.insert(pos, pendIt->num);
	}
	if (isOdd)
	{
		std::list<int>::iterator pos = sorted.begin();
		while (pos != sorted.end() && *pos < odd)
			pos++;
		sorted.insert(pos, odd);
	}

//	TIME
	std::clock_t	end = std::clock();
	double		list_time = static_cast<double>(end - start) * 1000000 / CLOCKS_PER_SEC;

//	IMPRIME
	for (std::list<int>::iterator sort_it = sorted.begin();
			sort_it != sorted.end(); sort_it++)
	{
		std::list<int>::iterator next = sort_it;

		std::cout << *sort_it;
		if (++next != sorted.end())
			std::cout << " ";
	}
	std::cout
		<< std::fixed << std::setprecision(2)
		<< "\n\nTime to process [" << sorted.size()
		<< "] elements with [std::list]:   " << list_time
		<< " us" << std::endl;
}

void	PmergeMe::vector(std::string values) {

	std::istringstream	input(values);
	std::vector<Pair>	pairs;
	Pair			p;
	int			odd;
	bool			isOdd = false;
	std::clock_t		start = std::clock();

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
	for (std::size_t i = 0; i < pairs.size(); i++)
	{
		for (std::size_t x = 0; x < pairs.size(); x++)
		{
			if (x + 1 != pairs.size()
					&& pairs[x].larger > pairs[x + 1].larger)
				std::swap(pairs[x], pairs[x + 1]);
		}
	}

//	LISTAS DE NUMEROS GRANDES ORDENDOS && NUM PENDIENTES + LIMITE(NUMERO GRANDE ASOCIADO)
	std::vector<int>	sorted;	
	std::vector<Limit>	pend;

	for (std::size_t i = 0; i < pairs.size(); i++)
	{
		Limit	small;

		sorted.push_back(pairs[i].larger);
		small.vec_limit = sorted.size() - 1;
		small.num = pairs[i].smaller;
		pend.push_back(small);
	}

//	ORDEN DE ORDENACION JACOBSTHAL PARA LOS NUMEROS PEQUENOS
	std::vector<std::size_t>	jacobs = vec_JacobsthalOrder(pend.size());

	for (std::size_t i = 0; i < jacobs.size(); i++)
	{
		std::size_t	pos = 0;
		std::size_t	 order = jacobs[i] - 1;

		while (pos < pend[order].vec_limit
				&& sorted[pos] < pend[order].num)
			pos++;

		sorted.insert(sorted.begin() + pos, pend[order].num);

		for (std::size_t x = 0; x < pend.size(); x++)
		{
			if (pend[x].vec_limit >= pos)
				pend[x].vec_limit++;
		}
	}
	if (isOdd)
	{
		std::size_t	pos = 0;

		while (pos < sorted.size() && sorted[pos] < odd)
			pos++;
		sorted.insert(sorted.begin() + pos, odd);
	}
//	TIME
	std::clock_t	end = std::clock();
	double		list_time = static_cast<double>(end - start) * 1000000 / CLOCKS_PER_SEC;

//	IMPRESION
	std::cout
		<< std::fixed << std::setprecision(2)
		<< "Time to process [" << sorted.size()
		<< "] elements with [std::vector]: " << list_time
		<< " us" << std::endl;
}

void	PmergeMe::sort_values(std::string values) {

	int	n_count = 0;

	for (std::size_t i = 0; i < values.size(); ++i)
	{
		if ((!std::isdigit(values[i]) && values[i] != ' ')
				|| (values[i] == '0' && !std::isdigit(values[i - 1])))
		{
			std::cerr << "Error: input error: only unsigned positive intagers as argument" << std::endl;
			return ;
		}
		if (values[i + 1] == ' ' || i + 1 == values.size())
			n_count++;
	}
	if (n_count <= 1)
	{
		std::cerr << "Error: input error: must be at least two positive intagers as argument" << std::endl;
		return ;
	}

	std::cout << "\nBefore: " << values << "\nAfter:  ";
	list(values);
	vector(values);
	std::cout << std::endl;
}
