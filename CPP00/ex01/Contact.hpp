/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:52:00 by diespino          #+#    #+#             */
/*   Updated: 2026/05/05 17:03:10 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact {

	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNum;
		std::string	_Secret;
	
	
	public:
		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
//		std::string	getPhoneNum(void) const;
//		std::string	getSecret(void) const;

		bool	setContact(void);
};

#endif
