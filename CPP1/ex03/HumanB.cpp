/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:52 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 16:05:36 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

HumanB::~HumanB()
{
    
}

void	HumanB::setWeapon(Weapon &club)
{
	_Weapon = &club;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << _Weapon->getType() << std::endl;
}
