/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:31:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 21:12:40 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <exception>
class Bureaucrat;

class	Form
{
	private:
		const std::string 	_formName;
		bool				_isSigned;
		const int			_minGradeToSign;
		const int			_minGradeToExec;
	protected:
		/* data */
	public:
		Form();
		Form( std::string name, int minGradeToSign, int minGradeToExec );
		Form( const Form &obj );
		Form &operator=( const Form &obj );
		virtual ~Form();
		std::string		getFormName( void ) const;
		virtual int		getFormState( void ) const;
		virtual int		getMinGradeToSign( void ) const;
		virtual int		getMinGradeToExec( void ) const;
		virtual void	beSigned( Bureaucrat &obj );
		virtual void	execute( Bureaucrat const &executor ) const = 0;
		

	class GradeTooHighException: public std::exception
	{
		private:
			const char *_msg;
		public:
			GradeTooHighException( const char *msg ) : _msg(msg) {}
			~GradeTooHighException() throw() {};
			const char *what() const throw() { return this->_msg; }
	};
	class GradeTooLowException: public std::exception
	{
		private:
			const char *_msg;
		public:
			GradeTooLowException( const char *msg ) : _msg(msg) {}
			~GradeTooLowException() throw() {}
			const char *what() const throw() { return this->_msg; }
	};
};

std::ostream	&operator<<( std::ostream &o, Form const &obj );

#endif