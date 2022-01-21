/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/21 00:01:18 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat a("alpha", 0);
	std::cout << a << std::endl;
	std::cout << "__________________________________________" << std::endl;
	ShrubberyCreationForm f1("Maison");
	std::cout << f1 << std::endl;




	Bureaucrat b("beta", 151);
	std::cout << b << std::endl;
	std::cout << "__________________________________________" << std::endl;
	RobotomyRequestForm f2("Jean-Mouloud");
	std::cout << f2 << std::endl;





	Bureaucrat c("charlie", 1);
	std::cout << c << std::endl;
	std::cout << "__________________________________________" << std::endl;
	PresidentialPardonForm f3("Georges-Richard");
	std::cout << f3 << std::endl;





	Bureaucrat d("delta", 42);
	std::cout << d << std::endl;
	std::cout << "__________________________________________" << std::endl;
	RobotomyRequestForm f4("WesBurger");
	std::cout << f4 << std::endl;




	return 0;
}
