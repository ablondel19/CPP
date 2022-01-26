/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:43:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 21:57:34 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat &obj )
{
	_type = obj.getType();
	_brain = new Brain(*(obj.getBrain()));
}

Cat &Cat::operator=( Cat const &obj ) 
{
	if (_brain)
		delete _brain;
	_brain = new Brain();
	_type = obj.getType();
    return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat default destructor" << std::endl;
}

std::string Cat::getType() const
{
	return _type;
}

Brain *Cat::getBrain( void ) const
{
	return _brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow...." << std::endl;
}
