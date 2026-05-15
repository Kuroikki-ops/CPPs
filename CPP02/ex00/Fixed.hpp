/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:10:53 by diespino          #+#    #+#             */
/*   Updated: 2026/05/15 15:06:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class	Fixed {

	private:
		int			_fixpoint;
		static const int	_fractbits;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed&);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
