/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:41:51 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:53:49 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"

class Dog: virtual public Animal
{
	private:
		Brain	*_Brain;
	protected:
		
	public:
		using Animal::_type;
		Dog();
		Dog( const Dog &obj );
		void deepCopy( const Dog &obj );
		Dog	&operator=( const Dog &obj );
		virtual ~Dog();
		virtual void	makeSound( void ) const;
};

#endif
