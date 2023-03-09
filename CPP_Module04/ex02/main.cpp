/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:03:49 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/09 15:17:24 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


/*Shallow copy = copy will copy pointer to a pointer but they will point to same address
Deep copy = copying value to another address*/
int main()
{
	{
		Brain brain;
		std::cout << "Brain idea: " << brain.getIdeas(1) << std::endl;
		std::cout << "Brain idea: " << brain.getIdeas(200) << std::endl;
		brain.setIdeas("Coding", 0);
		std::cout << "Brain idea: " << brain.getIdeas(0) << std::endl << std::endl;
	}
	{
		Dog* a = new Dog();
		Dog* b = new Dog();
		Dog d;
		std::cout << "\n+++++++Brain dog A++++++++++++" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << a->getBrain()->getIdeas(i) << std::endl;
		for (int i = 0; i < 5; i++)
		{
			if (i % 2 == 0)
				b->getBrain()->setIdeas("This my even ideas", i);
			else
				b->getBrain()->setIdeas("This my odd ideas", i);
		}
		std::cout << "\n+++++++Brain cat B++++++++++++" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << b->getBrain()->getIdeas(i) << std::endl;
		std::cout << "\nAssigning cat B to cat D (deep copying)" << std::endl;
		d = *b;
		std::cout << "\n+++++++Brain cat D++++++++++++" << std::endl;
		d.getBrain()->setIdeas("Changed idea", 2);
		for (int i = 0; i < 5; i++)
			std::cout << d.getBrain()->getIdeas(i) << std::endl;
		std::cout << "\n+++++++Brain cat B++++++++++++" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << b->getBrain()->getIdeas(i) << std::endl;
		delete a;
		delete b;
	}
	{
		std::cout << CYAN << "\n\n+++++++++++++++Abstract class test+++++++++++++" << NORMAL << std::endl;
		Animal *a = new Cat();
		Animal *b = new Dog();
		std::cout << "\n" <<a->getType() << " ";
		a->makeSound();
		std::cout << "\n" << b->getType() << " ";
		b->makeSound();
		// Animal* def = new Animal();
		// std::cout << "\n" << def->getType() << " ";
		// def->makeSound();
		delete a;
		delete b;
		// delete def;
	}
	return (0);
}
