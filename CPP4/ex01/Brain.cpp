/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:05:38 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:42:24 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor" << std::endl;
}

Brain::Brain( const Brain &obj )
{
	std::cout << "Brain Copy constructor" << std::endl;
	if (this != &obj)
	{
		this->_Brain = obj._Brain;
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
}

Brain	&Brain::operator=( const Brain &obj )
{
	std::cout << "Brain Assignation operator" << std::endl;
	if (this != &obj)
	{
		this->_Brain = obj._Brain;
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
		this->~Brain();
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Default destructor" << std::endl;
}
