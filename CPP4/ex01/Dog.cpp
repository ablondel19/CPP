/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:39:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:39:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : _Brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog &obj )
{
	if (this != &obj) 
	{
    	this->_type = obj.getType();
		this->_Brain = obj._Brain;
    }
}

Dog &Dog::operator=( Dog const &obj ) 
{
    if (this != &obj)
	{
        this->_type = obj.getType();
		this->_Brain = obj._Brain;
        this->~Dog();
    }
    return *this;
}

Dog::~Dog()
{
	delete this->_Brain;
	std::cout << "Dog default destructor" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf Waf!!" << std::endl;
}
