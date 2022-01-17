/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:05:38 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:36:59 by ablondel         ###   ########.fr       */
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
	*this = obj;
}

Brain	&Brain::operator=( const Brain &obj )
{
	std::cout << "Brain Assignation operator" << std::endl;
	*this = obj;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Default destructor" << std::endl;
}
