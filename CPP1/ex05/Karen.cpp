/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:08:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/11 13:23:55 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {};
Karen::~Karen() {};

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	int i = -1;
	void (Karen::*fct[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	lvl[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	while (++i < 4)
		if (level == lvl[i])
			return (this->*(fct[i]))();
	std::cout << "Karens don't do that" << std::endl;
}
