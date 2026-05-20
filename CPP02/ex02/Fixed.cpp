/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:20:50 by diespino          #+#    #+#             */
/*   Updated: 2026/05/19 16:02:35 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_fractbits = 8;

Fixed::Fixed() : _fixpoint(0) {}

Fixed::Fixed(const int value)
{
	_fixpoint = value << _fractbits;
}

Fixed::Fixed(const float value)
{
	_fixpoint = static_cast<int>(roundf(value * (1 << _fractbits)));
}

Fixed::Fixed(const Fixed& other) :_fixpoint(other._fixpoint) {}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		_fixpoint = other._fixpoint;
	return (*this);
}

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const
{
	return (_fixpoint);
}
void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator>(const Fixed& other)
{
	if (this > &other)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other)
{
	if (this < &other)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other)
{
	if (this >= &other)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other)
{
	if (this <= &other)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& other)
{
	if (this == &other)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other)
{
	if (this != &other)
		return (true);
	return (false);
}

Fixed    Fixed::operator+(const Fixed& other)
{
	Fixed	result;
	
	result.setRawBits(this->_fixpoint + other._fixpoint);
	return (result);
}

Fixed    Fixed::operator-(const Fixed& other)
{
	Fixed	result;
	
	result.setRawBits(this->_fixpoint - other._fixpoint);
	return (result);
}
Fixed    Fixed::operator*(const Fixed& other)
{
	Fixed	result;
	
	result.setRawBits((this->_fixpoint * other._fixpoint) >> _fractbits);
	return (result);
}

Fixed    Fixed::operator/(const Fixed& other)
{
	Fixed	result;
	
	result.setRawBits((this->_fixpoint << _fractbits) / other._fixpoint);
	return (result);
}

Fixed&    Fixed::operator++(void)
{
	_fixpoint += 1;
	return (*this);
}

Fixed&    Fixed::operator--(void)
{
	_fixpoint -= 1;
	return (*this);
}
