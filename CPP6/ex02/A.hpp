/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:02:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:24:46 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class	A: public Base
{
	private:
		/* data */
	protected:
		/* data */
	public:
		A();
		A( const A &obj );
		A &operator=( const A &obj );
		~A();
};

#endif