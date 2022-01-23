/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:11:59 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:24:25 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	std::cout << "__C Default constructor__" << std::endl;
}

C::C( const C &obj )
{
	std::cout << "__C Copy constructor__" << std::endl;
	*this = obj;
}

C	&C::operator=( const C &obj )
{
	std::cout << "__C Assignation operator__" << std::endl;
	(void)obj;
	return (*this);
}

C::~C()
{
	std::cout << "__C Default destructor__" << std::endl;
}
