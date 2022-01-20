/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:34:05 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 23:15:29 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _minimumGradeToSign(72), _minimumGradeToExec(45), _isSigned(0)
{
	//std::cout << "__Default RobotomyRequestForm constructor__" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _name(target), _minimumGradeToSign(72), _minimumGradeToExec(45), _isSigned(0)
{
	//std::cout << "__Parametric RobotomyRequestForm constructor__" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj ) : _name(obj.getFormName()), _minimumGradeToSign(obj.getMinGradeToSign()), _minimumGradeToExec(obj.getMinGradeToExec())
{
	//std::cout << "__Copy RobotomyRequestForm constructor__" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &obj )
{
	this->_name = obj.getFormName();
	const_cast<int&>(this->_minimumGradeToSign) = obj.getMinGradeToSign();
	const_cast<int&>(this->_minimumGradeToExec) = obj.getMinGradeToExec();
	return *this;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "__RobotomyRequestForm Destructor__" << std::endl;
}

std::string	RobotomyRequestForm::getFormName( void ) const
{
	return this->_name;
}

int 		RobotomyRequestForm::getFormState() const
{
	return this->_isSigned;
}

int			RobotomyRequestForm::getMinGradeToSign( void ) const
{
	return this->_minimumGradeToSign;
}

int			RobotomyRequestForm::getMinGradeToExec( void ) const
{
	return this->_minimumGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &obj )
{
	o << "-------------------------------------------\n";
	o << "| NAME:          	" << obj.getFormName() << "\n";
	o << "| SIGNATURE:     	" << obj.getFormState() << "/1\n";
	o << "| GRADE TO SIGN: 	" << obj.getMinGradeToSign() << "\n";
	o << "| GRADE TO EXEC: 	" << obj.getMinGradeToExec() << "\n";
	o << "-------------------------------------------";
	return (o);
}

void 		RobotomyRequestForm::execute( const Bureaucrat &executor ) const
{
	try
	{
		if (executor.getGrade() > this->_minimumGradeToExec)
			throw ( Form::GradeTooHighException("ROBOTOMY: BUREAUCRAT LEVEL TOO LOW TO EXECUTE!") );
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->_minimumGradeToExec && this->getFormState() == 1 && executor.getGrade() >= 1)
	{
		srand(time(NULL));
		int x = (rand() & 1);
		x = x << 1;
		x = x ^ (rand() & 1);
		if (x < 0)
			std::cout << "bwiuUwUwuwuwwzzzt!!! " << this->getFormName() <<  " a bien été robotommisé" << std::endl;
		else
			std::cout << this->getFormName() <<  " n'a pas été robotommisé" << std::endl;
	}
}

void	RobotomyRequestForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (obj.getGrade() > this->getMinGradeToSign())
			throw ( Form::GradeTooHighException("ROBOTOMY: BUREAUCRAT LEVEL TOO LOW TO SIGN!") );
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