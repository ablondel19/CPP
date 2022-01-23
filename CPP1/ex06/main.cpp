/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:18:42 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 16:35:59 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Karen.hpp"

int		main(int ac, char **av)
{
	if (ac >= 2)
	{
		Karen o;
		std::string lvl[4] = {"DEBUG", "INFO", "WARNGIN", "ERROR"};
		std::string level = av[1];
		size_t i;
		for (i = 0; i < 4; i++)
		{
			if (level == lvl[i])
				break ;
		}
		switch (i)
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