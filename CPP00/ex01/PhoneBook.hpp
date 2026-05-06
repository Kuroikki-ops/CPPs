/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:52:26 by diespino          #+#    #+#             */
/*   Updated: 2026/05/05 17:57:34 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

	private:
		Contact	_contact[8];
		int	_index;
		int	_num;
	
	public:
		PhoneBook(void);
		~PhoneBook(void);

		bool	add_contact(void);
		bool	search_contact(void);
};

#endif
