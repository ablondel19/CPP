/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:09 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 20:40:07 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	private:

	protected:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		std::string _name;
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( const ClapTrap &obj );
		~ClapTrap();
		
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		debug();
};

#endif
