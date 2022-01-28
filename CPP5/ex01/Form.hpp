/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:31:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 14:14:13 by ablondel         ###   ########.fr       */
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
		~Form();
		std::string	getFormName( void ) const;
		int			getFormState( void ) const;
		int			getMinGradeToSign( void ) const;
		int			getMinGradeToExec( void ) const;
		void		beSigned( Bureaucrat obj );
		

	class GradeTooHighException: virtual public std::exception
	{
		private:
			const char *_msg;
		public:
			GradeTooHighException( const char *errortype );
			~GradeTooHighException() throw();
			const char *what() const throw();
	};
	class GradeTooLowException: virtual public std::exception
	{
		private:
			const char *_msg;
		public:
			GradeTooLowException( const char *errortype );
			~GradeTooLowException() throw();
			const char *what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &o, Form const &obj );

#endif