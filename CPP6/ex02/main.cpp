/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:11:33 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/23 22:24:29 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int rdm(int min, int max)
{
	static bool first = true;
	if (first)
	{
		std::srand( time(NULL) );
		first = false;
	}
	return min + std::rand() % ((max + 1) - min);
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown Type" << std::endl;
}

void identify( Base & p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast &bc )
	{
		//std::cerr << bc.what() << '\n';
	}
	try
	{
		p = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast &bc )
	{
		//std::cerr << bc.what() << '\n';
	}
	try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast &bc )
	{
		//std::cerr << bc.what() << '\n';
	}
}

Base	*generate( void )
{
	Base *X = NULL;
	
	switch (rdm(1, 3))
	{
		case 1:
			X = new A();
			break ;
		case 2:
			X = new B();
			break ;
		case 3:
			X = new C();
			break ;
		default:
			std::cout << "Generate failed" << std::endl;
	}
	return (X);
}

int		main( void )
{
	Base *X = generate();
	identify(X);
	identify(*X);
	delete X;
	return 0;
}
