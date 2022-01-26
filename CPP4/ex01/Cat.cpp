/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:43:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 19:32:29 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( const Cat &obj )
{
	(void)obj;
}

Cat &Cat::operator=( Cat const &obj ) 
{
	(void)obj;
    return *this;
}

std::string	Cat::getType() const
{
	return this->_type;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow...." << std::endl;
}
