/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:49 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 12:50:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	protected:
		/* data */
	public:
		Bureaucrat();
		Bureaucrat( const std::string &name, int grade );
		Bureaucrat( const Bureaucrat &obj );
		Bureaucrat &operator=( const Bureaucrat &obj );
		~Bureaucrat();
		std::string getName( void ) const;
		int			getGrade( void ) const;
		void		promotion( void );
		void		demotion( void );
		
		class GradeTooHighException: virtual public std::exception
	{
		private:
		public:
			const char *_msg;
			GradeTooHighException() : _msg("BUREAUCRAT GRADE IS TOO HIGH!") {}
			virtual ~GradeTooHighException() throw() {};
			const char *what() const throw() { return _msg; }
	};
	class GradeTooLowException: virtual public std::exception
	{
		private:
		public:
			const char *_msg;
			GradeTooLowException() : _msg("BUREAUCRAT GRADE IS TOO LOW!") {}
			virtual ~GradeTooLowException() throw() {}
			const char *what() const throw() { return _msg; }
	};
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &obj );

#endif