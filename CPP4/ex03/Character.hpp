/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:44:20 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 13:49:17 by ablondel         ###   ########.fr       */
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
	private:
		std::string	_name;
		int			_idx;
		AMateria	*_inventory[4];
	protected:
		
	public:
		Character();
		Character( std::string name );
		Character( const Character &obj );
		Character &operator=( const Character &obj );
		~Character();
		virtual std::string const &getName() const;
		virtual std::string const &getType() const;
		void equip( AMateria* m );
		void unequip( int idx );
		virtual void use( int idx, ICharacter& target );
		virtual void debugInventory() const;
};

#endif