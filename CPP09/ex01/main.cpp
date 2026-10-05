/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:37:36 by diespino          #+#    #+#             */
/*   Updated: 2026/10/01 18:23:23 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <queue>

#include "RPN.hpp"

int	main(int argc, char** argv) {

	if (argc != 2)
	{
		std::cerr << "Error: please enter one Reverse Polish Notation" << std::endl;
		return (1);
	}

	RPN	rpn;
	rpn.process(argv[1]);

	return (0);
}
