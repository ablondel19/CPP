/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:05:05 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:23:02 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <random>
#include <iostream>
#include <exception>

class	Base
{
	private:
		/* data */
	protected:
		/* data */
	public:
		Base();
		Base( const Base &obj );
		Base &operator=( const Base &obj );
		virtual ~Base();
};

#endif