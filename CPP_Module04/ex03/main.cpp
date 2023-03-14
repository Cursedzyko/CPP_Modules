/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:23:47 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 15:35:24 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
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

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		Character a("42");
		Cure c;
		c.use(a);
		std::cout << c.getType() << std::endl;
		AMateria* c2 = c.clone();
		std::cout << c2->getType() << std::endl << std::endl;

		Ice i;
		i.use(a);
		std::cout << i.getType() << std::endl;
		AMateria* i2 = i.clone();
		std::cout << i2->getType() << std::endl << std::endl << std::endl;
		
		delete c2;
		delete i2;;
	}
	return (0);
}