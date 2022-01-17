/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:37:06 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 13:05:06 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point( const Fixed x, const Fixed y ) : _x(x), _y(y) {}

Point::Point( const Point& p ) : _x(p.getX()), _y(p.getY()) {}

Point::~Point() {}

Point	&Point::operator=( Point &obj )
{
	return (obj);
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}

bool	Point::bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed w1;
	Fixed w2;
	if (p.getX() == a.getX() || p.getX() == b.getX() || p.getX() == c.getX())
		return (false);
	if (p.getY() == a.getY() || p.getY() == b.getY() || p.getY() == c.getY())
		return (false);
	w1 = (a.getX() * (c.getY() - a.getY()) + (p.getY() - a.getY()) * (c.getX() - a.getX()) - p.getX() * (c.getY() - a.getY())) / ((b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY()));
	w2 = (p.getY() - a.getY() - w1 * (b.getY() - a.getY())) / (c.getY() - a.getY());
	if (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1)
		return (true);
	return (false);
}
