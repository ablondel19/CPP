/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:15:47 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/11 13:59:37 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# include <iostream>
# include <iomanip>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		
	private:
		std::string name;
};

Zombie*	newZombie(std::string name);
void 	randomChump(std::string name);

#endif