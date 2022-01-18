/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:39:52 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 19:38:30 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class	Ice: virtual public AMateria
{
	private:
		using AMateria::_type;
	protected:
		
	public:
		Ice();
		Ice( const Ice &obj );
		Ice &operator=( const Ice &obj );
		~Ice();
		std::string const & getType() const;
		virtual AMateria* clone() const;
		virtual void use( ICharacter& target );
};

#endif