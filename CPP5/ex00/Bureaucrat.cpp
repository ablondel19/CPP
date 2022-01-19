/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:46:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 19:30:57 by ablondel         ###   ########.fr       */
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
			throw (Bureaucrat::GradeTooHighException());
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException());
	}
	catch(const Bureaucrat::GradeTooHighException)
	{
		std::cerr << "Maximum grade is 1." << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException)
	{
		std::cerr << "Minimum grade is 150." << std::endl;
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
