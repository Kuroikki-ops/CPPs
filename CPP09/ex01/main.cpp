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

int	main(void) {

	std::queue<int>		q_Num;
	std::queue<char>	q_Op;

	q_Num.push(8);
	q_Num.push(9);
	q_Num.push(9);
	q_Num.push(9);
	q_Num.push(9);
	q_Num.push(4);
	q_Num.push(1);

	q_Op.push('*');
	q_Op.push('-');
	q_Op.push('-');
	q_Op.push('-');
	q_Op.push('-');
	q_Op.push('+');

	int	result = q_Num.front();

	while (!q_Op.empty())
	{
		q_Num.pop();
		int n2 = q_Num.front();
		if (q_Op.front() == '*')
			result *= n2;
		if (q_Op.front() == '-')
			result -= n2;
		if (q_Op.front() == '+')
			result += n2;
		if (q_Op.front() == '/')
			result /= n2;
		q_Op.pop();
	}
	std::cout << "\nResult: " << result << std::endl;
	return (0);
}
