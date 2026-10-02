/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:55:55 by diespino          #+#    #+#             */
/*   Updated: 2026/10/02 15:57:40 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include<string>
# include<map>
//# include<>

class BitcoinExchange {

	private:
		std::map<std::string, float>	_data;

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange(void);

		void	print_data(void);

		void	process_file(std::string file);
};

#endif
