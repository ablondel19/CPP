/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:18:42 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/22 14:00:13 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Karen.hpp"


int		main()
{
	Karen o;

	o.complain("ERROR");
	o.complain("WARNING");
	o.complain("INFO");
	o.complain("DEBUG");
	o.complain("WHAT?");
}