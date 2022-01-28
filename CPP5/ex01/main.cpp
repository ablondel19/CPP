/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 14:33:26 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat wes("wes", -15); // Too High
	Bureaucrat tim("tim", 161); // Too Low
	Bureaucrat bob("bob", 1); // Valid
	Bureaucrat joe("joe", 150); // Valid
	std::cout << "------------------BOB------------------" << std::endl;
	std::cout << "getName method; " << bob.getName() << std::endl; 
	std::cout << "getGrade method; " << bob.getGrade() << std::endl;
	std::cout << "operator << overload; " << bob << std::endl;
	std::cout << "------------------JOE------------------" << std::endl;
	std::cout << "getName method; " << joe.getName() << std::endl;
	std::cout << "getGrade method; " << joe.getGrade() << std::endl;
	std::cout << "operator << overload; " << joe << std::endl;
	joe.demotion(); // loose 1 level = decrement error
	bob.promotion(); // gain 1 level = increment error
	joe.promotion(); // valid
	bob.demotion(); // valid
	wes.promotion(); // no effect
	std::cout << "operator << overload; " << bob << std::endl;
	std::cout << "operator << overload; " << joe << std::endl;
	Form form42("form42", 17, 42);
	form42.beSigned(joe); // error joe is level 150
	joe.signForm(form42); // error signature min grade is 17
	form42.beSigned(bob); // valid bob is level 2
	bob.signForm(form42); // valid signature min grade is 17
	std::cout << joe << std::endl;
	std::cout << bob << std::endl;
	std::cout << form42 << std::endl; // form signed
	return 0;
}
