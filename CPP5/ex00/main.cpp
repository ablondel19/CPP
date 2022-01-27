/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 18:12:23 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	//Bureaucrat wes("wes", -15); // Too High
	//Bureaucrat tim("tim", 161); // Too Low
	//Bureaucrat bob("bob", 11); // Valid
	Bureaucrat joe("joe", -1); // Valid
	//std::cout << "------------------BOB------------------" << std::endl;
	//std::cout << bob.getName() << std::endl;
	//std::cout << bob.getGrade() << std::endl;
	std::cout << joe << std::endl;
	//bob.promotion(); // gain 1 level
	joe.promotion();
	std::cout << joe << std::endl;
	//std::cout << bob << std::endl;
	//std::cout << "------------------JOE------------------" << std::endl;
	//std::cout << joe.getName() << std::endl;
	//std::cout << joe.getGrade() << std::endl;
	//std::cout << joe << std::endl;
	//joe.demotion(); // loose 1 level
	return 0;
}