/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 01:03:55 by ablondel          #+#    #+#             */
/*   Updated: 2021/11/06 18:08:57 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac >= 2)
	{
		while (av[i])
		{
			while (av[i][j])
				putchar(toupper(av[i][j++]));
			j = 0;
			i++;
		}
		putchar('\n');
	}
	else
		std::cout << "* LOUND AND UNBEARABLE NOISE *" << std::endl;
	return (0);
}