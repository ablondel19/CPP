/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:17 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/12 20:52:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					r;
		const static int 	rb;
	public:
		Fixed();
		Fixed(int n);
		Fixed(float f);
		Fixed(Fixed &Fixed);
		Fixed( const Fixed& f );
		~Fixed();
		Fixed 			&operator=( const Fixed &Fixed );
		int				getValue( void ) const;
		int				setValue( int const raw );
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream	&operator<<( std::ostream &o, Fixed const &Fixed );

#endif
