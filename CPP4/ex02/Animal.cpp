/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:26:24 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 22:10:16 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( const Animal &obj )
{
	_type = obj.getType();
	std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator=( const Animal &obj )
{
	_type = obj.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor\n" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Hi dude i'm Patrick" << std::endl;
}
