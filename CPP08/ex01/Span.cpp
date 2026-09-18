/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:19:58 by diespino          #+#    #+#             */
/*   Updated: 2026/09/18 17:46:22 by diespino         ###   ########.fr       */
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

const char* Span::NoSpace::what() const throw () {
	return ("Cannot store more values");}

const char* Span::NotEnoughValues::what() const throw () {
	return ("Not enough values");}

std::vector<unsigned int> Span::getVector(void) {return (_v);}

unsigned int	Span::getLen(void) const {return (_len);}

void	Span::addNumber(unsigned int value) {

	if (_v.size() < _len)
		_v.push_back(value);
	else
		throw (NoSpace());
}

unsigned int	Span::shortestSpan(void) {

	std::vector<unsigned int>	tmp = _v;
	unsigned int			shortest;

	if (tmp.size() <= 2)
		throw (NotEnoughValues());

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

	std::vector<unsigned int>	tmp = _v;
	unsigned int			max_nbr;
	unsigned int			min_nbr;

	if (tmp.size() <= 2)
		throw (NotEnoughValues());

	max_nbr = *std::max_element(_v.begin(), _v.end());
	min_nbr = *std::min_element(_v.begin(), _v.end());

	return (max_nbr - min_nbr);
}
