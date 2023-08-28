/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:56:08 by houaslam          #+#    #+#             */
/*   Updated: 2023/08/28 15:20:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	
	AMateria* cure = new Cure();
	AMateria* ice = new Ice();
	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp;
	delete cure;
	delete ice;

	return 0;
}

// int main()
// {
// 	// IMateriaSource* src = new MateriaSource();
// 	// AMateria* cure = new Cure();
// 	// AMateria* ice = new Ice();
// 	// src->learnMateria(ice);
// 	// src->learnMateria(cure);

// 	// ICharacter* me = new Character("me");
// 	// AMateria* tmp;
// 	// AMateria* tmp2;

// 	// tmp = src->createMateria("cure");
// 	// me->equip(tmp);
// 	// tmp2 = src->createMateria("ice");
// 	// me->equip(tmp2);

// 	// ICharacter* bob = new Character("bob");
// 	// std::cout << std::endl;
// 	// me->use(0, *bob);
// 	// me->use(1, *bob);
// 	// std::cout << std::endl;

// 	// delete bob;
// 	// delete me;
// 	// delete src;
// 	// delete tmp;
// 	// delete tmp2;
// 	// delete cure;
// 	// delete ice;
// 	AMateria *ptr = new Ice();
// 	Character *c = new Character("name");
// 	Character *c1 = new Character("other");
// 	c->equip(ptr);
// 	delete ptr;
// 	c->use(0, *c1);

// 	delete c;
// 	delete c1;

// 	return 0;
// }

