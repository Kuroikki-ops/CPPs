/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:11:24 by diespino          #+#    #+#             */
/*   Updated: 2026/06/16 14:48:15 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class	AForm;

class	Bureaucrat {

	private:
		const std::string	_name;
		int			_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int		getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(AForm& form);
		void		executeForm(AForm const & form);

		class	GradeTooHighException : public std::exception {
		
			public:
				const char* what() const throw();
		};

		class   GradeTooLowException : public std::exception {
		
			public:
				const char* what() const throw();
		};
		
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureau);

#endif
