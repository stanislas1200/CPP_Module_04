/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:09 by sgodin            #+#    #+#             */
/*   Updated: 2023/10/21 16:00:15 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	// me->equip(tmp); //need fix this ? (already equipped) double free at the end

	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);

	bob->use(1, *me); // no materia equipped

	// copy
	Character* me2 = new Character("me");
	Character* equal = new Character("equal");
	Character* equal2 = new Character(*me2);
	tmp = src->createMateria("ice");
	me2->equip(tmp);
	*equal = *me2;
	equal->use(0, *bob);
	equal2->use(0, *bob);

	me->unequip(1);
	me->use(1, *bob); // no materia equipped

	delete bob;
	delete me;
	delete me2;
	delete equal;
	delete equal2;
	delete src;

	return 0;
}
