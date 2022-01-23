/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:11:21 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:23:59 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "__B Default constructor__" << std::endl;
}

B::B( const B &obj )
{
	std::cout << "__B Copy constructor__" << std::endl;
	*this = obj;
}

B	&B::operator=( const B &obj )
{
	std::cout << "__B Assignation operator__" << std::endl;
	(void)obj;
	return (*this);
}

B::~B()
{
	std::cout << "__B Default destructor__" << std::endl;
}
