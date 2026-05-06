/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:51:37 by diespino          #+#    #+#             */
/*   Updated: 2026/05/04 12:39:48 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	y;
	char	tmp;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			y = 0;
			while (argv[i][y])
			{
				tmp = toupper(argv[i][y]);
				std::cout << tmp;
				y++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
