/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:38:06 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 15:31:27 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(std::string newClub)
{
    this->clubType = newClub;
}

std::string &Weapon::getType()
{
    return (clubType);
}

Weapon::Weapon(std::string newClub)
{
    setType(newClub);
}

Weapon::~Weapon()
{

}
