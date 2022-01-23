/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:15:47 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 16:38:41 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void	announce( void );

};

Zombie	*zombieHorde(int N, std::string name);

#endif