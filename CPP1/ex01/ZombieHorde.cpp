/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:22:44 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 13:31:55 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie *zombies = new Zombie[N];

	while (i < N)
	{
		zombies[i] = Zombie(name);
		i++;
	}
	return (zombies);
}
