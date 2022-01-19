/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:14:04 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 13:14:40 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	//std::cout << "__Ice default constructor__" << std::endl;
	this->_type = "ice";
}

Ice::Ice( const Ice &obj )
{
	//std::cout << "__Ice default copy constructor__" << std::endl;
	*this = obj;
}
		
Ice &Ice::operator=( const Ice &obj )
{
	//std::cout << "__Ice default assignation operator__" << std::endl;
	*this = obj;
	return *this;
}

Ice::~Ice()
{
	//std::cout << "__Ice default destructor__" << std::endl;
}

std::string const &Ice::getType() const
{
	return this->_type;
}

AMateria *Ice::clone() const
{
	AMateria *newMateria = new Ice();
	return newMateria;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
