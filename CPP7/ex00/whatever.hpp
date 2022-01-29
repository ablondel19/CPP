/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:39:59 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 23:16:57 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template < typename T >
void	swap( T const & a, T const & b )
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const	& min( T const & a, T const & b )
{
	if (a < b)
		return a;
	return b;
}

template < typename T >
T const	& max( T const & a, T const & b )
{
	if (a > b)
		return a;
	return b;
}

#endif
