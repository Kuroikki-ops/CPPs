/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 18:13:37 by diespino          #+#    #+#             */
/*   Updated: 2026/09/04 19:33:11 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base*	generate(void) {

	int	rNum = std::rand() % 3;

	if (rNum == 0)
		return (new A());
	else if (rNum == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p) {}

void	identify(Base& p) {}
