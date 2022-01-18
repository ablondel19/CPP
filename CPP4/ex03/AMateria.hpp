/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:37:35 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 19:03:07 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class	AMateria
{
	private:
	
	protected:
		std::string _type;
		AMateria	*_inventory[4];
	public:
		AMateria(); // AMateria constructor
		AMateria( std::string const & type ); // Parametric constructor
		AMateria( const AMateria &obj ); // Basic copy constructor
		AMateria &operator=( const AMateria &obj ); // Assignation AMateria obj
		std::string const & getType() const; // Returns the materia type
		virtual ~AMateria(); // AMateria destructor
		virtual AMateria* clone() const = 0; // Returns an instance of the real Materia's type
		virtual void use( ICharacter& target );
};

#endif