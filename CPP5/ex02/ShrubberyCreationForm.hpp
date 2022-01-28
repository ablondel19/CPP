/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:04:01 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 16:20:22 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class	ShrubberyCreationForm: virtual public Form
{
	private:
		std::string _name;
		const int	_minimumGradeToSign;
		const int	_minimumGradeToExec;
		bool		_isSigned;
	protected:
		/* data */
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( const ShrubberyCreationForm &obj );
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &obj );
		~ShrubberyCreationForm();
		virtual std::string	getName( void ) const;
		virtual int			getFormState( void ) const;
		virtual int			getMinGradeToSign( void ) const;
		virtual int			getMinGradeToExec( void ) const;
		virtual void		execute( Bureaucrat const &executor ) const;
		virtual void		beSigned( Bureaucrat &obj );
};

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &obj );

#endif
