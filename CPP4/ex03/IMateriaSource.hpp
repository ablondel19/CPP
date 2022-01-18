/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:45:55 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 13:46:45 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria* ) = 0; // must copy the Materia passed as a parameter, 
		//and store it in memory to be cloned later. Much in the same way as for Character , the Source 
		//can know at most 4 Materia, which are not necessarily unique.
		virtual AMateria* createMateria( std::string const & type ) = 0; // will return a new Materia, 
		//which will be a copy of the Materia (previously learned by the Source) which type equals the 
		//parameter. Returns 0 if the type is unknown.
};

#endif