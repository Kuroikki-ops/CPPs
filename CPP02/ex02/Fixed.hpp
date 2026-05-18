/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:10:53 by diespino          #+#    #+#             */
/*   Updated: 2026/05/18 16:39:18 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed {

	private:
		int			_fixpoint;
		static const int	_fractbits;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;

		// Comparison Operators
		bool	operator>(const Fixed& other);
		bool	operator>=(const Fixed& other);

		bool	operator<(const Fixed& other);
		bool	operator<=(const Fixed& other);

		bool	operator==(const Fixed& other);
		bool	operator!=(const Fixed& other);

		// Arithmetic Operators
		Fixed&	operator+(const Fixed& other);
		Fixed&	operator-(const Fixed& other);
		Fixed&	operator*(const Fixed& other);
		Fixed&	operator/(const Fixed& other);

		// Increment && Decrement Operators
		Fixed&	operator++(const Fixed& other);
		Fixed&	operator--(const Fixed& other);

		// Min/Max

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
