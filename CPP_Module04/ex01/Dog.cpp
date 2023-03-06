/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:02:56 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:37:22 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
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
	std::cout << YELLOW << "Dog copy assignment operator called\n" << NORMAL;
	return (*this);
}

Dog::Dog(const Dog& src)
{
	*this = src;
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