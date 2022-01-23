/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:17:27 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 18:21:04 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#include <string>

class	Data
{
	private:
		std::string _data;
	protected:
		/* data */
	public:
		Data();
		Data( std::string data );
		Data( const Data &obj );
		Data &operator=( const Data &obj );
		std::string getData( void ) const;
		~Data();
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif