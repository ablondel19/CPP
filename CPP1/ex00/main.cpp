/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:08:42 by ablondel          #+#    #+#             */
/*   Updated: 2021/11/06 15:14:51 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie	*zombie;
    int		i;

    i = 1;
	zombie = NULL;
    while (av[i])
    {
		std::cout << "--NEW ZOMBIE with newZombie(std::string name)\n\n";
        zombie = newZombie(av[i]);
		std::cout << "--NEW ZOMBIE with randomChump(std::string name)\n\n";
		randomChump(av[i]);
		std::cout << "--ZOMBIE with member ft announce(void)\n\n";
		zombie->announce();
        delete(zombie);
        i++;
    }
}