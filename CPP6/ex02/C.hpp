/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 21:04:48 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:24:39 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class	C: public Base
{
	private:
		/* data */
	protected:
		/* data */
	public:
		C();
		C( const C &obj );
		C &operator=( const C &obj );
		~C();
};

#endif