/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:45:06 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 13:36:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s; // Pointer to string
    std::string &stringREF = s; // Reference to string
    std::cout << &s << std::endl; // Address using &
    std::cout << stringPTR << std::endl; // Address using pointer
    std::cout << &stringREF << std::endl; // Address using reference
    std::cout << *stringPTR << std::endl; // String using pointer
    std::cout << stringREF << std::endl; // String using reference
}
