/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:39:57 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 16:53:52 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CONV_HPP
#define CONV_HPP
#include <string>
#include <iostream>
#include <exception>
#include <limits>
#include <iomanip>

class	Conv
{
	private:
		std::string _value;
	protected:
		/* data */
	public:
		Conv();
		Conv( std::string value );
		Conv( const Conv &obj );
		Conv &operator=( const Conv &obj );
		std::string getValue( void ) const;
		int	prec( std::string value );
		operator char();
		operator int();
		operator float();
		operator double();
		~Conv();
};

#endif