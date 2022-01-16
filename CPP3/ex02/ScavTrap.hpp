/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:16:17 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/16 21:36:40 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	
	protected:
	
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &obj );
		ScavTrap	&operator=( const ScavTrap &obj );
		~ScavTrap();
		
		void		guardGate();
		void		attack( std::string const & target );
};

#endif
