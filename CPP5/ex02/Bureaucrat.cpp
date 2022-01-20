/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:46:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 13:37:32 by ablondel         ###   ########.fr       */
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
			throw (Bureaucrat::GradeTooHighException("BUREAUCRAT GRADE IS TOO HIGH!"));
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException("BUREAUCRAT GRADE IS TOO LOW!"));
	}
	catch(const Bureaucrat::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e )
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj )
{
	//std::cout << "__Bureaucrat Copy constructor__" << std::endl;
	(std::string)this->_name = (std::string)obj._name;
	this->_grade = obj._grade;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &obj )
{
	//std::cout << "__Bureaucrat Assignation operator__" << std::endl;
	(std::string)this->_name = obj.getName();
	this->_grade = obj._grade;
	return (*this);
}

std::ostream	&operator<<( std::ostream &o , Bureaucrat const &obj)
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
	return this->_name;
}

int			Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void		Bureaucrat::promotion( void )
{
	if (this->_grade >= 1)
		this->_grade--;
}

void		Bureaucrat::demotion( void )
{
	if (this->_grade <= 150)
		this->_grade++;
}

void		Bureaucrat::signForm(Form f)
{
	try
	{
		if (f.getMinGradeToSign() < this->_grade)
			throw ( Form::GradeTooHighException("LEVEL TOO LOW TO SIGN!") );
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << this->_name << " cannot sign because: ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signs " << f.getFormName() << std::endl;
}