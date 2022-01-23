/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:02:52 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:24:40 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	//std::cout << "Zombie default constructor" << std::endl;
}

Zombie::Zombie( std::string name )
{
	//std::cout << "Zombie parametric constructor" << std::endl;
	this->_name = name;
}

void    Zombie::announce( void )
{
	std::cout << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	//std::cout << "Zombie default destructor" << std::endl;
	std::cout << this->_name << "> is dead..." << std::endl;
}
