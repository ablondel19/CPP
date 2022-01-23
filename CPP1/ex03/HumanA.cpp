/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:52:10 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon &club ) : _Weapon (club)
{
	//std::cout << "HumanA parametric constructor" << std::endl;
	this->_name = name;
}

HumanA::~HumanA()
{
	//std::cout << "HumanA default destructor" << std::endl;
}

void    HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << _Weapon.getType() << std::endl;
}