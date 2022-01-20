/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/20 14:47:10 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat Yo("Yo", 111);
	Bureaucrat Yi("Yi", 5);
	Form f("form42", 11, 11);
	f.beSigned(Yo);
	Yo.signForm(f);
	f.beSigned(Yi);
	Yi.signForm(f);
	std::cout << Yo << std::endl;
	std::cout << Yi << std::endl;
	std::cout << f << std::endl;
	return 0;
}
