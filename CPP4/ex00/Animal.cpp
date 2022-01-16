/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:26:24 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/16 21:41:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
/////////////////////////////ANIMAL/////////////////////////////////////////////
Animal::Animal()
{
	this->_type = "some Animal";
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal &obj )
{
	*this = obj;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator=( const Animal &obj )
{
	*this = obj;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal default destructor" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Hi dude i'm Patrick" << std::endl; 
}
///////////////////////////////DOG//////////////////////////////////////////////
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog &obj )
{
	*this = obj;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=( const Dog &obj )
{
	*this = obj;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf Waf!!" << std::endl;
}
//////////////////////////////CAT////////////////////////////////////////////////
Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat &obj )
{
	*this = obj;
	std::cout << "Cat copy constructor" << std::endl;
}
Cat	&Cat::operator=( const Cat &obj )
{
	*this = obj;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow...." << std::endl;
}
