/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:05:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:53:53 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	//const Animal *j = new Dog();
	//const Animal *i = new Cat();
	//const Animal *k = i;
	//delete j;
	//delete i;
	//std::cout << k->getType() << std::endl;

	const Animal *index[100];
	
	for (size_t i = 0; i < 100; i++)
	{
		if (i < 50)
			index[i] = new Dog();
		else
			index[i] = new Cat();
		std::cout << "--------------------------" << std::endl;
	}

	for (size_t i = 0; i < 100; i++)
	{
		delete index[i];
		std::cout << "--------------------------" << std::endl;
	}
}
