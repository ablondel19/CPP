/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:37:48 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 15:53:23 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    public:
		void		attack(void);
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
    private:
		std::string	_name;
		Weapon		&_Weapon;
};

#endif
