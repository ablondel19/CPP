/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:39:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 19:32:50 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog( const Dog &obj )
{
	(void)obj;
}

Dog &Dog::operator=( Dog const &obj ) 
{
	(void)obj;
    return *this;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
}

std::string	Dog::getType() const
{
	return this->_type;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Waf Waf!!" << std::endl;
}
