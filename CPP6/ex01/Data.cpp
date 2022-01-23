/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:17:09 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 18:27:05 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	//std::cout << "__Data Default constructor__" << std::endl;
}

Data::Data( std::string data) : _data(data)
{
	//std::cout << "__Data Parametric constructor__" << std::endl;
}

Data::Data( const Data &obj )
{
	//std::cout << "__Data Copy constructor__" << std::endl;
	this->_data = obj.getData();
}

Data	&Data::operator=( const Data &obj )
{
	//std::cout << "__Data Assignation operator__" << std::endl;
	this->_data = obj.getData();
	return (*this);
}

Data::~Data()
{
	//std::cout << "__Data Default destructor__" << std::endl;
}

std::__1::string Data::getData() const
{
	return (this->_data);
}

uintptr_t	serialize( Data *ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data *>(raw);
}
