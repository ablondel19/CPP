/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/14 10:14:32 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& f )
{
	std::cout << "Copy constructor called" << std::endl;
	f.getRawBits();
	return ;
}

void Fixed::operator=( const Fixed &Fixed )
{
	std::cout << "Assignation operator called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

int	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	return (0);
}
