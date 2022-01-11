/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:15:47 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/11 14:13:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie() {}
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

};

Zombie	*zombieHorde(int N, std::string name);

#endif