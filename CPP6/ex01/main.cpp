/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:15:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 18:43:56 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int		main( void )
{
	//Prenez une adresse "Data" et utilisez serialize sur celle-ci.
	Data 		data1 = Data("test1");

	
	uintptr_t 	data2 = serialize(&data1);
	std::cout << "SERIALIZATION------------------------------" << std::endl;
	std::cout << "adress of data1: " << &data1 << std::endl;
	std::cout << "value in data1:  " << data1.getData() << std::endl;
	std::cout << "adress of data2: " << &data2 << std::endl;
	std::cout << "value in data2:  " << data2 << std::endl;
	//Envoyez la valeur de retour dans deserialize.
	
	
	data1 = *deserialize(data2);
	std::cout << "DESERIALIZATION----------------------------" << std::endl;
	//Vérifiez si la valeur de retour est égale au premier pointeur.
	std::cout << "adress of data1: " << &data1 << std::endl;
	std::cout << "value in data1:  " << data1.getData() << std::endl;
	std::cout << "adress of data2: " << &data2 << std::endl;
	std::cout << "value in data2:  " << data2 << std::endl;
	//std::cout << data2 << std::cout;
}