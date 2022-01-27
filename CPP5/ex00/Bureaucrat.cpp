/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:46:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 18:11:45 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	catch(const Bureaucrat::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj )
{
	//std::cout << "__Bureaucrat Copy constructor__" << std::endl;
	(std::string)this->_name = (std::string)obj.getName();
	this->_grade = obj.getGrade();
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &obj )
{
	//std::cout << "__Bureaucrat Assignation operator__" << std::endl;
	(std::string)this->_name = obj.getName();
	this->_grade = obj.getGrade();
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
	try
	{
		if (this->_grade <= 1)
			throw (Bureaucrat::GradeTooHighException("PROMOTION ERROR"));
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
		if (this->_grade >= 150)
			throw (Bureaucrat::GradeTooLowException("DEMOTION ERROR"));
		_grade++;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}
