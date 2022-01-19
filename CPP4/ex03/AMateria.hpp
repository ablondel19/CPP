/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:37:35 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:57:32 by ablondel         ###   ########.fr       */
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
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &obj );
		AMateria &operator=( const AMateria &obj );
		virtual std::string const & getType() const;
		virtual ~AMateria();
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );
		
};

#endif