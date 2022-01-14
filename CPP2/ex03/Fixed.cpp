/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:03 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/14 12:34:22 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed()
{
	this->_fixedPoint = 0;
	return ;
}

Fixed::Fixed(const int n)
{
	setRawBits(n << this->_fractBits);
	return ;
}

Fixed::Fixed(const float f)
{
	this->setRawBits((int)roundf(f * (1 << this->_fractBits)));
	return ;
}

Fixed::~Fixed() {};

Fixed::Fixed( const Fixed &obj )
{
	*this = obj;
	return ;
}

Fixed::Fixed( Fixed &obj )
{
	*this = obj;
	return ;
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

Fixed & Fixed::operator=( const Fixed &obj )
{
	setRawBits(obj.getRawBits());
	return (*this);
}

bool	Fixed::operator>( const Fixed &obj ) const
{
	return (this->_fixedPoint > obj.getRawBits() ? 1 : 0);
}

bool	Fixed::operator<( const Fixed &obj ) const
{
	return (this->_fixedPoint < obj.getRawBits() ? 1 : 0);
}

bool	Fixed::operator>=( const Fixed &obj ) const
{
	return (this->_fixedPoint >= obj.getRawBits() ? 1 : 0);
}

bool	Fixed::operator<=( const Fixed &obj ) const
{
	return (this->_fixedPoint <= obj.getRawBits() ? 1 : 0);
}

bool	Fixed::operator==( const Fixed &obj ) const
{
	return (this->_fixedPoint == obj.getRawBits() ? 1 : 0);
}

bool	Fixed::operator!=( const Fixed &obj ) const
{
	return (this->_fixedPoint != obj.getRawBits() ? 1 : 0);
}

Fixed	Fixed::operator+( const Fixed &obj )
{
	Fixed res(this->toFloat() - obj.toFloat());
	return (res);
}

Fixed	Fixed::operator-( const Fixed &obj )
{
	Fixed res(this->toFloat() - obj.toFloat());
	return (res);
}

Fixed	Fixed::operator*( const Fixed &obj )
{
	Fixed res(this->toFloat() * obj.toFloat());
	return (res);
}

Fixed	Fixed::operator/( const Fixed &obj )
{
	Fixed res(this->toFloat() / obj.toFloat());
	return (res);
}

Fixed	Fixed::operator++(  )
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;
	this->_fixedPoint++;
	return (tmp);
}

const Fixed &Fixed::max( const Fixed &obj1, const Fixed &obj2 )
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed &Fixed::max( Fixed &obj1, Fixed &obj2 )
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

const Fixed &Fixed::min( const Fixed &obj1, const Fixed &obj2 )
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed &Fixed::min( Fixed &obj1, Fixed &obj2 )
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}
