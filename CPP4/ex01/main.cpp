/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:05:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 21:58:49 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	
	std::cout << "\n________________________________________________" << std::endl;
	std::cout << "\n****************[CONSTRUCTION]******************" << std::endl;
	std::cout << "________________________________________________" << std::endl;
	std::cout << "--Creation of cat()--" << std::endl;
	const Animal *i = new Cat();
	std::cout << "--Creation of dog()--" << std::endl;
	const Animal *j = new Dog();
	std::cout << "--Creation of animal()--" << std::endl;
	const Animal *k = new Animal();



	std::cout << "\n________________________________________________" << std::endl;
	std::cout << "\n****************[getType method]****************" << std::endl;
	std::cout << "________________________________________________" << std::endl;
	std::cout << "Cat:    _type = " << i->getType() << std::endl;
	std::cout << "Dog:    _type = " << j->getType() << std::endl;
	std::cout << "Animal: _type = " << k->getType() << std::endl;
	std::cout << std::endl;



	std::cout << "\n________________________________________________" << std::endl;
	std::cout << "\n***************[makesound method]***************" << std::endl;
	std::cout << "________________________________________________" << std::endl;
	std::cout << "Cat: " << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl;
	std::cout << "Dog: " << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl;
	std::cout << "Animal: " << k->getType() << std::endl;
	k->makeSound();
	std::cout << std::endl;



	std::cout << "\n________________________________________________" << std::endl;
	std::cout << "\n****************[DESTRUCTION]*******************" << std::endl;
	std::cout << "________________________________________________" << std::endl;
	std::cout << "--Deletion of cat()--" << std::endl;
	delete i;
	std::cout << "--Deletion of dog()--" << std::endl;
	delete j;
	std::cout << "--Deletion of animal()--" << std::endl;
	delete k;
	std::cout << "\n________________________________________________" << std::endl;
	std::cout << std::endl;
	


	std::cout << std::endl;
	const Animal *index[10];
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "[" << i << "]" << "--------------------------" << std::endl;
		if (i < 5)
			index[i] = new Dog();
		else
			index[i] = new Cat();
	}

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "[" << i << "]" << "--------------------------" << std::endl;
		delete index[i];
	}
	
	return 0;
}
