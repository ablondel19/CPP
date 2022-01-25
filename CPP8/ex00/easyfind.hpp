/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:48:55 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 19:12:26 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int	easyfind( T data , int x)
{
	int n = sizeof(data);
	std::vector<int> vect(data, data + n);
	std::vector<int>::iterator it;
	it = std::find (vect.begin(), vect.end(), x);
	if (it != vect.end())
	    std::cout << "Element found in container: " << *it << '\n';
	else
	    std::cout << "Element not found in container\n";
	return 0;
}

#endif