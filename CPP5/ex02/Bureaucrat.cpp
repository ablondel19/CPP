/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:46:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 19:21:34 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
	//std::cout << "__Bureaucrat Default constructor__" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : _name(name), _grade(grade)
{
	//std::cout << "__Bureaucrat param constructor__" << std::endl;
	try
	{
		if (grade < 1)
			throw (Bureaucrat::GradeTooHighException("CREATION ERROR"));
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException("CREATION ERROR"));
	}
	catch( const Bureaucrat::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch( const Bureaucrat::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj )
{
	//std::cout << "__Bureaucrat Copy constructor__" << std::endl;
	*this = obj;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &obj )
{
	//std::cout << "__Bureaucrat Assignation operator__" << std::endl;
	(std::string)_name = obj.getName();
	_grade = obj.getGrade();
	return (*this);
}

std::ostream	&operator<<( std::ostream &o , Bureaucrat const &obj )
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (o);
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "__Bureaucrat Default destructor__" << std::endl;
}

std::string Bureaucrat::getName( void ) const
{
	return _name;
}

int			Bureaucrat::getGrade( void ) const
{
	return _grade;
}

void		Bureaucrat::promotion( void )
{
	try
	{
		if (_grade <= 1)
			throw ( Bureaucrat::GradeTooHighException("PROMOTION ERROR") );
		_grade--;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::demotion( void )
{
	try
	{
		if (_grade >= 150)
			throw ( Bureaucrat::GradeTooLowException("DEMOTION ERROR") );
		_grade++;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void		Bureaucrat::signForm( Form &f )
{
	try
	{
		if (f.getMinGradeToSign() < _grade)
			throw ( Form::GradeTooLowException("SIGNATURE ERROR") );
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch ( const Form::GradeTooLowException &e )
	{
		std::cerr << _name << " cannot sign because: ";
		std::cerr << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm( const Form &form )
{
	try
	{
		if (form.getMinGradeToExec() < _grade)
			throw ( Form::GradeTooLowException("EXECUTION ERROR") );
		std::cout << _name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch ( const Form::GradeTooLowException &e )
	{
		std::cerr << _name << " cannot execute form because: ";
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException( const char *errortype )
{
	_msg = "BUREAUCRAT GRADE IS TOO HIGH!";
	std::cout << " --- " << errortype << " --- " << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return _msg;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( const char *errortype )
{
	_msg = "BUREAUCRAT GRADE IS TOO LOW!";
	std::cout << " --- " << errortype << " --- " << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return _msg;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
