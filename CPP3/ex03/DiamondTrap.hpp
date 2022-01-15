/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:52:39 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 20:36:36 by ablondel         ###   ########.fr       */
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
		
	protected:
		std::string _clap_name;
	public:
		DiamondTrap();
		DiamondTrap( std::string clapName );
		DiamondTrap( const DiamondTrap &obj );
		DiamondTrap( const ClapTrap &obj );
		~DiamondTrap();
};

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::~DiamondTrap()
{
}


#endif