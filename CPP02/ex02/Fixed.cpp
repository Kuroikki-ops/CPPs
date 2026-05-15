/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:20:50 by diespino          #+#    #+#             */
/*   Updated: 2026/05/15 17:39:22 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fractbits = 8;

Fixed::Fixed() : _fixpoint(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixpoint = value << _fractbits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixpoint = static_cast<int>(roundf(value * (1 << _fractbits)));
}

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

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixpoint);
}
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixpoint = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixpoint) / (1 << _fractbits));
}

int	Fixed::toInt(void) const
{
	return (_fixpoint >> _fractbits);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
