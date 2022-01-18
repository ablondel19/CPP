/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:41:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 17:29:23 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp"
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {} // Interface default constructor
		virtual std::string const & getName() const = 0; // Returns the name of the character
		virtual void equip( AMateria* m ) = 0; // Equip a new materia
		virtual void unequip( int idx ) = 0; // Discard an existing Materia
		virtual void use( int idx, ICharacter& target ) = 0; // displays 
		//Ice: "* shoots an ice bolt at NAME *" || Cure: "* heals NAME’s wounds *"
		//(Of course, replace NAME by the name of the Character given as parameter.)
};

#endif