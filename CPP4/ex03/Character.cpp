/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:26:31 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 13:28:36 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _idx(0)
{
	//std::cout << "__Character Default constructor__" << std::endl;
	this->_name = "";
	this->_idx = 0;
	for (size_t i = 0; i <= 3; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character( std::string name )
{
	this->_name = name;
	this->_idx = 0;
	for (size_t i = 0; i <= 3; i++)
	{
		this->_inventory[i] = NULL;
	}
}

void Character::deepCopy( const Character &obj )
{
	//std::cout << "__Character Copy constructor__" << std::endl;
	Character *neo = new Character( obj._name );
	neo->_idx = obj._idx;
	for (size_t i = 0; i <= 3; i++)
	{
		neo->_inventory[i] = obj._inventory[i];
	}
}

Character::Character( const Character &obj )
{
	deepCopy(obj);
}

Character	&Character::operator=( const Character &obj )
{
	//std::cout << "__Character Assignation operator__" << std::endl;
	if (this != &obj)
		deepCopy(obj);
	return (*this);
}

Character::~Character()
{
	std::cout << "__Character Default destructor__" << std::endl;
	for (size_t i = 0; i <= 3; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

std::string const &Character::getName() const
{
	return this->_name;
}

std::string const &Character::getType() const
{
	return this->_inventory[this->_idx]->getType();
}

void Character::equip( AMateria * m )
{
	if (this->_idx > 3)
		return ;
	for (size_t i = 0; i <= 3; i++)
	{
		if (this->_inventory[this->_idx] == NULL)
		{
			this->_inventory[this->_idx] = m;
			this->_idx++;
			return ;
		}
	}
}

void Character::unequip( int idx )
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx] = NULL;
	this->_idx--;
}

void Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use( target );
	unequip(idx);
}

void Character::debugInventory() const
{
	for (size_t i = 0; i <= 3; i++)
	{
		if (this->_inventory[i] != NULL)
			std::cout << "slot [" << i << "]> " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << "slot [" << i << "]> is empty" << std::endl;
	}
}
