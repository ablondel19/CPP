/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:06:10 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 16:34:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

int		main( int ac, char **av )
{
	if (ac == 2)
	{
		static_cast<void>(static_cast<char>(Conv((std::string)av[1])));
		static_cast<void>(static_cast<int>(Conv((std::string)av[1])));
		static_cast<void>(static_cast<float>(Conv((std::string)av[1])));
		static_cast<void>(static_cast<double>(Conv((std::string)av[1])));
	}
}