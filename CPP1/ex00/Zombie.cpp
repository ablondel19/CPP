/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:02:52 by ablondel          #+#    #+#             */
/*   Updated: 2021/11/06 14:55:42 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->name = "";
}

Zombie::Zombie ( std::string name )
{
    this->name = name;
	std::cout << this->name << "> BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie ( void )
{
    std::cout << this->name << "> is dead...\n";
}