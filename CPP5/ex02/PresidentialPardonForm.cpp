/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:38:02 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 16:28:28 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _name(""), _minimumGradeToSign(25), _minimumGradeToExec(5), _isSigned(0)
{
	//std::cout << "__Default PresidentialPardonForm constructor__" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : _name(target), _minimumGradeToSign(25), _minimumGradeToExec(5), _isSigned(0)
{
	std::cout << "__Parametric PresidentialPardonForm constructor__" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj ) :  _name(obj.getName()), _minimumGradeToSign(obj.getMinGradeToSign()), _minimumGradeToExec(obj.getMinGradeToExec())
{
	//std::cout << "__Copy PresidentialPardonForm constructor__" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &obj )
{
	_name = obj.getName();
	const_cast<int&>(_minimumGradeToSign) = obj.getMinGradeToSign();
	const_cast<int&>(_minimumGradeToExec) = obj.getMinGradeToExec();
	_isSigned = obj.getFormState();
	return *this;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "__PresidentialPardonForm Destructor__" << std::endl;
}

std::string	PresidentialPardonForm::getName( void ) const
{
	return _name;
}

int 		PresidentialPardonForm::getFormState() const
{
	return _isSigned;
}

int			PresidentialPardonForm::getMinGradeToSign( void ) const
{
	return _minimumGradeToSign;
}

int			PresidentialPardonForm::getMinGradeToExec( void ) const
{
	return _minimumGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &obj )
{
	o << "-------------------------------------------\n";
	o << "| NAME:          	" << obj.getName() << "\n";
	o << "| SIGNATURE:     	" << obj.getFormState() << "/1\n";
	o << "| GRADE TO SIGN: 	" << obj.getMinGradeToSign() << "\n";
	o << "| GRADE TO EXEC: 	" << obj.getMinGradeToExec() << "\n";
	o << "-------------------------------------------";
	return (o);
}

void 		PresidentialPardonForm::execute( const Bureaucrat &executor ) const
{
	try
	{
		if (_isSigned == 0)
			throw ( Form::MissingSinature("EXECUTION ERROR") );
		if (executor.getGrade() > _minimumGradeToExec)
			throw ( Form::GradeTooHighException("PRESIDENTIAL: BUREAUCRAT LEVEL TOO LOW TO EXECUTE!") );
		std::cout << this->getName() << " à été pardonné par Zafod Beeblebrox." << std::endl;
	}
	catch ( const Form::MissingSinature &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
}

void	PresidentialPardonForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (obj.getGrade() > this->getMinGradeToSign())
			throw ( Form::GradeTooHighException("PRESIDENTIAL: BUREAUCRAT LEVEL TOO LOW TO SIGN!") );
		_isSigned = 1;
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
}
