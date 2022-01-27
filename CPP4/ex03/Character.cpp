/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:26:31 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 13:44:14 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	//std::cout << "__Character Default constructor__" << std::endl;
	_name = "";
	_idx = 0;
	_discardedIdx = 0;
	for (size_t i = 0; i <= 3; i++)
		_inventory[i] = NULL;
	for (size_t i = 0; i < 100; i++)
		_discarded[i] = NULL;
}

Character::Character( std::string name )
{
	//std::cout << "__Character parametric constructor__" << std::endl;
	_name = name;
	_idx = 0;
	_discardedIdx = 0;
	for (size_t i = 0; i <= 3; i++)
		_inventory[i] = NULL;
	for (size_t i = 0; i < 100; i++)
		_discarded[i] = NULL;
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
	for (size_t i = 0; i < 100; i++)
	{
		_discarded[i] = obj._discarded[i];
	}
	return *this;
}

AMateria *Character::getMateria( int idx ) const
{
	return _inventory[idx];
}

Character::~Character()
{
	//std::cout << "__Character Default destructor__" << std::endl;
	for (size_t i = 0; i <= 3; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (_discarded[i] != NULL)
			delete _discarded[i];
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
	if (_idx > 3 || !m)
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

void Character::unequip( int idx )
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_discarded[_discardedIdx] = _inventory[idx];
	_inventory[idx] = NULL;
	_discardedIdx++;
	_idx--;
}

void Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return ;
	_inventory[idx]->use( target );
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
	for (int i = 0; i < _discardedIdx; i++)
	{
		if (_discarded[i] != NULL)
		{
			std::cout << "junk [" << i << "]> " << _discarded[i]->getType() << std::endl;
		}
		else
			std::cout << "junk [" << i << "]> is empty" << std::endl;
	}
}
