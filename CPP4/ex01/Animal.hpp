/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:06:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 20:33:20 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	private:
		std::string _type;
	protected:
	
	public:
		Animal();
		Animal( const Animal &obj );
		Animal	&operator=( const Animal &obj );
		virtual ~Animal();
		virtual std::string		getType( void ) const;
		virtual void			makeSound( void ) const;
};

#endif
