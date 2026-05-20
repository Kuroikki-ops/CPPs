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
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

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
	std::cout << "\n > (++A) = " << ++a;
	std::cout << "\n >  (A)  = " << a << std::endl;
	std::cout << "\n > (A++) = " << a++;
	std::cout << "\n >  (A)  = " << a << std::endl;
	std::cout << "\n > (--A) = " << --a;
	std::cout << "\n >  (A)  = " << a << std::endl;
	std::cout << "\n > (A--) = " << a--;
	std::cout << "\n >  (A)  = " << a << std::endl;

	std::cout << "\n == A[" << a << "] " << "B[" << b << "] ==" << std::endl;
	std::cout << "\n > min(A, B) = " << Fixed::min(a, b);
	std::cout << "\n > max(A, B) = " << Fixed::max(a, b) << std::endl;

	std::cout << std::endl;
	return (0);
}
