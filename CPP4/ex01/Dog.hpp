/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:41:51 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 19:30:05 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"

class Dog: virtual public Animal
{
	private:
		std::string _type;
		Brain		*_Brain;
	protected:
		
	public:
		Dog();
		Dog( const Dog &obj );
		void deepCopy( const Dog &obj );
		Dog	&operator=( const Dog &obj );
		~Dog();
		virtual std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif
