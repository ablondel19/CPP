/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:26:31 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 23:50:53 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _idx(0)
{
	//std::cout << "__Character Default constructor__" << std::endl;
	_name = "";
	_idx = 0;
	for (size_t i = 0; i <= 3; i++)
		_inventory[i] = NULL;
}

Character::Character( std::string name )
{
	//std::cout << "__Character parametric constructor__" << std::endl;
	_name = name;
	_idx = 0;
	for (size_t i = 0; i <= 3; i++)
		_inventory[i] = NULL;
}

Character::Character( const Character &obj )
{
	//std::cout << "__Character copy constructor__" << std::endl;
	*this = obj;
}

Character &Character::operator=( Character const &obj ) 
{
	_name = obj.getName();
	for (int i = 0; i < 4; i++)
	{
		AMateria const *temp = obj._inventory[i];
		if (temp)
			_inventory[i] = temp->clone();
		else
			_inventory[i] = NULL;
	}
	return *this;
}

Character::~Character()
{
	//std::cout << "__Character Default destructor__" << std::endl;
	for (size_t i = 0; i <= 3; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

std::string const &Character::getName() const
{
	return _name;
}

std::string const &Character::getType() const
{
	return _inventory[_idx]->getType();
}

void Character::equip( AMateria * m )
{
	if (_idx > 3)
		return ;
	for (size_t i = 0; i <= 3; i++)
	{
		if (_inventory[_idx] == NULL)
		{
			_inventory[_idx] = m;
			_idx++;
			return ;
		}
	}
}

/*
Handle the Materias your character left on the floor as you like.
Save the addresses before calling unequip(), or anything else, but
don’t forget that you have to avoid memory leaks.
*/
void Character::unequip( int idx )
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx] = NULL;
	_idx--;
}

void Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use( target );
	unequip(idx);
}

void Character::debugInventory() const
{
	for (size_t i = 0; i <= 3; i++)
	{
		if (_inventory[i] != NULL)
			std::cout << "slot [" << i << "]> " << _inventory[i]->getType() << std::endl;
		else
			std::cout << "slot [" << i << "]> is empty" << std::endl;
	}
}
