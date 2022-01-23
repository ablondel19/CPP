/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:48 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:46:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class Weapon;

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_Weapon;
	public:
		HumanA( std::string name, Weapon &Weapon );
		~HumanA();
		void		attack( void );
};

#endif
