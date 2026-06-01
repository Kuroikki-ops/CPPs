/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:00:21 by diespino          #+#    #+#             */
/*   Updated: 2026/06/01 14:30:39 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool			_signed;
		const int		_grade;
		const int		_execute;

	public:
		Form(void);
		Form(const std::string name, const int grade, const int execute);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form(void);
		
		std::string	getName(void) const;
		bool		getFormStatus(void) const;
		int		getGradeValue(void)const;
		int		getExecuteValue(void)const;
		void		beSigned(const Bureaucrat& bureau);

		class	GradeTooHighException : public std::exception {

			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {

			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
