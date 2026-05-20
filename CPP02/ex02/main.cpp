/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:25:52 by diespino          #+#    #+#             */
/*   Updated: 2026/05/19 15:56:35 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a(2);
	Fixed const	b(3);//(Fixed(5.05f) * Fixed(2));

/*	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
*/
	std::cout << "\n == A[" << a << "] " << "B[" << b << "] ==" << std::endl;

	std::cout << "\n > (A > B)  | True[1] or False[0]: " << (a > b);
	std::cout << "\n > (A < B)  | True[1] or False[0]: " << (a < b) << std::endl;
	std::cout << "\n > (A >= B) | True[1] or False[0]: " << (a >= b);
	std::cout << "\n > (A <= B) | True[1] or False[0]: " << (a <= b) << std::endl;
	std::cout << "\n > (A == B) | True[1] or False[0]: " << (a == b);
	std::cout << "\n > (A != B) | True[1] or False[0]: " << (a != b) << std::endl;

	std::cout << "\n == A[" << a << "] " << "B[" << b << "] ==" << std::endl;

	std::cout << "\n > (A + B) = " << (a + b);
	std::cout << "\n > (A - B) = " << (a - b);
	std::cout << "\n > (A * B) = " << (a * b);
	std::cout << "\n > (A / B) = " << (a / b) << std::endl;

	std::cout << "\n == A[" << a << "] " << "B[" << b << "] ==" << std::endl;

	std::cout << "\n > (++A) = " << ++a << a << std::endl;
//	std::cout << "\n > (A++) = " << a++ << a << std::endl;
	
	std::cout << "\n > (--A) = " << --a << a << std::endl;
//	std::cout << "\n > (A--) = " << a-- << a << std::endl;

	std::cout << std::endl;
	return (0);
}
