/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:19:58 by diespino          #+#    #+#             */
/*   Updated: 2026/09/17 19:55:12 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

#include "Span.hpp"

Span::Span(void) : _len(0) {}

Span::Span(unsigned int n) : _len(n) {}

Span::Span(const Span& other) {*this = other;}

Span&	Span::operator=(const Span& other) {

	if (this != &other)
		_len = other._len;
	return (*this);
}

Span::~Span(void) {}

std::vector<unsigned int> Span::getVector(void) {return (_v);}

void	Span::addNumber(unsigned int value) {

	if (_v.size() < _len)
		_v.push_back(value);
	else
		std::cout << value << " no cabe" << std::endl;
}

unsigned int	Span::shortestSpan(void) {

//	Falta comprobar si son + de 2 nums
	std::vector<unsigned int>	tmp = _v;
	unsigned int			shortest;

	std::sort(tmp.begin(), tmp.end());
	shortest = tmp[1] - tmp[0];

	for (unsigned int i = 0; i < (tmp.size() - 1); i++)
	{
		if ((tmp[i + 1] - tmp[i]) < shortest)
			shortest = tmp[i + 1] - tmp[i];
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void) {

//	Falta comprobar si son + de 2 nums
	std::vector<unsigned int>	tmp = _v;
	unsigned int			max_nbr;
	unsigned int			min_nbr;

	max_nbr = *std::max_element(_v.begin(), _v.end());
	min_nbr = *std::min_element(_v.begin(), _v.end());

	return (max_nbr - min_nbr);
}
