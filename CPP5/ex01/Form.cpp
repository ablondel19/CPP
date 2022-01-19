/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:33:50 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 23:48:41 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()  : _formName(""), _isSigned(0), _minGradeToSign(0), _minGradeToExec(0)
{
	//std::cout << "__Form Default constructor__" << std::endl;
}

Form::Form( std::string name, int minGradeToSign, int minGradeToExec ) : _formName(name), _isSigned(0), _minGradeToSign(minGradeToSign), _minGradeToExec(minGradeToExec)
{
	//std::cout << "__Form param constructor__" << std::endl;
	try
	{
		if (minGradeToSign < 1)
			throw ( Form::GradeTooHighException() );
		if (minGradeToSign > 150)
			throw ( Form::GradeTooLowException() );
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( const Form::GradeTooLowException &e )
	{
		std::cerr << "Minimum signature grade is 150." << std::endl;
	}
	try
	{
		if (minGradeToExec < 1)
		{
			throw ( Form::GradeTooHighException() );
		}
		if (minGradeToExec > 150)
		{
			throw ( Form::GradeTooLowException() );
		}
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << "Maximum execution grade is 1." << std::endl;
	}
	catch ( const Form::GradeTooLowException &e )
	{
		std::cerr << "Minimum execution grade is 150." << std::endl;
	}
}

Form::Form( const Form &obj ) : _formName(obj.getFormName()), _isSigned(obj.getFormState()), _minGradeToSign(obj.getMinGradeToSign()), _minGradeToExec(obj.getMinGradeToExec())
{
	//std::cout << "__Form Copy constructor__" << std::endl;
}

Form	&Form::operator=( const Form &obj )
{
	//std::cout << "__Form Assignation operator__" << std::endl;
	(std::string)this->_formName = obj.getFormName();
	this->_isSigned = obj.getFormState();
	const_cast<int&>(this->_minGradeToExec) = obj.getMinGradeToSign();
	const_cast<int&>(this->_minGradeToExec) = obj.getMinGradeToExec();
	return (*this);
}

Form::~Form()
{
	//std::cout << "__Form Default destructor__" << std::endl;
}

std::string	Form::getFormName( void ) const
{
	return this->_formName;
}

int			Form::getFormState( void ) const
{
	return this->_isSigned;
}

int			Form::getMinGradeToSign( void ) const
{
	return this->_minGradeToSign;
}

int			Form::getMinGradeToExec( void ) const
{
	return this->_minGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, Form const &obj )
{
	o << "NAME:          " << obj.getFormName() << "\n";
	o << "SIGNATURE:     " << obj.getFormState() << "/1\n";
	o << "GRADE TO SIGN: " << obj.getMinGradeToSign() << "\n";
	o << "GRADE TO EXEC: " << obj.getMinGradeToExec();
	return (o);
}

void Form::beSigned( Bureaucrat obj )
{
	if (obj.getGrade() <= this->_minGradeToSign && this->_isSigned == 0)
	{
		this->_isSigned = 1;
	}
}
