/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:38:02 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 23:15:08 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _minimumGradeToSign(25), _minimumGradeToExec(5), _isSigned(0)
{
	//std::cout << "__Default PresidentialPardonForm constructor__" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _name(target), _minimumGradeToSign(25), _minimumGradeToExec(5), _isSigned(0)
{
	//std::cout << "__Parametric PresidentialPardonForm constructor__" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj ) : _name(obj.getFormName()), _minimumGradeToSign(obj.getMinGradeToSign()), _minimumGradeToExec(obj.getMinGradeToExec())
{
	//std::cout << "__Copy PresidentialPardonForm constructor__" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &obj )
{
	this->_name = obj.getFormName();
	const_cast<int&>(this->_minimumGradeToSign) = obj.getMinGradeToSign();
	const_cast<int&>(this->_minimumGradeToExec) = obj.getMinGradeToExec();
	return *this;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "__PresidentialPardonForm Destructor__" << std::endl;
}

std::string	PresidentialPardonForm::getFormName( void ) const
{
	return this->_name;
}

int 		PresidentialPardonForm::getFormState() const
{
	return this->_isSigned;
}

int			PresidentialPardonForm::getMinGradeToSign( void ) const
{
	return this->_minimumGradeToSign;
}

int			PresidentialPardonForm::getMinGradeToExec( void ) const
{
	return this->_minimumGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &obj )
{
	o << "-------------------------------------------\n";
	o << "| NAME:          	" << obj.getFormName() << "\n";
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
		if (executor.getGrade() > this->_minimumGradeToExec)
			throw ( Form::GradeTooHighException("PRESIDENTIAL: BUREAUCRAT LEVEL TOO LOW TO EXECUTE!") );
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->_minimumGradeToExec && this->getFormState() == 1 && executor.getGrade() >= 1)
	{
		std::cout << this->getFormName() << " à été pardonné par Zafod Beeblebrox." << std::endl;
	}
}

void	PresidentialPardonForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (obj.getGrade() > this->getMinGradeToSign())
			throw ( Form::GradeTooHighException("PRESIDENTIAL: BUREAUCRAT LEVEL TOO LOW TO SIGN!") );
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