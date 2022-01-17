/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:39:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:53:25 by ablondel         ###   ########.fr       */
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
	*this = obj;
	std::cout << "Dog copy constructor" << std::endl;
}

void	Dog::deepCopy( const Dog &obj )
{
	delete this->_Brain;
	this->_Brain = new Brain();
	std::cout << "Dog deep copy constructor" << std::endl;
}

Dog	&Dog::operator=( const Dog &obj )
{
	if (this != &obj)
		deepCopy(obj);
	return (*this);
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
