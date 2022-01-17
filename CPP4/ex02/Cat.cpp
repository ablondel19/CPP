/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:43:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:52:53 by ablondel         ###   ########.fr       */
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
	*this = obj;
	std::cout << "Cat copy constructor" << std::endl;
}

void	Cat::deepCopy( const Cat &obj )
{
	delete this->_Brain;
	this->_Brain = new Brain();
	std::cout << "Cat deep copy constructor" << std::endl;
}

Cat	&Cat::operator=( const Cat &obj )
{
	if (this != &obj)
		deepCopy(obj);
	return (*this);
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
