/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/12 21:41:38 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::rb = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed &Fixed)
{
	std::cout << "Object constructor called" << std::endl;
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
	return ;
}

Fixed & Fixed::operator=( const Fixed &Fixed )
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<<( std::ostream &o , Fixed const &Fixed)
{
	o << Fixed.toFloat();
	return (o);
}

int	Fixed::getValue( void ) const
{
	return (this->r);
}

int	Fixed::setValue( int const r )
{
	this->r = r;
	return (r);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->r / (float)(1 << 8));
}

int		Fixed::toInt(void) const
{
	return (roundf(this->r * (1 << 8)));
}
