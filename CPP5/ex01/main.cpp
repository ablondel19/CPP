/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 21:22:03 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat Yo("Yo", 111);
	Bureaucrat Yi("Yi", 5);
	Form form1("form42", 11, 11);
	form1.beSigned(Yo);
	Yo.signForm(form1);
	form1.beSigned(Yi);
	Yi.signForm(form1);
	std::cout << Yo << std::endl;
	std::cout << Yi << std::endl;
	std::cout << form1 << std::endl;
	return 0;
}
