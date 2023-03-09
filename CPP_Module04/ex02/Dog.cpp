/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:02:56 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/07 12:51:43 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << YELLOW <<"Dog constructor called\n" << NORMAL;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << YELLOW <<"Dog destructor called\n" << NORMAL;
}

Dog& Dog::operator=(const Dog& src)
{
	this->_type = src.getType();
	this->_brain = new Brain();
	for(int i = 0; i < 100; i++)
		this->_brain->setIdeas(src._brain->getIdeas(i), i);
	std::cout << YELLOW << "Dog copy assignment operator called\n" << NORMAL;
	return (*this);
}

Dog::Dog(const Dog& src): Animal(src)
{
	std::cout << YELLOW <<"Dog copy constructor called\n" << NORMAL;
}

void Dog::makeSound(void) const
{
	std::cout << YELLOW << "WOOOOOAAAAFFf!!!\n" << NORMAL; 
}

Brain* Dog::getBrain(void) const
{
	return (this->_brain);
}