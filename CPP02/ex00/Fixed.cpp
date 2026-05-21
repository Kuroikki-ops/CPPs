/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:20:50 by diespino          #+#    #+#             */
/*   Updated: 2026/05/21 12:23:34 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const int Fixed::_fractbits = 8;

Fixed::Fixed() : _fixpoint(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed& other) :_fixpoint(other._fixpoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixpoint = other._fixpoint;
	return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixpoint = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixpoint);
}
