/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:34:11 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 22:54:18 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	RobotomyRequestForm: virtual public Form
{
	private:
		std::string _name;
		const int	_minimumGradeToSign;
		const int	_minimumGradeToExec;
		bool		_isSigned;
	protected:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( const RobotomyRequestForm &obj );
		RobotomyRequestForm &operator=( const RobotomyRequestForm &obj );
		~RobotomyRequestForm();
		virtual std::string	getFormName( void ) const;
		virtual int			getFormState( void ) const;
		virtual int			getMinGradeToSign( void ) const;
		virtual int			getMinGradeToExec( void ) const;
		virtual void		execute( Bureaucrat const &executor ) const;
		virtual void		beSigned( Bureaucrat &obj );
};

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &obj );

#endif
