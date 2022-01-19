/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:51:05 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:29:24 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" ), ScavTrap( name + "_clap_name" )
{
	this->_clap_name = name;
	std::cout << "DiamondTrap param constructor >> name: " << this->_clap_name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj )
{
	*this = obj;
	std::cout << "DiamondTrap param constructor >> name: " << std::endl;
}

DiamondTrap::DiamondTrap( const ClapTrap &obj )
{
	this->_clap_name = obj.getName();
	std::cout << "DiamondTrap param constructor >> name: " << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &obj )
{
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor >> name: " << this->_clap_name << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name : " << this->_clap_name << std::endl;
	std::cout << "Clap name : " << this->_name << std::endl;
}