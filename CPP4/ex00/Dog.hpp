/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:41:51 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 09:44:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: virtual public Animal
{
	private:
		
	protected:

	public:
		using Animal::_type;
		Dog();
		Dog( const Dog &obj );
		Dog	&operator=( const Dog &obj );
		~Dog();
		virtual void	makeSound( void ) const;
};

#endif