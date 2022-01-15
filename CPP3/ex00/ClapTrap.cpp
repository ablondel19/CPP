/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/01/14 16:33:56 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 11:15:03 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor >> name: " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor >> name: " << this->_name << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " energy points." << std::endl;
}
=======
/*   Created: 2022/01/14 18:36:54 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/14 18:37:14 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
>>>>>>> 5b11c590485fb508168da3f934ce1bf9450f7964
