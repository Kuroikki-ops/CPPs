/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:00:21 by diespino          #+#    #+#             */
/*   Updated: 2026/06/16 16:01:49 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm {

	private:
		const std::string	_name;
		bool			_signed;
		const int		_grade;
		const int		_execute;

	public:
		AForm(void);
		AForm(const std::string name, const int grade, const int execute);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm(void);

//GETERs
		std::string	getName(void) const;
		bool		getFormStatus(void) const;
		int		getGradeValue(void)const;
		int		getExecuteValue(void)const;

//METHODs
		void		beSigned(const Bureaucrat& bureau);
		void		isSigned(const AForm& form) const;
		bool		beExecuted(const Bureaucrat& bureau) const;

//ABST. METHOD
		virtual void	execute(Bureaucrat const & executor) const = 0;

//NESTED CLASS
		class	GradeTooHighException : public std::exception {

			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {

			public:
				const char* what() const throw();
		};
		
		class	FormNotSigned : public std::exception {

			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const AForm& form);

#endif
