/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:29:36 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:35:55 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << GREEN <<"Cat constructor called\n" << NORMAL;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << GREEN <<"Cat destructor called\n" << NORMAL;
}

Cat& Cat::operator=(const Cat& src)
{
	this->_type = src.getType();
	std::cout << GREEN <<"Cat copy assignment operator called\n" << NORMAL;
	return (*this);
}

Cat::Cat(const Cat& src)
{
	*this = src;
	std::cout << GREEN <<"Cat copy constructor called\n" << NORMAL;
}

void Cat::makeSound(void) const
{
	std::cout << GREEN << "MEEEEEOOOOOOW!!!\n" << NORMAL; 
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}