/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:08:13 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/10 20:49:08 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H
#include <iostream>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Karen();
		~Karen();
		void	complain(int level);
};



#endif