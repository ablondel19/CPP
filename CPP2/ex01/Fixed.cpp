/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/13 14:45:08 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << this->_fractBits);
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(f * (1 << this->_fractBits)));
	return ;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed &obj )
{
	*this = obj;
	return ;
}

Fixed::Fixed( const Fixed& obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed & Fixed::operator=( const Fixed &obj )
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(obj.getRawBits());
	return (*this);
}

std::ostream	&operator<<( std::ostream &o , Fixed const &obj)
{
	o << obj.toFloat();
	return (o);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_fixedPoint);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_fractBits);
}

float	Fixed::toFloat(void) const
{
	float f;

	f = (float)this->getRawBits() / (1 << this->_fractBits);
	return (f);
}
