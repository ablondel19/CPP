/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:40:46 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:53:06 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"

class Cat: virtual public Animal
{
	private:
		Brain	*_Brain;
	protected:

	public:
		using Animal::_type;
		Cat();
		Cat( const Cat &obj);
		void deepCopy( const Cat &obj );
		Cat	&operator=( const Cat &obj );
		~Cat();
		virtual void	makeSound( void ) const;
};

#endif