/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:26:24 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 09:48:10 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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
