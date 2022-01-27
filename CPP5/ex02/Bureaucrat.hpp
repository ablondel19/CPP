/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:49 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 21:34:20 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
class Form;

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
		void		signForm( Form &f );
		
	class GradeTooHighException: virtual public std::exception
	{
		private:
			const char *_msg;
		public:
			GradeTooHighException( const char *errortype ) : _msg("GRADE IS TOO HIGH!") {
				std::cout << " --- " << errortype << " --- " << std::endl;
			}
			virtual ~GradeTooHighException() throw() {};
			const char *what() const throw() { return _msg; }
	};
	class GradeTooLowException: virtual public std::exception
	{
		private:
			const char *_msg;
		public:
			GradeTooLowException( const char *errortype ) : _msg("GRADE IS TOO LOW!") {
				std::cout << " --- " << errortype << " --- " << std::endl;
			}
			virtual ~GradeTooLowException() throw() {}
			const char *what() const throw() { return _msg; }
	};
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &obj );

#endif
