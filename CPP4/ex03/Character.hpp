/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:44:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 19:36:14 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class	Character: virtual public ICharacter
{
	//The Character possesses an inventory of 4 Materia at most, empty at the start. He’ll
	//equip the Materia in slots 0 to 3, in this order.
	private:
		int			_idx;
		std::string	_name;
		AMateria	*_attack;
		AMateria	*_inventory[4];
	protected:
		
	public:
		Character(); // Default Character constructor
		Character( std::string name ); // Parametric Character constructor 
		Character( const Character &obj ); // deepCopy Character constructor
		Character &operator=( const Character &obj );
		~Character(); // Default character destructor 
		virtual std::string const &getName() const; // Returns the name of the Character
		std::string const &getType() const;
		void equip( AMateria* m ); // In case we try to equip a Materia in a full inventory, 
		//or use/unequip a nonexistent Materia, don’t do a thing.
		void unequip( int idx );// The unequip method must NOT delete Materia!
		virtual void use( int idx, ICharacter& target ); // The use(int, ICharacter&) method will have 
		//to use the Materia at the idx slot, and pass target as parameter to the AMateria::use method.
};

#endif