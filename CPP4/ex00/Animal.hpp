/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:06:23 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/16 21:41:11 by ablondel         ###   ########.fr       */
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

class Cat: virtual public Animal
{
	private:

	protected:
	
	public:
		using Animal::_type;
		Cat();
		Cat( const Cat &obj);
		Cat	&operator=( const Cat &obj );
		~Cat();
		virtual void	makeSound( void ) const;
};

#endif