/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:05:38 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 21:48:53 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor" << std::endl;
	_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = "Walouh!";
}

Brain::Brain( const Brain &obj )
{
	std::cout << "Brain Copy constructor" << std::endl;
	_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = obj._ideas[i];
}

Brain	&Brain::operator=( const Brain &obj )
{
	std::cout << "Brain Assignation operator" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Default destructor" << std::endl;
	delete [] _ideas;
}
