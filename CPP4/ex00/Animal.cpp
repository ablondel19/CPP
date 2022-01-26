/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:26:24 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 17:38:26 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("some Animal")
{
	//std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal &obj )
{
	*this = obj;
	//std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator=( const Animal &obj )
{
	this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	//std::cout << "Animal default destructor" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Hi dude i'm Patrick" << std::endl; 
}
