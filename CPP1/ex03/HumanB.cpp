/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:52 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:51:51 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name )
{
    //std::cout << "HumanB parametric constructor" << std::endl;
    this->_name = name;
}

HumanB::~HumanB()
{
    //std::cout << "HumanB default destructor" << std::endl;
}

void	HumanB::setWeapon( Weapon &club )
{
	_Weapon = &club;
}

void    HumanB::attack( void )
{
    std::cout << this->_name << " attacks with his " << _Weapon->getType() << std::endl;
}
