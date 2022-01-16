/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:32:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/16 15:39:06 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	ClapTrap a("Clap");
	//a.debug();
	//ScavTrap b("Scav");
	//b.debug();
	//FragTrap c("Frag");
	//c.debug();
	DiamondTrap d("Diam");
	//d.debug();
	//a.attack("Scav");
	//b.takeDamage(10);
	//b.beRepaired(10);
	//b.attack("Clap");
	//a.takeDamage(100);
	//a.beRepaired(10);
	//b.guardGate();
	//c.attack("Clap");
	//a.takeDamage(100);
	//a.beRepaired(50);
	//c.highFiveGuys();
	std::cout << "------------------------------" << std::endl;
	d.whoAmI();
	d.attack("Clap");
	d.beRepaired(25);
	d.guardGate();
	d.highFiveGuys();
	std::cout << "------------------------------" << std::endl;
	return (0);
}
