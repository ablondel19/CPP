/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:11:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 20:18:05 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Base.hpp"
#include <iostream>
#include <random>

int rdm(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first) 
   {  
      std::srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + std::rand() % (( max + 1 ) - min);
}

int		main( void )
{
	int x = 0;

	for (size_t i = 0; i < 10; i++)
	{
		x = rdm(1, 3);
		std::cout << x << std::endl;
	}
}