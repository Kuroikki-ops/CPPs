/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:55:18 by diespino          #+#    #+#             */
/*   Updated: 2026/09/03 20:05:42 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include <string>

struct	Data {

	std::string	data_str;
	int		data_int;
};

class	Serializer {

	private:
		Serializer(void);
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		~Serializer(void);
		
	public:

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t  raw);
};

#endif
