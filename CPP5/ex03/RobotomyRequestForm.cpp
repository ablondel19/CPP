/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:34:05 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 16:30:22 by ablondel         ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj ) : _name(obj.getName()), _minimumGradeToSign(obj.getMinGradeToSign()), _minimumGradeToExec(obj.getMinGradeToExec())
{
	//std::cout << "__Copy RobotomyRequestForm constructor__" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &obj )
{
	_name = obj.getName();
	const_cast<int&>(_minimumGradeToSign) = obj.getMinGradeToSign();
	const_cast<int&>(_minimumGradeToExec) = obj.getMinGradeToExec();
	return *this;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "__RobotomyRequestForm Destructor__" << std::endl;
}

std::string	RobotomyRequestForm::getName( void ) const
{
	return _name;
}

int 		RobotomyRequestForm::getFormState() const
{
	return _isSigned;
}

int			RobotomyRequestForm::getMinGradeToSign( void ) const
{
	return _minimumGradeToSign;
}

int			RobotomyRequestForm::getMinGradeToExec( void ) const
{
	return _minimumGradeToExec;
}

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &obj )
{
	o << "-------------------------------------------\n";
	o << "| NAME:          	" << obj.getName() << "\n";
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
		if (_isSigned == 0)
			throw ( Form::MissingSinature("EXECUTION ERROR") );
		if (executor.getGrade() > _minimumGradeToExec)
			throw ( Form::GradeTooHighException("ROBOTOMY: BUREAUCRAT LEVEL TOO LOW TO EXECUTE!") );
		srand(time(NULL));
		int x = (rand() & 1);
		x = x << 1;
		x = x ^ (rand() & 1);
		if (x <= 0)
			std::cout << "bwiuUwUwuwuwwzzzt!!! " << getName() <<  " a bien été robotommisé" << std::endl;
		else
			std::cout << getName() <<  " n'a pas été robotommisé" << std::endl;
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

void	RobotomyRequestForm::beSigned( Bureaucrat &obj )
{
	try
	{
		if (obj.getGrade() > getMinGradeToSign())
			throw ( Form::GradeTooHighException("ROBOTOMY: BUREAUCRAT LEVEL TOO LOW TO SIGN!") );
		_isSigned = 1;
	}
	catch ( const Form::GradeTooHighException &e )
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
}
