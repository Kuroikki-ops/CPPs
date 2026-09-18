/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:16:25 by diespino          #+#    #+#             */
/*   Updated: 2026/09/18 17:46:26 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span {

	private:
		unsigned int			_len;
		std::vector<unsigned int>	_v;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span(void);

		std::vector<unsigned int> getVector(void);
		unsigned int	getLen(void) const;

		void	addNumber(unsigned int value);
		
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class	NoSpace : public std::exception {

			public:
				const char* what() const throw ();
		};

		class	NotEnoughValues : public std::exception {

			public:
				const char* what() const throw ();
		};
};

#endif
