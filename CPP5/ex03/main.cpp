/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 16:47:03 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someone;
	Form *rrf;
	rrf = someone.makeForm("robotomy request", "Bender");
	Bureaucrat c("charlie", 1);
	std::cout << c << std::endl;
	std::cout << *rrf << std::endl;
	rrf->beSigned(c);
	c.signForm(*rrf);
	std::cout << *rrf << std::endl;
	c.executeForm(*rrf);
	rrf->execute(c);
	return 0;
}
