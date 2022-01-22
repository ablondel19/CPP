/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:06:10 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 19:56:19 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main( int ac, char **av )
{
	
	if (ac == 2)
	{
		//char a = static_cast<char>(std::stoi(av[1]));

		//int i = static_cast<int>(std::stoi(av[1]));

		float f = static_cast<float>(std::stof(av[1]));

		double d = static_cast<double>(std::stod(av[1]));

		
		
		
		//std::cout << a << std::endl;
		//std::cout << i << std::endl;
		std::cout << f << std::endl;
		std::cout << d << std::endl;
	}
}