/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:40:46 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/26 21:28:12 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"

class Cat: virtual public Animal
{
	private:
		std::string	_type;
		Brain		*_brain;
	protected:

	public:
		Cat();
		Cat( const Cat &obj);
		void deepCopy( const Cat &obj );
		Cat	&operator=( const Cat &obj );
		~Cat();
		virtual std::string		getType( void ) const;
		virtual Brain			*getBrain( void ) const;
		virtual void			makeSound( void ) const;
};

#endif