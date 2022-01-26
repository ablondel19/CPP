/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:39:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 17:36:11 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
	//std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog &obj )
{
	*this = obj;
	//std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=( const Dog &obj )
{
	this->_type = obj._type;
	return (*this);
}

Dog::~Dog()
{
	//std::cout << "Dog default destructor" << std::endl;
}

std::string Dog::getType() const
{
	return this->_type;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf Waf!!" << std::endl;
}
