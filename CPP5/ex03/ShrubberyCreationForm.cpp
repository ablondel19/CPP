/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:03:21 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 19:22:37 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _name("_shrubbery"), _minimumGradeToSign(145), _minimumGradeToExec(137), _isSigned(0)
{
	//std::cout << "__Default ShrubberyCreationForm constructor__" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _name(target + "_shrubbery"), _minimumGradeToSign(45), _minimumGradeToExec(137), _isSigned(0)
{
	//std::cout << "__Parametric ShrubberyCreationForm constructor__" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj ) : _name(obj.getName()), _minimumGradeToSign(obj.getMinGradeToSign()), _minimumGradeToExec(obj.getMinGradeToExec()), _isSigned(obj.getFormState())
{
	//std::cout << "__Copy ShrubberyCreationForm constructor__" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &obj )
{
	_name = obj.getName();
	const_cast<int&>(_minimumGradeToSign) = obj.getMinGradeToSign();
	const_cast<int&>(_minimumGradeToExec) = obj.getMinGradeToExec();
	return *this;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "__ShrubberyCreationForm Destructor__" << std::endl;
}

std::string	ShrubberyCreationForm::getName( void ) const
{
	return _name;
}

int			ShrubberyCreationForm::getFormState( void ) const
{
	return _isSigned;
}

int			ShrubberyCreationForm::getMinGradeToSign( void ) const
{
	return _minimumGradeToSign;
}

int			ShrubberyCreationForm::getMinGradeToExec( void ) const
{
	return _minimumGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &obj )
{
	o << "-------------------------------------------\n";
	o << "| NAME:          	" << obj.getName() << "\n";
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
		if (_isSigned == 0)
			throw ( Form::MissingSinature("EXECUTION ERROR") );
		if (executor.getGrade() > _minimumGradeToExec)
			throw ( Form::GradeTooHighException("SHRUBBERY: BUREAUCRAT LEVEL TOO LOW TO EXECUTE!") );
		std::ofstream f(_name);
		f << "1 ARBRE 2 ARBRES ET UN 3e ARBRE EN ASCII HAHAHAHAAAA... flemme sérieux...";
		f.close();
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

void	ShrubberyCreationForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (obj.getGrade() > getMinGradeToSign())
			throw ( Form::GradeTooHighException("SHRUBBERY: BUREAUCRAT LEVEL TOO LOW TO SIGN!") );
		_isSigned = 1;
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
	}
}
