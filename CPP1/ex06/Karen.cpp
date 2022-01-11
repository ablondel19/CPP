/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:08:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/11 13:42:28 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {};
Karen::~Karen() {};

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void	Karen::complain(int level)
{
	void (Karen::*fct[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	lvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	while (level <= 3)
	{
		(this->*(fct[level]))();
		level++;
	}
}
