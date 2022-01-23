/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:38:11 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:37:36 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	private:
		std::string _clubType;
	public:
		Weapon();
		Weapon( std::string newClub );
		~Weapon();
		void		setType( std::string );
		std::string &getType( void );
};


#endif
