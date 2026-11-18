/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:34:31 by diespino          #+#    #+#             */
/*   Updated: 2026/11/17 16:23:31 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConvert.hpp"

int	main(int argc, char **argv) {

	if (argc == 2)
	{
		ScalarConvert::convert(argv[1]);
		return (0);
	}

	std::cout << "\n===={ CHAR }====" << std::endl;
	std::cout << "\nLITERAL[a]" << std::endl;
	ScalarConvert::convert("a");
	std::cout << "\nLITERAL[A]" << std::endl;
	ScalarConvert::convert("A");
	
	std::cout << "\n===={ INT }====" << std::endl;
	std::cout << "\nLITERAL[42]" << std::endl;
	ScalarConvert::convert("42");
	std::cout << "\nLITERAL[-42]" << std::endl;
	ScalarConvert::convert("-42");
	std::cout << "\nLITERAL[2147483647]" << std::endl;
	ScalarConvert::convert("2147483647");// INT_MAX
	std::cout << "\nLITERAL[-2147483648]" << std::endl;
	ScalarConvert::convert("-2147483648");// INTT_MIN
	std::cout << "\nLITERAL[2147483648]" << std::endl;
	ScalarConvert::convert("2147483648");// overflow

	std::cout << "\n===={ FLOAT }====" << std::endl;
	std::cout << "\nLITERAL[0.0f]" << std::endl;
	ScalarConvert::convert("0.0f");
	std::cout << "\nLITERAL[4.2f]" << std::endl;
	ScalarConvert::convert("4.2f");
	std::cout << "\nLITERAL[-4.2f]" << std::endl;
	ScalarConvert::convert("-4.2f");

	std::cout << "\n===={ DOUBLE }====" << std::endl;
	std::cout << "\nLITERAL[0.0]" << std::endl;
	ScalarConvert::convert("0.0");
	std::cout << "\nLITERAL[4.2]" << std::endl;
	ScalarConvert::convert("4.2");
	std::cout << "\nLITERAL[-4.2]" << std::endl;
	ScalarConvert::convert("-4.2");

	std::cout << "\n===={ SPECIAL }====" << std::endl;
	std::cout << "\nLITERAL[nan]" << std::endl;
	ScalarConvert::convert("nan");
	std::cout << "\nLITERAL[nanf]" << std::endl;
	ScalarConvert::convert("nanf");
	std::cout << "\nLITERAL[+inf]" << std::endl;
	ScalarConvert::convert("+inf");
	std::cout << "\nLITERAL[-inf]" << std::endl;
	ScalarConvert::convert("-inf");
	std::cout << "\nLITERAL[+inff]" << std::endl;
	ScalarConvert::convert("+inff");
	std::cout << "\nLITERAL[-inff]" << std::endl;
	ScalarConvert::convert("-inff");

	std::cout << "\n===={ NON DISPLAYABLE }====" << std::endl;
	std::cout << "\nLITERAL[0]" << std::endl;
	ScalarConvert::convert("0");
	std::cout << "\nLITERAL[1.1]" << std::endl;
	ScalarConvert::convert("1.1");
	std::cout << "\nLITERAL[2.2f]" << std::endl;
	ScalarConvert::convert("2.2f");
	std::cout << "\nLITERAL[-3]" << std::endl;
	ScalarConvert::convert("-3");

	std::cout << "\n===={ INVALID }====" << std::endl;
	std::cout << "\nLITERAL['z']" << std::endl;
	ScalarConvert::convert("'z'");
	std::cout << "\nLITERAL[\"z\"]" << std::endl;
	ScalarConvert::convert("\"z\"");
	std::cout << "\nLITERAL[\"'z'\"]" << std::endl;
	ScalarConvert::convert("\"'z'\"");
	std::cout << "\nLITERAL[test]" << std::endl;
	ScalarConvert::convert("test");
	std::cout << "\nLITERAL[42_test]" << std::endl;
	ScalarConvert::convert("42_test");
	std::cout << "\nLITERAL[]" << std::endl;
	ScalarConvert::convert("");
	std::cout << std::endl;

	return (0);
}
