/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:39:38 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/29 13:00:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	//std::cout << "__Span Default constructor__" << std::endl;
}

Span::Span( unsigned n )
{
	//std::cout << "__Span Parametric constructor__" << std::endl;
}

Span::Span( const Span &obj )
{
	//std::cout << "__Span Copy constructor__" << std::endl;
}

Span			&Span::operator=( const Span &obj )
{
	//std::cout << "__Span Assignation operator__" << std::endl;
	return (*this);
}

std::vector<int> Span::getVector() const
{
	return _v;
}

unsigned		Span::getSize() const
{
	return _n;
}

void 			Span::addNumber(int value)
{
	
}

unsigned		Span::shortestSpan()
{
	return 0;
}

unsigned		Span::longestSpan()
{
	return 0;
}

Span::~Span()
{
	//std::cout << "__Span Default destructor__" << std::endl;
}
