/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:00:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/27 13:42:56 by ablondel         ###   ########.fr       */
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
	if (this != &obj) 
	{
    	this->_idx = obj._idx;
		for (int i = 0; i < 4; i++)
		{
        	AMateria const *temp = obj._recipes[i];
        	if (temp)
        	    this->_recipes[i] = temp->clone();
        	else
        	    this->_recipes[i] = NULL;
			this->_materias[i] = obj._materias[i];
        }
    }
}

MateriaSource &MateriaSource::operator=( MateriaSource const &obj ) 
{
    if (this != &obj)
	{
        this->_idx = obj._idx;
        this->~MateriaSource();
        for (int i = 0; i < 4; i++)
		{
            AMateria const *temp = obj._recipes[i];
            if (temp)
                this->_recipes[i] = temp->clone();
            else
                this->_recipes[i] = NULL;
			this->_materias[i] = obj._materias[i];
        }
    }
    return *this;
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
		if (type == _materias[i] && type == "ice")
		{
			neo = new Ice();
			return neo;
		}
		else if (type == _materias[i] && type == "cure")
		{
			neo = new Cure();
			return neo;
		}
	}
	return 0;
}
