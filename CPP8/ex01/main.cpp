/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:37:38 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/29 13:01:02 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int random(int min, int max) //range : [min, max]
{
	 static bool first = true;
	 if (first) 
	 {  
			srand( time(NULL) ); //seeding for the first time only!
			first = false;
	 }
	 return min + rand() % (( max + 1 ) - min);
}

int		main(void)
{
	std::vector<int> mirror;
	std::vector<int>::iterator it;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int value = random(1, 100);
		mirror.push_back(value);
		std::cout << "[" << mirror[i] << "]";
	}
	std::cout << std::endl;
	std::sort(mirror.begin(), mirror.end());
	for (int i = 0; i < 9; i++)
	{
		std::cout << "[" << mirror[i] << "]";
	}
	std::cout << std::endl;
	it = mirror.begin() + 1;
	return 0;
}
