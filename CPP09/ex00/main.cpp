/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:31:26 by diespino          #+#    #+#             */
/*   Updated: 2026/10/01 19:27:32 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include <map>

int	main(int argc, char** argv) {

	(void)argc;

	std::string	tmp = argv[1];

	std::size_t	found = tmp.find_last_of(",");
	std::string	alias = tmp.substr(0, found);
	std::string	tmp_nbr = tmp.substr(found + 1, std::string::npos);
	float		num = std::atof(tmp_nbr.c_str());

	std::map<std::string, float> data;

	data["17-07-2000"] = 26;
	data["09-08-2004"] = 22;
	data[alias] = num;

	std::map<std::string, float>::iterator	it;
	
	for(it = data.begin(); it != data.end(); ++it) 
		std::cout << it->first << " => " << it->second << " * 2 = " << it->second * 2 << std::endl;
	return (0);
}
