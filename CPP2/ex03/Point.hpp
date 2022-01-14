/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:36:57 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/14 13:23:02 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point();
	Point( const Fixed x, const Fixed y );
	Point( const Point& p );
	~Point();
	
	Point	&operator=( Point &obj );
	
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	bool	bsp( Point const a, Point const b, Point const c, Point const p);
};

#endif
