/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:42:02 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/14 16:19:25 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void	test1(void)
{
	std::cout << "\ntest2 >> Point dans le triangle" << std::endl;
	Point p(16.3f, 16.7f);
	Point a(0.0f, 0.0f), b(50.0f, 50.0f), c(0.0f, 50.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test2(void)
{
	std::cout << "\ntest2 >> Point sur le sommet" << std::endl;
	Point p(51.3f, 54.7f);
	Point a(10.4f, 10.5f), b(51.3f, 54.7f), c(3.8f, 52.1f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test3(void)
{
	std::cout << "\ntest2 >> Point hors du triangle" << std::endl;
	Point p(75.0f, 75.0f);
	Point a(0.0f, 0.0f), b(50.0f, 50.0f), c(0.0f, 50.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test4(void)
{
	std::cout << "\ntest2 >> Point sur l'arrete" << std::endl;
	Point p(0.0f, 15.0f);
	Point a(0.0f, 0.0f), b(50.0f, 50.0f), c(0.0f, 50.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test5(void)
{
	std::cout << "\ntest2 >> Point dans le triangle" << std::endl;
	Point p(1.0f, 1.0f);
	Point a(0.0f, 0.0f), b(50.0f, 50.0f), c(0.0f, 50.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test6(void)
{
	std::cout << "\ntest2 >> Point dans le triangle" << std::endl;
	Point p(6.3f, 6.7f);
	Point a(0.0f, 0.0f), b(10.0f, 10.0f), c(0.0f, 10.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test7(void)
{
	std::cout << "\ntest2 >> Point sur le sommet" << std::endl;
	Point p(10.4f, 10.5f);
	Point a(10.4f, 10.5f), b(51.3f, 54.7f), c(3.8f, 52.1f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test8(void)
{
	std::cout << "\ntest2 >> Point hors du triangle" << std::endl;
	Point p(15.0f, 15.0f);
	Point a(0.0f, 0.0f), b(5.0f, 5.0f), c(0.0f, 5.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test9(void)
{
	std::cout << "\ntest2 >> Point sur l'arrete" << std::endl;
	Point p(50.0f, 0.0f);
	Point a(0.0f, 0.0f), b(50.0f, 50.0f), c(0.0f, 50.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void	test10(void)
{
	std::cout << "\ntest2 >> Point dans le triangle" << std::endl;
	Point p(11.0f, 11.0f);
	Point a(0.0f, 0.0f), b(40.0f, 40.0f), c(0.0f, 40.0f);
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

int		main(void)
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	return (0);
}
