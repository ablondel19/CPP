/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:32:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/16 13:43:42 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	ClapTrap a("Clap");
	//a.debug();
	ScavTrap b("Scav");
	//b.debug();
	FragTrap c("Frag");
	//c.debug();
	a.attack("Scav");
	b.takeDamage(10);
	b.beRepaired(10);
	b.attack("Clap");
	a.takeDamage(100);
	a.beRepaired(10);
	b.guardGate();
	c.attack("Clap");
	a.takeDamage(100);
	a.beRepaired(50);
	c.highFiveGuys();
	return (0);
}