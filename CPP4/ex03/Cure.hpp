/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:43:04 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 13:41:11 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class	Cure: virtual public AMateria
{
	private:
		using AMateria::_type;
	protected:
		
	public:
		Cure();
		Cure( const Cure &obj );
		Cure &operator=( const Cure &obj );
		virtual ~Cure();
		virtual std::string const & getType() const;
		virtual AMateria* clone() const;
		virtual void use( ICharacter& target );
};

#endif
