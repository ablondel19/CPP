/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:56 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:29:38 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap param constructor >> name: " << this->_name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj )
{
	*this = obj;
	std::cout << "ClapTrap copy constructor >> name: " << this->_name << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &obj )
{
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " energy points." << std::endl;
}

void	ClapTrap::debug()
{
	std::cout << "\nDEBUG" << std::endl;
	std::cout << "Trap          " << this->_name << std::endl;
	std::cout << "hit points    " << this->_hitPoints << std::endl;
	std::cout << "energy points " << this->_energyPoints << std::endl;
	std::cout << "attack damage " << this->_attackDamage << std::endl;
	std::cout << "!DEBUG\n" << std::endl;
}
