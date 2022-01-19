/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:43:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:32:49 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat &obj )
{
	*this = obj;
	std::cout << "Cat copy constructor" << std::endl;
}
Cat	&Cat::operator=( const Cat &obj )
{
	this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow...." << std::endl;
}
