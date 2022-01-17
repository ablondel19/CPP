/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:54:30 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/17 17:36:57 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
//#include "Animal.hpp"
/*Deep copying

One answer to this problem is to do a deep copy on any non-null pointers being copied. 
A deep copy allocates memory for the copy and then copies the actual value, so that the 
copy lives in distinct memory from the source. This way, the copy and source are distinct 
and will not affect each other in any way. Doing deep copies requires that we write our 
own copy constructors and overloaded assignment operators.*/

class	Brain//: public Animal
{
	private:
		std::string ideas[100];
	protected:
		Brain		*_Brain;
	
	public:
		Brain();
		Brain( const Brain &obj );
		Brain &operator=( const Brain &obj );
		~Brain();
};

#endif