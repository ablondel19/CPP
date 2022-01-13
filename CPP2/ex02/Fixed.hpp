/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:17 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/13 20:03:22 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int 	_fractBits;
	public:
		Fixed();
		Fixed( int n );
		Fixed( float f );
		Fixed( Fixed &obj );
		Fixed( const Fixed &obj );
		~Fixed();


		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;

		static 			Fixed &max(Fixed &obj1, Fixed &obj2 );
		static const 	Fixed &max(const Fixed &obj1, const Fixed &obj2 );
		static 			Fixed &min(Fixed &obj1, Fixed &obj2 );
		static const 	Fixed &min(const Fixed &obj1, const Fixed &obj2 );
		

		Fixed 			&operator=( const Fixed &obj );
		bool			operator>( const Fixed &obj ) const;
		bool 			operator<( const Fixed &obj ) const;
		bool 			operator>=( const Fixed &obj ) const;
		bool 			operator<=( const Fixed &obj ) const;
		bool 			operator==( const Fixed &obj ) const;
		bool 			operator!=( const Fixed &obj ) const;
		Fixed 			operator+( const Fixed &obj );
		Fixed 			operator-( const Fixed &obj );
		Fixed 			operator*( const Fixed &obj );
		Fixed 			operator/( const Fixed &obj );
		Fixed 			operator++();
		Fixed 			operator++( int );
};

std::ostream	&operator<<( std::ostream &o, Fixed const &obj );

#endif
