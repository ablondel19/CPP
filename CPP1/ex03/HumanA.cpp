/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 15:45:09 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _Weapon (club)
{
    this->_name = name;
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << _Weapon.getType() << std::endl;
}