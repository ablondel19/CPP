/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:22:44 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/11 14:12:22 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
	{
		zombies[i] = Zombie(name);
		i++;
	}
	return (zombies);
}
