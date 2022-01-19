/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:03:11 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 14:01:53 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	//std::cout << "__Cure default constructor__" << std::endl;
	this->_type = "cure";
}

Cure::Cure( const Cure &obj )
{
	//std::cout << "__Cure default copy constructor__" << std::endl;
	*this = obj;
}
		
Cure &Cure::operator=( const Cure &obj )
{
	//std::cout << "__Cure default assignation operator__" << std::endl;
	*this = obj;
	return *this;
}

Cure::~Cure()
{
	//std::cout << "__Cure default destructor__" << std::endl;
}

std::string const &Cure::getType() const
{
	return this->_type;
}

AMateria *Cure::clone() const
{
	AMateria *newMateria = new Cure();
	return newMateria;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	delete this;
}
