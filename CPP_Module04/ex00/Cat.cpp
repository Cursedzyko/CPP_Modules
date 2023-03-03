/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:29:36 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/03 14:09:11 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << GREEN <<"Cat constructor called\n" << NORMAL;
}

Cat::~Cat(void)
{
	std::cout << GREEN <<"Cat destructor called\n" << NORMAL;
}

Cat& Cat::operator=(const Cat& src)
{
	this->_type = src._type;
	std::cout << GREEN <<"Cat copy assignment operator called\n" << NORMAL;
	return (*this);
}

Cat::Cat(const Cat& src)
{
	this->_type = src._type;
	std::cout << GREEN <<"Cat copy constructor called\n" << NORMAL;
}

void Cat::makeSound(void) const
{
	std::cout << GREEN << "MEEEEEOOOOOOW!!!\n" << NORMAL; 
}
