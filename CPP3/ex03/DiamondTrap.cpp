/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:51:05 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 20:40:09 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap( std::string clapName ) : ClapTrap(clapName + "_clap_name"), ..., ..., _name(clapName)
{
	
	this->_clap_name = clapName;

}

DiamondTrap::DiamondTrap( const DiamondTrap &obj )
{
	*this = obj;
	std::cout << "DiamondTrap param constructor >> name: " << std::endl;
}

DiamondTrap::DiamondTrap( const ClapTrap &obj )
{
	this->_clap_name = obj.ClapTrap::_name;
	std::cout << "DiamondTrap param constructor >> name: " << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj )
{
	*this = obj;
	std::cout << "DiamondTrap copy constructor >> name: " << this->_clap_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor >> name: " << this->_clap_name << std::endl;
}
