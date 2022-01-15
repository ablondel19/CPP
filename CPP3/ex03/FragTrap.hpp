/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:46:34 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/15 20:42:07 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
	
	protected:
	
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap &obj );
		~FragTrap();
		
		void		highFiveGuys( void );
		void		attack( std::string const & target );
};

#endif
