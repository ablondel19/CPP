/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:49:21 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 19:14:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int		main( void )
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	easyfind<int*>(tab, 5);
	easyfind<int*>(tab, 15);
	return 0;
}