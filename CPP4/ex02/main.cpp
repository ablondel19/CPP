/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:05:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 18:03:15 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal *index[100];
	//Animal a;
	//Animal *A = new Animal;
	
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
