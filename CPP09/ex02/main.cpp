/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:27:47 by diespino          #+#    #+#             */
/*   Updated: 2026/10/06 12:42:09 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv) {

	PmergeMe	PmMe;

	(void)argc;
	PmMe.list(argv[1]);

	return (0);
}
