/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:04:34 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:22:25 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::Base()
{
	//std::cout << "__Base Default constructor__" << std::endl;
}

Base::Base( const Base &obj )
{
	//std::cout << "__Base Copy constructor__" << std::endl;
	(void)obj;
}

Base	&Base::operator=( const Base &obj )
{
	//std::cout << "__Base Assignation operator__" << std::endl;
	(void)obj;
	return (*this);
}

Base::~Base()
{
	//std::cout << "__Base Default destructor__" << std::endl;
}
