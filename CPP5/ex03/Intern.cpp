/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:56:01 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 16:41:15 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	//std::cout << "__Intern Default constructor__" << std::endl;
}

Intern::Intern( const Intern &obj )
{
	//std::cout << "__Intern Copy constructor__" << std::endl;
	(void)obj;
}

Intern	&Intern::operator=( const Intern &obj )
{
	//std::cout << "__Intern Assignation operator__" << std::endl;
	(void)obj;
	return (*this);
}

Intern::~Intern()
{
	//std::cout << "__Intern Default destructor__" << std::endl;
}

Form *InternShrubberyCreation(std::string target)
{
	Form *newForm = new ShrubberyCreationForm(target);
	return newForm;
}

Form *InternRobotomyRequest(std::string target)
{
	Form *newForm = new RobotomyRequestForm(target);
	return newForm;
}

Form *InternPresidentialPardon(std::string target)
{
	Form *newForm = new PresidentialPardonForm(target);
	return newForm;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	Form *(*fct[3])(std::string target) = {InternShrubberyCreation, InternRobotomyRequest, InternPresidentialPardon};
	std::string	lvl[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	for (size_t i = 0; i < 3; i++)
	{
		if (formName.compare(lvl[i]) == 0)
		{
			std::cout << "Intern creates " << lvl[i] << std::endl;
			return (fct[i])(target);
		}
	}
	std::cout << "Unknown Form type" << std::endl;
	return NULL;
}
