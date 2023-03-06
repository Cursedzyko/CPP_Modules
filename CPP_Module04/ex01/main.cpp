/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:03:49 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:51:54 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


/*Shallow copy = copy will copy pointer to a pointer but they will point to same address
Deep copy = copying value to another address*/
int main()
{
Animal	*animals[8];
	Brain	*brain;

	std::cout << "\nCreatig Animals' array\n" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "Assigning some ideas ti animal[7]" <<std::endl;
	brain = animals[7]->getBrain();
	brain->setIdeas("I'm hungry", 0);
	brain->setIdeas("That's a strange idea I'm having", 1);
	brain->setIdeas("Ball!!!!!", 2);
	brain->setIdeas("Squirrel!!!!!", 3);
	std::cout << "First idea of animal[7]: " << brain->getIdeas(0) << std::endl;

	std::cout << "\nAssigning animal[7] to animal[5]" << std::endl;
	*(animals[5]) = *(animals[7]);
	std::cout << "First idea of animal[5]: " << animals[5]->getBrain()->getIdeas(0) << std::endl;

	std::cout << "\nAdding different ideas to animals[5] and animals[7] (deep copy)" << std::endl;
	animals[5]->getBrain()->setIdeas("Last idea of animals[5]", 4);
	animals[7]->getBrain()->setIdeas("Last idea of animals[7]", 4);
	std::cout << "Last idea of animal[5]: " << animals[5]->getBrain()->getIdeas(4) << std::endl;
	std::cout << "Last idea of animal[7]: " << animals[7]->getBrain()->getIdeas(4) << std::endl;
	
	std::cout << "\nDestructing Animals\n" << std::endl;
	for (int i = 0; i < 8; i++)
		delete animals[i];
}
