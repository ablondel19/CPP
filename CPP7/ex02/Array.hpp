/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:08:32 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 23:54:51 by ablondel         ###   ########.fr       */
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
			this->_size = n;
			for (unsigned i = 0; i < n; i++)
			{
				_t[i] = 0;
				std::cout << "[" << _t[i] << "]";
			}
			std::cout << std::endl;
		}
		Array( const Array &obj )
		{

		}
		Array &operator=( const T &obj )
		{
			
		}
		T &operator[](T index)
		{
			if (index >= size)
				std::cout << "Exception" << std::endl;
			return _t[index];
		}
		~Array()
		{
			delete[] this->_t;
		}
};



#endif