/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:04:13 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:24:42 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP
#include "Base.hpp"

class	B: public Base
{
	private:
		/* data */
	protected:
		/* data */
	public:
		B();
		B( const B &obj );
		B &operator=( const B &obj );
		~B();
};

#endif