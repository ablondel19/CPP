/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:36:13 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 21:16:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T >
void	print( T const & x )
{
	std::cout << x << std::endl;
}

template < typename T >
void	iter( T *array, int len, void f(T const & x))
{
	for (int i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

#endif