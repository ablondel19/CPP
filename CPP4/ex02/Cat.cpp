/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:43:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:46:23 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : _Brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat &obj )
{
	if (this != &obj) 
	{
    	this->_type = obj.getType();
		this->_Brain = obj._Brain;
    }
}

Cat &Cat::operator=( Cat const &obj ) 
{
    if (this != &obj)
	{
        this->_type = obj.getType();
		this->_Brain = obj._Brain;
        this->~Cat();
    }
    return *this;
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "Cat default destructor" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow...." << std::endl;
}
