/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:39:59 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 23:12:15 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template < typename T >
void	swap( T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const	&min( T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template < typename T >
T const	&max( T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
