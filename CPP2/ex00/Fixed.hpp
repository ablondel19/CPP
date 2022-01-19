/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:17 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 15:00:16 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int 	_fractBits;
	public:
		Fixed();
		Fixed( const Fixed& f );
		~Fixed();
		void operator=( const Fixed &obj );
		int getRawBits( void ) const;
		int setRawBits( int const raw );
};

#endif
