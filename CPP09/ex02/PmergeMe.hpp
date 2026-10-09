/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:29:31 by diespino          #+#    #+#             */
/*   Updated: 2026/10/06 17:15:43 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <string>

class	PmergeMe {

	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe(void);

		struct Pair {

			int	smaller;
			int	larger;
		};

		struct Limit {

			std::list<int>::iterator	list_limit;
			std::size_t					vec_limit;
			int	num;
		};

		void	list(std::string values);
		void	vector(std::string values);
};

#endif
