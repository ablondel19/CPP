/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:38:06 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:50:49 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    //std::cout << "Weapon default constructor" << std::endl;
}

void    Weapon::setType( std::string newClub )
{
    //std::cout << "Weapon parametric constructor" << std::endl;
    this->_clubType = newClub;
}

std::string &Weapon::getType( void )
{
    return (_clubType);
}

Weapon::Weapon(std::string newClub)
{
    setType(newClub);
}

Weapon::~Weapon()
{
    //std::cout << "Weapon default destructor" << std::endl;
}
