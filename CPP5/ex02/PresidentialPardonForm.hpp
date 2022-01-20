/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:38:08 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 22:10:34 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	PresidentialPardonForm: virtual public Form
{
	private:
		std::string _name;
		const int	_minimumGradeToSign;
		const int	_minimumGradeToExec;
		bool		_isSigned;
	protected:
		/* data */
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( const PresidentialPardonForm &obj );
		PresidentialPardonForm &operator=( const PresidentialPardonForm &obj );
		~PresidentialPardonForm();
		virtual std::string	getFormName( void ) const;
		virtual int			getFormState( void ) const;
		virtual int			getMinGradeToSign( void ) const;
		virtual int			getMinGradeToExec( void ) const;
		virtual void		execute( Bureaucrat const &executor ) const;
		virtual void		beSigned( Bureaucrat &obj );
};

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &obj );

#endif
