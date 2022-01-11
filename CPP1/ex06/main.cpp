/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:18:42 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/11 15:10:29 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Karen.hpp"

int		level(std::string s)
{
	if (s.compare("DEBUG") == 0)
		return (0);
	else if (s.compare("INFO") == 0)
		return (1);
	else if (s.compare("WARNING") == 0)
		return (2);
	else if (s.compare("ERROR") == 0)
		return (3);
	return (-1);
}

int		main(int ac, char **av)
{
	if (ac >= 2)
	{
		Karen o;
		std::string lvl;
		lvl = av[1];
		switch (level(lvl))
		{
			case 0:
				o.complain(0);
				break;
			case 1:
				o.complain(1);
				break;
			case 2:
				o.complain(2);
				break;
			case 3:
				o.complain(3);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
				break;
		}
	}
	return (0);
}