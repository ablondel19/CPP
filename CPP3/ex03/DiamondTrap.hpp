/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:52:39 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:29:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string _clap_name;
	protected:
	
	public:
		using ClapTrap::_name;
		using FragTrap::_hitPoints;
		using ScavTrap::_energyPoints;
		using FragTrap::_attackDamage;
		using ScavTrap::attack;
		using ClapTrap::getName;
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &obj );
		DiamondTrap( const ClapTrap &obj );
		DiamondTrap	&operator=( const DiamondTrap &obj );
		~DiamondTrap();
		void	whoAmI();
};

#endif
