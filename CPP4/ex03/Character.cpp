/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:26:31 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 19:59:33 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _idx(0)
{
	//std::cout << "__Character Default constructor__" << std::endl;
}

Character::Character( std::string name ) : _idx(0)
{
	this->_name = name;
}

Character::Character( const Character &obj )
{
	std::cout << "__Character Copy constructor__" << std::endl;
	*this = obj;
}

Character	&Character::operator=( const Character &obj )
{
	std::cout << "__Character Assignation operator__" << std::endl;
	*this = obj;
	return (*this);
}

Character::~Character()
{
	std::cout << "__Character Default destructor__" << std::endl;
}

std::string const & Character::getName() const
{
	return this->_name;
}

std::string const &Character::getType() const
{
	return (this->_inventory[this->_idx]->getType());
}

void Character::equip(AMateria * m)
{
	this->_inventory[this->_idx] = m;
	this->_idx++;
}

void Character::unequip( int idx )
{
	this->_inventory[idx] = NULL;
}

void Character::use( int idx, ICharacter & target )
{
	this->_inventory[idx]->use( target );
}