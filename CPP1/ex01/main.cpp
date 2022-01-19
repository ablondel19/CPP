/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:08:42 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/19 14:48:19 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		i;

	i = 0;
	zombies = zombieHorde(5, "Goulish creature");
	while (i < 5)
	{
		zombies[i].announce();
		i++;
	}
	delete[](zombies);
}
