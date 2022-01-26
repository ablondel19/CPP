/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:26:24 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 19:36:36 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal &obj )
{
	this->_type = obj._type;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator=( const Animal &obj )
{
	this->_type = obj._type;
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
