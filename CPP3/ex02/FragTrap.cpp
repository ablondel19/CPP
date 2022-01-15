/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:55:49 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 14:01:06 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap param constructor >> name: " << this->_name << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj )
{
	*this = obj;
	std::cout << "FragTrap copy constructor >> name: " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor >> name: " << this->_name << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap : High five guys!" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
}