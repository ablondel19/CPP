/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:32:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 13:01:29 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap a("Yooo");
	//a.debug();
	ScavTrap b("Yaaa");
	//b.debug();
	a.attack("Yaaa");
	b.takeDamage(10);
	b.beRepaired(10);
	b.attack("Yooo");
	a.takeDamage(100);
	a.beRepaired(10);
	b.guardGate();
	return (0);
}