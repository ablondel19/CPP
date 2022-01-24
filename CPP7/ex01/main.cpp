/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:36:36 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 14:59:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main( void )
{
	int		t[5] = {0, 1, 2, 3, 4};
	iter(t, 5, display);
	std::cout << "|" << std::endl;

	float		f[5] = {0.0, 1.1, 2.2, 3.3, 4.4};
	iter(f, 5, display);
	std::cout << "|" << std::endl;

	char s[6] = "01234";
	iter(s, 5, display);
	std::cout << "|" << std::endl;
}
