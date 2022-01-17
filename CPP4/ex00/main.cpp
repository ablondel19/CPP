/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:05:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 11:54:12 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class WrongAnimal
{
	private:
		
	protected:
		std::string _type;
	public:
		WrongAnimal() : _type("some weird animal") {};
		WrongAnimal( const WrongAnimal &obj ) { *this = obj; };
		~WrongAnimal() {};
		std::string		getType( void ) const { return this->_type; };
		void	makeSound( void ) const 
		{
			std::cout << "Hi dude i'm Kevin concombre!" << std::endl;
		};
};
class WrongCat: public WrongAnimal
{
	private:

	protected:
	
	public:
		WrongCat() {};
		WrongCat( const WrongCat &obj) {};
		~WrongCat() {};
		void	makeSound( void ) const 
		{
			std::cout << "Hi dude i'm Pepe the pew!" << std::endl;
		};
};

int main()
{
	const Animal* someAnimal = new Animal();
	const Animal* someDog = new Dog();
	const Animal* someCat = new Cat();
	std::cout << someDog->getType() << "getType() = type class" << std::endl;
	std::cout << someCat->getType() << "getType() = type class" << std::endl;
	std::cout << "The dog makes : ";
	someDog->makeSound();
	std::cout << "The cat makes : ";
	someCat->makeSound();
	std::cout << "the animal makes : ";
	someAnimal->makeSound();
	delete someDog;
	delete someCat;
	delete someAnimal;

	std::cout << "----------------WRONG-------------------" << std::endl;

	const WrongAnimal* someWrongAnimal = new WrongAnimal();
	const WrongAnimal* someWrongCat = new WrongCat();
	std::cout << "The wrong cat without virtual makes : ";
	someWrongCat->makeSound();
	std::cout << "The wrong animal without virtual makes : ";
	someWrongAnimal->makeSound();
	std::cout << "The wrong cat as a wrong cat makes : ";
	WrongCat C;
	C.makeSound();
}
