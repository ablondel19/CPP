/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:32:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/16 14:06:19 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap a("Clap");
	//a.debug();
	ScavTrap b("Scav");
	// b.debug();
	a.attack("Scav");
	b.takeDamage(10);
	b.beRepaired(10);
	b.attack("Clap");
	a.takeDamage(100);
	a.beRepaired(10);
	b.guardGate();
	return (0);
}