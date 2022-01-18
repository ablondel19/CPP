/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:06:22 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/18 20:01:53 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"

int		main( void )
{

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp1 = new Ice();
	AMateria* tmp2 = new Cure();
	me->equip(tmp1);
	me->use(0, *bob);
	//me->equip(tmp2);
	//me->use(0, *bob);
	/*
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	*/
	return 0;
}