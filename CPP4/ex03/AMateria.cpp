/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:53:12 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 23:32:05 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	//std::cout << "__AMateria Default constructor__" << std::endl;
}

AMateria::AMateria( std::string const &type )
{
	_type = type;
	//std::cout << "__AMateria parametric constructor__" << std::endl;
}

AMateria::AMateria( const AMateria &obj )
{
	//std::cout << "__AMateria Copy constructor__" << std::endl;
	*this = obj;
}

AMateria	&AMateria::operator=( const AMateria &obj )
{
	//std::cout << "__AMateria Assignation operator__" << std::endl;
	this->_type = obj._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

AMateria::~AMateria()
{
	//std::cout << "__AMateria Default destructor__" << std::endl;
}

void AMateria::use( ICharacter& target )
{
	(void)target;
}