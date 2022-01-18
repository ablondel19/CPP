/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:47:55 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 13:48:35 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"

class	MateriaSource
{
	private:
		/* data */
	protected:
		/* data */
	public:
		MateriaSource();
		//MateriaSource(/* DATA */);
		MateriaSource( const MateriaSource &obj );
		MateriaSource &operator=( const MateriaSource &obj );
		~MateriaSource();
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif