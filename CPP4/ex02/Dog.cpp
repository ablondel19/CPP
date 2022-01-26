/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:39:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 21:57:57 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog &obj )
{
	_type = obj.getType();
	_brain = new Brain(*(obj.getBrain()));
}

Dog &Dog::operator=( Dog const &obj ) 
{
	if (_brain)
		delete _brain;
	_brain = new Brain();
	_type = obj.getType();
    return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog default destructor" << std::endl;
}

std::string Dog::getType( void ) const
{
	return _type;
}

Brain *Dog::getBrain( void ) const
{
	return _brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf Waf!!" << std::endl;
}
