/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:00:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 14:00:39 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _idx(0)
{
	//std::cout << "__MateriaSource Default constructor__" << std::endl;
	for (size_t i = 0; i <= 3; i++)
	{
		this->_materias[i] = "";
		this->_recipes[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &obj )
{
	//std::cout << "__MateriaSource Copy constructor__" << std::endl;
	*this = obj;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &obj )
{
	//std::cout << "__MateriaSource Assignation operator__" << std::endl;
	*this = obj;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	//std::cout << "__MateriaSource Default destructor__" << std::endl;
	for (size_t i = 0; i <= 3; i++)
	{
		if (this->_recipes[i] != NULL)
			delete this->_recipes[i];
	}
}

void MateriaSource::learnMateria( AMateria* obj )
{
	if (obj)
	{
		if (this->_idx < 0 || this->_idx > 3)
			return ;
		this->_materias[this->_idx].append(obj->getType());
		this->_idx++;
		delete obj;
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	AMateria *neo;

	for (size_t i = 0; i <= 3; i++)
	{
		if (type.compare(this->_materias[i]) == 0 && this->_materias[i].compare("ice") == 0)
		{
			neo = new Ice();
			return neo;
		}
		else if (type.compare(this->_materias[i]) == 0 && this->_materias[i].compare("cure") == 0)
		{
			neo = new Cure();
			return neo;
		}
	}
	return 0;
}
