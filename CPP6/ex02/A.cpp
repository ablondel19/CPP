/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:11:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:23:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "__A Default constructor__" << std::endl;
}

A::A( const A &obj )
{
	std::cout << "__A Copy constructor__" << std::endl;
	*this = obj;
}

A	&A::operator=( const A &obj )
{
	std::cout << "__A Assignation operator__" << std::endl;
	(void)obj;
	return (*this);
}

A::~A()
{
	std::cout << "__A Default destructor__" << std::endl;
}
