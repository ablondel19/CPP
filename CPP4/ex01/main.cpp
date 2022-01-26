/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:05:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 19:36:20 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "[TESTS FROM THE SUBJECT]" << "--------------------------" << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	//const Animal *k = new Animal();
	const Animal *k = i;
	delete j;
	delete i;
	//std::cout << "k is a copy of *i(Cat) and still exists after deleting i, k->getType() = " << k->getType() << std::endl;

	
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
