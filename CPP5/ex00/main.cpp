/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 13:06:04 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	return 0;
}