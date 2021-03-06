/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:08:32 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 21:26:42 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template < typename T >
class	Array
{
	private:
		T			*_t;
		unsigned	_size;
	protected:
		/* data */
	public:
		Array()
		{
			_t = new T[1];
			_t[0] = 0;
		}
		Array( unsigned int n )
		{
			_t = new T[n];
			_size = n;
			for (size_t i = 0; i < n; i++)
				_t[i] = 0;
		}
		Array( const Array &obj )
		{
			*this = obj;
		}
		Array &operator=( const T &obj )
		{
			T *tmp = new T[obj._size];
			for (size_t i = 0; i < obj._size; i++)
			{
				tmp[i] = obj._t[i];
			}
			delete [] _t;
			_t = tmp;
			return _t;
		}
		T &operator[](int index)
		{
			if (index < 0 || index > static_cast<int>(_size))
				throw ( std::exception() );
			else
				return _t[index];
		}
		~Array() {};
};



#endif