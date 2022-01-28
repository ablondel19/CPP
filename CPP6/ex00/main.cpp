/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:06:10 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 20:09:17 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

int		main( int ac, char **av )
{
	if (ac == 2)
	{
		char c = 0;
		int i = 0;
		float f = 0.0f;
		double d = 0.0;
		c = static_cast<char>(Conv((std::string)av[1]));
		i = static_cast<int>(Conv((std::string)av[1]));
		f = static_cast<float>(Conv((std::string)av[1]));
		d = static_cast<double>(Conv((std::string)av[1]));
	}
}