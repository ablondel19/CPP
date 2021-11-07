/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:08:42 by ablondel          #+#    #+#             */
/*   Updated: 2021/11/06 18:37:18 by ablondel         ###   ########.fr       */
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
        zombie = newZombie(av[i]);
		randomChump(av[i]);
        delete(zombie);
        i++;
    }
}