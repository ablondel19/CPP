/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:06:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:52:33 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	private:
	
	protected:
		std::string _type;
	public:
		Animal();
		Animal( const Animal &obj );
		Animal	&operator=( const Animal &obj );
		virtual ~Animal();
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif
