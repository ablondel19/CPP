/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:03:21 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 23:15:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _name("_shrubbery"), _minimumGradeToSign(45), _minimumGradeToExec(137), _isSigned(0)
{
	//std::cout << "__Default ShrubberyCreationForm constructor__" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _name(target + "_shrubbery"), _minimumGradeToSign(45), _minimumGradeToExec(137), _isSigned(0)
{
	//std::cout << "__Parametric ShrubberyCreationForm constructor__" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj ) : _name(obj.getFormName()), _minimumGradeToSign(obj.getMinGradeToSign()), _minimumGradeToExec(obj.getMinGradeToExec()), _isSigned(obj.getFormState())
{
	//std::cout << "__Copy ShrubberyCreationForm constructor__" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &obj )
{
	this->_name = obj.getFormName();
	const_cast<int&>(this->_minimumGradeToSign) = obj.getMinGradeToSign();
	const_cast<int&>(this->_minimumGradeToExec) = obj.getMinGradeToExec();
	return *this;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "__ShrubberyCreationForm Destructor__" << std::endl;
}

std::string	ShrubberyCreationForm::getFormName( void ) const
{
	return this->_name;
}

int			ShrubberyCreationForm::getFormState( void ) const
{
	return this->_isSigned;
}

int			ShrubberyCreationForm::getMinGradeToSign( void ) const
{
	return this->_minimumGradeToSign;
}

int			ShrubberyCreationForm::getMinGradeToExec( void ) const
{
	return this->_minimumGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &obj )
{
	o << "-------------------------------------------\n";
	o << "| NAME:          	" << obj.getFormName() << "\n";
	o << "| SIGNATURE:     	" << obj.getFormState() << "/1\n";
	o << "| GRADE TO SIGN: 	" << obj.getMinGradeToSign() << "\n";
	o << "| GRADE TO EXEC: 	" << obj.getMinGradeToExec() << "\n";
	o << "-------------------------------------------";
	return (o);
}

void 		ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	try
	{
		if (executor.getGrade() > this->_minimumGradeToExec)
			throw ( Form::GradeTooHighException("SHRUBBERY: BUREAUCRAT LEVEL TOO LOW TO EXECUTE!") );
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->_minimumGradeToExec && this->getFormState() == 1 && executor.getGrade() >= 1)
	{
		std::ofstream f(this->_name);
		f << "1 ARBRE 2 ARBRES ET UN 3e ARBRE EN ASCII HAHAHAHAAAA... flemme sérieux...";
		f.close();
	}
}

void	ShrubberyCreationForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (obj.getGrade() > this->getMinGradeToSign())
			throw ( Form::GradeTooHighException("SHRUBBERY: BUREAUCRAT LEVEL TOO LOW TO SIGN!") );
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	if (obj.getGrade() <= this->getMinGradeToSign() && this->getFormState() == 0 && obj.getGrade() >= 1)
	{
		this->_isSigned = 1;
	}
}
