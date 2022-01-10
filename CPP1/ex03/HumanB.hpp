/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:55 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 16:05:26 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
     public:
		void		attack(void);
        void        setWeapon(Weapon &club);
		HumanB(std::string name);
		~HumanB();
    private:
		std::string	_name;
		Weapon		*_Weapon;
};

#endif
