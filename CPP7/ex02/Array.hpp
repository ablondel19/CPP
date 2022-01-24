/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:08:32 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 16:13:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template < typename T >
class	Array
{
	private:
		/* data */
	protected:
		/* data */
	public:
		Array();
		Array( unsigned int n );
		Array( const Array &obj );
		Array &operator=( const Array &obj );
		~Array();
};



#endif