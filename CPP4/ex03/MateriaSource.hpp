/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:47:55 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 13:15:06 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class	MateriaSource: virtual public IMateriaSource
{
	private:
		int			_idx;
		std::string	_materias[4];
		AMateria	*_recipes[4];
	protected:
		/* data */
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &obj );
		MateriaSource &operator=( const MateriaSource &obj );
		~MateriaSource();
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif