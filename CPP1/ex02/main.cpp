/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:45:06 by ablondel          #+#    #+#             */
/*   Updated: 2021/11/06 17:01:51 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << &s << "\n";
    std::cout << stringPTR << "\n";
    std::cout << &stringREF << "\n";
	
    std::cout << *stringPTR << "\n";
    std::cout << stringREF << "\n";
}