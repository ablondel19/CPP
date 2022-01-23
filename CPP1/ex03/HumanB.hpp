/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:55 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:52:40 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
		std::string	_name;
		Weapon		*_Weapon;
     public:
		HumanB( std::string name );
		void		attack( void );
        void        setWeapon( Weapon &club );
		~HumanB();
};

#endif
